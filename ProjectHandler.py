import datetime
import json
import os
from pathlib import Path
import copy

def create_vscode_folder(path : str, project : dict):
    if not os.path.exists(os.path.join(path, ".vscode")):
        os.makedirs(os.path.join(path, ".vscode"))
        print("Created .vscode folder")

    create_settings(os.path.join(path, ".vscode"), project)
    create_c_cpp_properties(os.path.join(path, ".vscode"), project)
    create_tasks(os.path.join(path, ".vscode"), project)
    create_launch(os.path.join(path, ".vscode"), project)

def create_launch(path : str, project : dict):
    json_template = {
        "version": "0.2.0",
        "configurations": [
            {
                "name": "x86_x64 UnitTest",
                "cwd": "${workspaceFolder}",
                "type": "cppdbg",
                "request": "launch",
                "program": "${workspaceFolder}/.obj/unittest_x86_x64/main.exe",
                "MIMode": "gdb",
                "miDebuggerPath": "C:\\msys64\\mingw64\\bin\\gdb.exe",
                "setupCommands": [
                    {
                        "description": "Enable pretty-printing for gdb",
                        "text": "-enable-pretty-printing",
                        "ignoreFailures": True
                    },
                    {
                        "description":  "Set Disassembly Flavor to Intel",
                        "text": "-gdb-set disassembly-flavor intel",
                        "ignoreFailures": True
                    }
                ],
                "args": [
                    "-a",
                    "--colour",
                    "-s"
                ],
                "preLaunchTask": "x86_x64 Build UnitTest"
            }
        ]
    }
    json_template["configurations"] += project["custom-launch-configurations"]

    with open(os.path.join(path, "launch.json"), "w") as file:
        json.dump(json_template, file, indent=4)
    print("Created tasks.json")

def create_tasks(path : str, project : dict):
    json_template = {
    "version": "2.0.0",
    "tasks": [
        {
            "label": "x86_x64 Build UnitTest",
            "type": "shell",
            "command": "make",
            "args": [
                "unittest_x86_x64_build",
                "UNIT=${input:UNIT}"
            ],
            "group": {
                "kind": "build",
                "isDefault": True
            }
        },
        {
            "label": "x86_x64 Run UnitTest",
            "command":".\\.obj\\unittest_x86_x64\\main.exe",
            "args": [
                "--colour",
                "-a",
                "-s"
            ],
            "type": "shell",
            "group": {
                "kind": "test",
                "isDefault": True
            },
            "dependsOn": "x86_x64 Build UnitTest"
        },
        {
            "label": "Target Build UnitTest",
            "type": "shell",
            "command": "make",
            "args": [
                "unittest_platform_build",
                "UNIT=${input:UNIT}"
            ],
            "group": {
                "kind": "build",
                "isDefault": True
            }
        },
        {
            "label": "Target Flash UnitTest",
            "type": "shell",
            "command": "make",
            "args": [
                "unittest_platform_flash",
                "UNIT=${input:UNIT}"
            ]
        },
        {
            "label": "Target Run UnitTest",
            "type": "shell",
            "command": "make",
            "args": [
                "unittest_platform_run",
                "UNIT=${input:UNIT}"
            ],
            "group": {
                "kind": "test",
                "isDefault": True
            }
        },
        {
            "label": "Software build",
            "type": "shell",
            "command": "make",
            "args": [
                "all"
            ],
            "group": {
                "kind": "build",
                "isDefault": True
            }
        },
        {
            "label": "Software flash",
            "type": "shell",
            "command": "make",
            "args": [
                "flash"
            ],
            "dependsOn": "Software build"
        },
        {
            "label": "Clean",
            "type": "shell",
            "command": "make",
            "args": [
                "clean"
            ]
        },
        {
            "label": "Unit stub generation",
            "type": "shell",
            "command": "make",
            "args": [
                "stubgen",
                "UNIT=${input:UNIT}"
            ]
        },
        {
            "label": "Generate Coverage",
            "type": "shell",
            "command": "make",
            "args": [
                "coverage",
                "UNIT=${input:UNIT}"
            ]
        },
        {
            "label": "Generate Coverage HTML",
            "type": "shell",
            "command": "make",
            "args": [
                "coverage-html",
                "UNIT=${input:UNIT}"
            ]
        },
        {
            "label": "Toggle coverage",
            "command": "${command:gcov-viewer.toggle}"
        },
        {
            "label": "Reload coverage",
            "command": "${command:gcov-viewer.reloadGcdaFiles}"
        },
        {
            "label": "Check dependencies",
            "type": "shell",
            "command": "make",
            "args": [
                "check"
            ]
        }

    ],
    "inputs": [
        {
            "id": "UNIT",
            "type": "command",
            "command": "cpptools.activeConfigCustomVariable",
            "args": "UNIT"
        }
    ]
}

    with open(os.path.join(path, "tasks.json"), "w") as file:
        json.dump(json_template, file, indent=4)
    print("Created tasks.json")

def create_settings(path : str, project : dict):
    # Create settings.json
    json_template = {
        "taskExplorer.pathToMake" : "make",
        "gcovViewer.highlightMissedLines" : True,
        "gcovViewer.buildDirectories" : [
            "${workspaceFolder}/.obj"
        ]
    }
    with open(os.path.join(path, "settings.json"), "w") as file:
        json.dump(json_template, file, indent=4)
    print("Created settings.json")

def create_c_cpp_properties(path : str, project : dict):
    # Create a c_cpp_properties.json file
    config_template = {
        "name": "",
        "includePath": [
            "${workspaceFolder}/**"
        ],
        "defines": [
            "UNITTEST=1"
        ],
        "customConfigurationVariables": {
                "UNIT":""
        },
        "compilerPath": "C:\\msys64\\mingw64\\bin\\gcc.exe",
        "cStandard": "gnu99",
        "cppStandard": "c++98",
        "intelliSenseMode": "windows-gcc-x64"
    }
    json_template = {
        "configurations": [
        ],
        "version": 4
    }

    include_paths = ["${workspaceFolder}/UnitTestRunner/include"]
    for component in project["components"]:
        include_paths += {"${workspaceFolder}/" + component["name"] + "/Unit/include"}

    for component in project["components"]:
        config = copy.deepcopy(config_template)
        config["name"] = component["name"] + " UnitTest"
        config["includePath"] += include_paths
        config["includePath"] += project["platform-include-paths"]
        config["includePath"] += {"${workspaceFolder}/" + component["name"] + "/UnitTest/include"}
        config["includePath"] += {"${workspaceFolder}/" + component["name"] + "/UnitTest/include/stubs"}
        config["defines"] += project["platform-defines"]
        config["customConfigurationVariables"]["UNIT"] = component["name"]
        json_template["configurations"].append(config)

    project["platform-template"]["name"] = project["name"]
    project["platform-template"]["includePath"] += include_paths
    project["platform-template"]["includePath"] += project["platform-include-paths"]
    project["platform-template"]["defines"] += project["platform-defines"]
    json_template["configurations"].append(project["platform-template"])


    with open(os.path.join(path, "c_cpp_properties.json"), "w") as file:
        json.dump(json_template, file, indent=4)
    print("Created c_cpp_properties.json")

def create_db_mk(path : str, project : dict):
    # Create a database.mk file
    file = open(os.path.join(path, "database.mk"), "w")
    file.write("UNITLIST = \n")
    for component in project["components"]:
        file.write("UNITLIST += " + component["name"] + "\n")

def create_tree(path : str, project : dict):
    # Create a tree of directories and files
    for component in project["components"]:
        # create directory if it doesn't exist
        if not os.path.exists(os.path.join(path, component["name"])): 
            os.makedirs(os.path.join(path, component["name"]))
        if not os.path.exists(os.path.join(path, component["name"],"Unit")): 
            os.makedirs(os.path.join(path, component["name"], "Unit"))
        if not os.path.exists(os.path.join(path, component["name"],"Unit","src")):
            os.makedirs(os.path.join(path, component["name"], "Unit", "src"))
        if not os.path.exists(os.path.join(path, component["name"],"Unit","include")):
            os.makedirs(os.path.join(path, component["name"], "Unit", "include")) 
        if not os.path.exists(os.path.join(path, component["name"],"Unit")): 
            os.makedirs(os.path.join(path, component["name"], "UnitTest"))
        if not os.path.exists(os.path.join(path, component["name"],"UnitTest","src")):
            os.makedirs(os.path.join(path, component["name"], "UnitTest", "src")) 
        if not os.path.exists(os.path.join(path, component["name"],"UnitTest","include")):
            os.makedirs(os.path.join(path, component["name"], "UnitTest", "include")) 
        if not os.path.exists(os.path.join(path, component["name"],"UnitTest","src","stubs")):
            os.makedirs(os.path.join(path, component["name"], "UnitTest", "src","stubs")) 
        if not os.path.exists(os.path.join(path, component["name"],"UnitTest","include","stubs")):
            os.makedirs(os.path.join(path, component["name"], "UnitTest", "include","stubs")) 
            print("Created directory tree for " + component["name"])
        else:
            print( component["name"] + " already exists, skipping...")
    
    # Create files for each component
    create_files(path, project)
    
def create_unit_source(path : str, name : str):
    # Create a source file for the unit test
    if not os.path.exists(os.path.join(path, name + ".c")):
        file = open(os.path.join(path, name + ".c"), "w")
        file.write("/**\n * @file " + name + ".c\n * @brief TODO\n * @date " + datetime.datetime.now().strftime("%Y-%m-%d-%H:%M:%S")+ "\n*/")
        file.write("\n")
        file.write("#include \"" + name + ".h\"")
        file.write("\n")
        file.write("/* Includes ------------------------------------------------------------------*/\n\n\n")
        file.write("/* Private includes ----------------------------------------------------------*/\n\n\n")
        file.write("/* Private typedef -----------------------------------------------------------*/\n\n\n")
        file.write("/* Private define ------------------------------------------------------------*/\n\n\n")
        file.write("/* Private macro -------------------------------------------------------------*/\n\n\n")
        file.write("/* Private variables ---------------------------------------------------------*/\n\n\n")
        file.close()
        print("Created source file for " + name)
    else:
        print(name + ".c already exists, skipping...")

def create_unit_header(path : str, name : str):
    
    # Create a header file for the unit test
    if not os.path.exists(os.path.join(path, name + ".h")):
        file = open(os.path.join(path, name + ".h"), "w")
        file.write("/**\n * @file " + name + ".h\n * @brief TODO\n * @date " + datetime.datetime.now().strftime("%Y-%m-%d-%H:%M:%S") + "\n*/")
        file.write("\n")
        file.write("#ifndef " + name + "_H\n#define " + name + "_H\n")
        file.write("\n")
        file.write("/* Includes ------------------------------------------------------------------*/\n\n\n")
        file.write("/* Private includes ----------------------------------------------------------*/\n\n\n")
        file.write("/* Private typedef -----------------------------------------------------------*/\n\n\n")
        file.write("/* Private define ------------------------------------------------------------*/\n\n\n")
        file.write("/* Private macro -------------------------------------------------------------*/\n\n\n")
        file.write("/* Private variables ---------------------------------------------------------*/\n\n\n")
        file.write("#endif /* " + name + "_H */")
        file.close()
        print("Created header file for " + name)
    else:
        print(name + ".h already exists, skipping...")

def create_unittest_header(path : str, name : str):
    # Create a header file for the unit test
    if not os.path.exists(os.path.join(name,"UnitTest","include","TestSuites.h")):
        file = open((os.path.join(name,"UnitTest","include","TestSuites.h")), "w")
        file.write("/**\n * @file TestSuites.h\n * @brief TODO\n * @date " + datetime.datetime.now().strftime("%Y-%m-%d-%H:%M:%S") + "\n*/")
        file.write("\n")
        file.write("#ifndef TESTSUITES_H\n#define TESTSUITES_H\n")
        file.write("\n")
        file.write("/* Includes ------------------------------------------------------------------*/\n\n\n")
        file.write("/* Type definitions -----------------------------------------------------------*/\n\n\n")
        file.write("/* Defines ------------------------------------------------------------*/\n\n\n")
        file.write("/* Macros -------------------------------------------------------------*/\n\n\n")
        file.write("/* Global variables ---------------------------------------------------------*/\n\n\n")
        file.write("\n\n\n")
        file.write("#endif /* TESTSUITES_H */")
        file.close()
        print("Created header file for " + name)
    else:
        print(name + ".h already exists, skipping...")

def create_unittest_source(path : str, name : str, testsuites : dict):
    # Create a source file for the unit test
    if not os.path.exists(os.path.join(name,"UnitTest","src","TestSuites.c")):
        file = open((os.path.join(name,"UnitTest","src","TestSuites.c")), "w")
        file.write("/**\n * @file TestSuites.c\n * @brief TODO\n * @date " + datetime.datetime.now().strftime("%Y-%m-%d-%H:%M:%S")+ "\n*/")
        file.write("\n")
        file.write("#include \"TestSuites.h\"")
        file.write("\n")
        file.write("/* Private includes ----------------------------------------------------------*/\n\n\n")
        file.write("/* Private typedef -----------------------------------------------------------*/\n\n\n")
        file.write("/* Private define ------------------------------------------------------------*/\n\n\n")
        file.write("/* Private macro -------------------------------------------------------------*/\n\n\n")
        file.write("/* Private variables ---------------------------------------------------------*/\n\n\n")
        for testSuite in testsuites:
            file.write("extern TestSuite " + testSuite["name"] + ";\n")
        file.write("\n")
        file.write("TestSuite* testSuites[] = {\n")
        for testSuite in testsuites:
            file.write("\t&" + testSuite["name"] + ",\n")
        file.write("\tTEST_SUITE_END\n")
        file.write("};\n")
        file.close()
        print("Created source file for " + name)
    else:
        print(name + ".c already exists, skipping...")

    for testSuite in testsuites:
        if not os.path.exists(os.path.join(name,"UnitTest","src",testSuite["name"],".c")):
            file = open(os.path.join(name,"UnitTest","src",testSuite["name"]+".c"), "w")
            file.write("/**\n * @file "+ testSuite["name"] +".c\n * @brief TODO\n * @date " + datetime.datetime.now().strftime("%Y-%m-%d-%H:%M:%S")+ "\n*/")
            file.write("\n")
            file.write("#include \"TestSuites.h\"")
            file.write("\n")
            file.write("/* Private includes ----------------------------------------------------------*/\n\n\n")
            file.write("/* Private typedef -----------------------------------------------------------*/\n\n\n")
            file.write("/* Private define ------------------------------------------------------------*/\n\n\n")
            file.write("/* Private macro -------------------------------------------------------------*/\n\n\n")
            file.write("/* Private variables ---------------------------------------------------------*/\n\n\n")
            for testCase in testSuite["testcases"]:
                file.write("/**\n * @brief \n * \n */\n")
                file.write("void " + testCase["name"] + "()\n")
                file.write("{\n")
                file.write("}\n")
                file.write("\n")
            file.write("TestSuite " + testSuite["name"] + " = {\n")
            file.write("\t.name = \"" + testSuite["name"] + "\",\n")
            file.write("\t.TestCases = \n\t{\n")
            for testCase in testSuite["testcases"]:
                file.write("\t\t{\"" + testCase["name"] + "\"," + testCase["name"] + "},\n")
            file.write("\t\t{\"TEST_CASE_END\",TEST_CASE_END},\n")
            file.write("\t}\n};")

def create_files(path : str, project : dict):
    # Create files for each component
    for component in project["components"]:
        create_unit_source(os.path.join(path, component["name"], "Unit", "src"), component["name"])
        create_unit_header(os.path.join(path, component["name"], "Unit", "include"), component["name"])
        create_unittest_source(os.path.join(path, component["name"], "UnitTest", "include"), component["name"], component["testsuites"])

def main():
    # Get CWD and create path to JSON file
    cwd = os.getcwd()
    # Get the path to the JSON file
    json_path = os.path.join(cwd, "project.json")
    # Open the JSON file
    project = json.load(open(json_path))
    # Create the directory tree and C files
    create_tree(cwd, project)
    # Create .vscode folder
    create_vscode_folder(cwd, project)


if __name__ == '__main__':
    main()