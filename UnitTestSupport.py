import sys
import os
import re

from pycparser import parse_file, c_ast, c_generator


# return the header file name from the file path
def returnHeaderName(coord):
    origin = re.search("[^\\/]+\.h",coord.file)
    if hasattr(origin,"group"):
        return origin.group()
    else:
        return None

# get list of typedefs from AST
def getListofTypedef(ast):
    typedefList = []
    for entity in ast.ext:
        if isinstance(entity, c_ast.Typedef) and returnHeaderName(entity.coord) != '_fake_typedefs.h':
            typedefList.append(entity)
    return typedefList

# get list of function declarations from AST
def getListofDecl(ast):
    declList = []
    for entity in ast.ext:
        if isinstance(entity, c_ast.Decl):
            declList.append(entity)
    return declList

# get list of function definitions from AST
def getListofFuncDef(ast):
    funcDefList = []
    for entity in ast.ext:
        if isinstance(entity, c_ast.FuncDef):
            funcDefList.append(entity)
    return funcDefList

# get list of function declarations from AST
def getListofFuncDecl(ast):
    declList = []
    for entity in ast.ext:
        if hasattr(entity, "type"):
            if isinstance(entity.type, c_ast.FuncDecl):
                declList.append(entity)
    return declList

# get list of function declarations without definitions
def getListofFuncWithoutDefinition(declList, funcDefL):
    funcDeclList = []
    for entity in declList:
        defined = False
        for funcDef in funcDefL:
            # Is this a function definition?
            if isinstance(funcDef, c_ast.FuncDef):
                # Is this the function definition for the function declaration?
                if funcDef.decl.name == entity.name:
                    defined = True
                    break
        # append the function declaration if it is not defined
        if not defined and isinstance(entity.type, c_ast.FuncDecl):
            funcDeclList.append(entity)
    return funcDeclList

# get list of function declarations with definitions
def getListofFuncWithDefinition(declList, funcDefL):
    funcDeclList = []
    for entity in declList:
        defined = False
        for funcDef in funcDefL:
            # Is this a function definition?
            if isinstance(funcDef, c_ast.FuncDef):
                # Is this the function definition for the function declaration?
                if funcDef.decl.name == entity.name:
                    defined = True
                    break
        # append the function declaration if it is not defined
        if defined and isinstance(entity.type, c_ast.FuncDecl):
            funcDeclList.append(entity)
    return funcDeclList

# get list of header files from the list of function declarations
def getHeaderList(declList):
    headerList = []
    for element in declList:
        if hasattr(element,"coord"):
            headerName = returnHeaderName(element.coord)
            if headerName != None:
                if headerName not in headerList and headerName != "_fake_typedefs.h":
                    headerList.append(headerName)
    return headerList

# get list of header files from the preprocessed file directly
def getHeaderListFromFileDirectly(file_path):
    headerList = []
    f = open(file_path,"r")
    whole_file = f.readlines()

    matches = []

    for lines in whole_file:
        findlist = re.findall("\w+\.h", lines)
        if len(findlist) != 0:
            for match in findlist:
                matches.append(match)
    
    matches = list(set(matches))

    for match in matches:
        if match != '_fake_typedefs.h' and match != '_fake_defines.h':
            headerList.append(match)
    return headerList

# create the folder structure for the unit test
def createFolder():
    if( os.path.isdir("UnitTest") == False):
        os.mkdir("UnitTest")
    if( os.path.isdir("UnitTest/include") == False):
        os.mkdir("UnitTest/include")
    if( os.path.isdir("UnitTest/include/stubs") == False):
        os.mkdir("UnitTest/include/stubs")
    if( os.path.isdir("UnitTest/src") == False):
        os.mkdir("UnitTest/src")
    if( os.path.isdir("UnitTest/src/stubs") == False):
        os.mkdir("UnitTest/src/stubs")

# create the types.h header file
def makeTypeStubHeader(ast, header_list):
    #typedefList = getListofTypedef(ast)
    local_ast = c_ast.FileAST(coord=None, ext=[]) # typedefList
    local_ast.ext.append(c_ast.Typedef( 
        name="stub_option_t",
        quals=[],
        type=c_ast.TypeDecl(    
            declname="stub_option_t",
            quals=[],
            align=None,
            type=c_ast.Enum(    
                name=None,
                values= c_ast.EnumeratorList(
                    enumerators=[
                        c_ast.Enumerator(   name="STUB_OPTION_VALUE", value=None),
                        c_ast.Enumerator(   name="STUB_OPTION_REDIRECT", value=None)
                    ],
                    coord=None
                )
            ),
        ),
        storage=['typedef']
    ))
    local_ast.ext.append(c_ast.Typedef( 
        name="stub_trace_option_t",
        quals=[],
        type=c_ast.TypeDecl(    
            declname="stub_trace_option_t",
            quals=[],
            align=None,
            type=c_ast.Enum(    
                name=None,
                values= c_ast.EnumeratorList(
                    enumerators=[
                        c_ast.Enumerator(   name="STUB_OPTION_TRACE_OFF", value=None),
                        c_ast.Enumerator(   name="STUB_OPTION_TRACE_ON", value=None)
                    ],
                    coord=None
                )
            ),
        ),
        storage=['typedef']
    ))
    local_ast.ext.append(c_ast.Typedef(
        name="stub_pArg_option_t",
        quals=[],
        type=c_ast.TypeDecl(    
            declname="stub_pArg_option_t",
            quals=[],
            align=None,
            type=c_ast.Enum(    
                name=None,
                values= c_ast.EnumeratorList(
                    enumerators=[
                        c_ast.Enumerator(   name="STUB_OPTION_PARG_COPY_FROM", value=None),
                        c_ast.Enumerator(   name="STUB_OPTION_PARG_COPY_TO", value=None)
                    ],
                    coord=None
                )
            ),
        ),
        storage=['typedef']
    ))

    local_ast.ext.append(c_ast.Typedef(
        name = "TEST_STUB_Trace",
        quals = [],
        type= c_ast.TypeDecl(
            declname = "TEST_STUB_Trace",
            quals = [],
            align=None,
            type= c_ast.Struct(
                name = "TEST_STUB_Trace",
                decls=[
                    c_ast.Decl(
                        name= "trace_enabled",
                        quals=[],
                        align = None,
                        storage= [],
                        funcspec= None,
                        type= c_ast.TypeDecl(
                            declname= "trace_enabled",
                            quals=[],
                            align = None,
                            type= c_ast.IdentifierType(names=["stub_trace_option_t"], coord= None),
                            coord=None
                        ),
                        init= None,
                        bitsize= None,
                        coord= None
                    ),
                    c_ast.Decl(
                        name= "trace_buffer",
                        quals=[],
                        align = None,
                        storage= [],
                        funcspec= None,
                        type= c_ast.PtrDecl(
                            quals= [],
                            type= c_ast.ArrayDecl(
                                type= c_ast.TypeDecl(
                                    declname= "trace_buffer",
                                    quals=[],
                                    align=None,
                                    type=c_ast.IdentifierType(names=["char"], coord=None),
                                    coord=None
                                ),
                                dim= c_ast.Constant(
                                    type = "int",
                                    value = "101"
                                ),
                                dim_quals = [],
                                coord= None
                            ),
                            coord= None
                        ),
                        init= None,
                        bitsize= None,
                        coord= None
                    ),
                    c_ast.Decl(
                        name= "trace_buffer_length",
                        quals=[],
                        align = None,
                        storage= [],
                        funcspec= None,
                        type= c_ast.TypeDecl(
                            declname= "trace_buffer_length",
                            quals=[],
                            align = None,
                            type= c_ast.IdentifierType(names=["unsigned", "long"], coord= None),
                            coord=None
                        ),
                        init= None,
                        bitsize= None,
                        coord= None
                    ),
                    c_ast.Decl(
                        name= "trace_buffer_index",
                        quals=[],
                        align = None,
                        storage= [],
                        funcspec= None,
                        type= c_ast.TypeDecl(
                            declname= "trace_buffer_index",
                            quals=[],
                            align = None,
                            type= c_ast.IdentifierType(names=["unsigned", "long"], coord= None),
                            coord=None
                        ),
                        init= None,
                        bitsize= None,
                        coord= None
                    )
                ],
                coord=None
            ),
            coord=None
        ),
        storage=['typedef'],
        coord=None
    ))

    test_stub = c_ast.Typedef(
        name='TEST_STUB_TYPE',
        quals=['extern'],
        type=c_ast.TypeDecl(   
            declname='TEST_STUB_TYPE',
            align= None,
            quals=[],
            type= c_ast.Struct(name=None,decls=[],coord=None),
            coord=None),
            coord=None,
            storage=['typedef']
    )
    test_stub.type.type.decls.append(c_ast.Decl( 
        name = "TEST_TRACE",
        quals = [],
        storage = [],
        funcspec = [],
        align=None,
        type = c_ast.TypeDecl(  
            declname = "TEST_TRACE",
            quals = [],
            type = c_ast.IdentifierType(names=["TEST_STUB_Trace"]),
            coord = None,
            align = None
        ),
        init = None,
        bitsize = None,
        coord = None
    ))

    for entity in ast.ext:
        for header in header_list:
            if returnHeaderName(entity.coord) == header:
                stub = makeStubStruct(entity)
                if stub != None:
                    stub_part = c_ast.Decl( 
                        name = entity.name,
                        quals = [],
                        storage = [],
                        funcspec = [],
                        align=None,
                        type = c_ast.TypeDecl(  
                            declname = entity.name,
                            quals = [],
                            type = c_ast.IdentifierType(names=[ stub.name ]),
                            coord = None,
                            align = None
                        ),
                        init = None,
                        bitsize = None,
                        coord = None
                    )
                    test_stub.type.type.decls.append(stub_part)
                    local_ast.ext.append(stub)

    local_ast.ext.append(test_stub)
    local_ast.ext.append(c_ast.Typedef(
        name='TEST_STUB',
        quals=[],   
        type=c_ast.TypeDecl(   
            declname='TEST_STUB',
            align= None,
            quals=[],
            type= c_ast.IdentifierType(names=['TEST_STUB_TYPE']),
            coord=None),
        coord=None,
        storage=['extern']
    ))
    
    generator = c_generator.CGenerator()
    generator.indent_level = 4
    # open the file for writing
    f = open( sys.argv[2] + "\\include\\stubs\\types.h", "w")
    # header guard
    f.write("#ifndef TYPES_H\n")
    f.write("#define TYPES_H\n")
    f.write("\n")
    header_list
    for header in header_list:
        f.write("#include \""+ header + "\"\n")
    # write the header file
    f.write(generator.visit(local_ast))
    # close the header guard
    f.write("\n")
    f.write("#endif /* TYPES_H */")
    # close the file
    f.close()

# Returns wether the entity is a void return type function
def isVoidType(type):
    if isinstance(type, c_ast.TypeDecl):
        if isinstance(type.type, c_ast.IdentifierType):
            if type.type.names[0] == "void":
                return True
    return False

# create stub function definition
def makeStubCompound(entity, test_call):
    blockItems = []
    index = 3

    #############################################
    #               STUB FUNCTION               #
    #############################################
    
    if not test_call:
        if not isVoidType(entity.type.type):
            index = index + 1
            blockItems.append(c_ast.Decl(
                name = "returnValue",
                align=None,
                quals=[],
                storage=[],
                bitsize=None,
                funcspec=[],
                coord=None,
                init=c_ast.InitList(
                                                exprs=[
                                                    c_ast.Constant(type='int', value='0')
                                                ],
                                                coord=None
                                            ),
                type=c_ast.TypeDecl(
                    declname="returnValue",
                    quals=entity.type.type.quals,
                    type=c_ast.IdentifierType(names=entity.type.type.type.names),
                    coord=None,
                    align=entity.type.type.align
                )
            ))
        blockItems.append(c_ast.UnaryOp(op='p++', expr=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type='.',field= c_ast.ID(name ='callcount'))))
        blockItems.append(
            c_ast.Decl(
                name= "trace_string",
                quals=[],
                align=None,
                storage=[],
                bitsize=None,
                funcspec=[],
                coord=None,
                init=c_ast.Constant(
                    type='char',
                    value= "\"" + entity.name + "\""
                ),
                type=c_ast.ArrayDecl(
                    type=c_ast.TypeDecl(
                        declname= 'trace_string',
                        quals = [],
                        align = None,
                        type = c_ast.IdentifierType(
                        names= ['char']
                        )
                    ),
                    dim = None,
                    dim_quals= []
                )
            )
        )
        blockItems.append(
            c_ast.If(
                cond= c_ast.BinaryOp(
                    left= c_ast.BinaryOp( 
                        left= c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID("TEST_TRACE")), type='.',field= c_ast.ID(name ='trace_enabled')),
                        op= "==",
                        right= c_ast.ID(name="STUB_OPTION_TRACE_ON"),
                        coord=None
                    ),
                    op= "&&",
                    right= c_ast.BinaryOp(
                        left= c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID("TEST_TRACE")), type='.',field= c_ast.ID(name ='trace_buffer')),
                        op="!=",
                        right = c_ast.ID(name="NULL"),
                        coord=None
                    ),
                    coord=None
                ),
                iftrue= c_ast.If(
                    cond= c_ast.BinaryOp( 
                        left= c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID("TEST_TRACE")), type='.',field= c_ast.ID(name ='trace_buffer_index')),
                        op= "<",
                        right= c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID("TEST_TRACE")), type='.',field= c_ast.ID(name ='trace_buffer_length')),
                        coord=None
                    ),
                    iftrue= c_ast.Compound(
                        block_items=[
                            c_ast.For(
                                init=c_ast.Decl(
                                    name='i',
                                    quals=[],
                                    align=None,
                                    storage=[],
                                    funcspec=[],
                                    type=c_ast.TypeDecl(
                                        declname='i',
                                        quals=[],
                                        align=None,
                                        type=c_ast.IdentifierType(names=['int']),
                                        coord=None
                                    ),
                                    init=c_ast.Constant(type='int', value='0'),
                                    bitsize=None,
                                    coord=None
                                ),
                                cond=c_ast.BinaryOp(
                                    op = '&&',
                                    left = c_ast.BinaryOp(
                                        op='<',
                                        left=c_ast.ID(name='i'),
                                        right=c_ast.Constant(type='int', value=len(entity.name) + 1)
                                    ),
                                    right= c_ast.BinaryOp(
                                        op = '<',
                                        left = c_ast.ID(name = 'i'),
                                        right=c_ast.Constant(type = 'int', value = 100)
                                    )
                                ),
                                next=c_ast.UnaryOp(
                                    expr=c_ast.ID(name='i'),
                                    op='++',
                                    coord=None
                                ),
                                stmt = c_ast.Compound(
                                    block_items=[
                                        c_ast.Assignment(
                                            op="=",
                                            lvalue= c_ast.ArrayRef(
                                                name = c_ast.ArrayRef(
                                                        name= c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID("TEST_TRACE")), type='.',field= c_ast.ID(name ='trace_buffer')),
                                                        subscript= c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID("TEST_TRACE")), type='.',field= c_ast.ID(name ='trace_buffer_index')),
                                                        coord=None
                                                ),
                                                subscript= c_ast.ID(name = "i")
                                            ),
                                            rvalue= c_ast.ArrayRef(
                                                name= c_ast.ID(name="trace_string"),
                                                subscript= c_ast.ID(name="i")
                                            ),
                                            coord=None
                                        )
                                    ]
                                )
                            ),
                            c_ast.UnaryOp(op='p++', expr=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID("TEST_TRACE")), type='.',field= c_ast.ID(name ='trace_buffer_index')))
                        ],
                        coord=None
                    ),
                    iffalse=None
                ),
                iffalse=None
            )
        )
        blockItems.append(
            c_ast.Switch(cond=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type='.',field= c_ast.ID(name ='stub_option')),
                stmt=c_ast.Compound(block_items=[
                    c_ast.Case(
                        coord= None,
                        expr= c_ast.ID(name='STUB_OPTION_VALUE'),
                        stmts= []
                    ),
                    c_ast.Case(
                        coord= None,
                        expr= c_ast.ID(name='STUB_OPTION_REDIRECT'),
                        stmts= []
                    ),
                    c_ast.Default(
                        coord= None,
                        stmts= [
                            c_ast.Break(coord=None)
                        ]
                    )
                ]),
                coord=None)
            )

        # Adding return value
        if not isVoidType(entity.type.type):
            blockItems[index].stmt.block_items[0].stmts.append(c_ast.Assignment(op='=', lvalue=c_ast.ID(name='returnValue'), rvalue=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type='.',field= c_ast.ID(name ='returnValue'))))

        # Adding parameters to the stub
        if entity.type.args != None:
            if hasattr(entity.type.args, 'params'):
                if entity.type.args.params != None:
                    for param in entity.type.args.params:
                        if param.name != None:
                            if isinstance(param.type, c_ast.TypeDecl):
                                blockItems[index].stmt.block_items[0].stmts.append(
                                    c_ast.Assignment(
                                        op='=',
                                        lvalue=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type='.',field= c_ast.ID(name =param.name)),
                                        rvalue=c_ast.ID(name=param.name),
                                        coord=None
                                    )
                                )
                            elif isinstance(param.type, c_ast.PtrDecl):
                                if isinstance(param.type.type, c_ast.FuncDecl):
                                    blockItems[index].stmt.block_items[0].stmts.append(
                                        c_ast.Assignment(
                                            op='=',
                                            lvalue=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type='.',field= c_ast.ID(name =param.name)),
                                            rvalue=c_ast.ID(name=param.name),
                                            coord=None
                                        )
                                    )
                                elif isinstance(param.type.type, c_ast.TypeDecl):
                                    if param.type.type.type.names == ['void']:
                                        blockItems[index].stmt.block_items[0].stmts.append(
                                            c_ast.Assignment(
                                                op='=',
                                                lvalue= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),
                                                rvalue=c_ast.ID(name=param.name)
                                            )
                                        )
                                    elif 'const' in param.quals:
                                        blockItems[index].stmt.block_items[0].stmts.append(
                                            c_ast.Assignment(
                                                op='=',
                                                lvalue= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),
                                                rvalue=c_ast.UnaryOp(op='*', expr=c_ast.ID(name=param.name))
                                            )
                                        )
                                    else: 
                                        blockItems[index].stmt.block_items[0].stmts.append(
                                            c_ast.If(
                                            cond=c_ast.BinaryOp
                                            (
                                                op = '==',
                                                left= c_ast.StructRef(
                                                    name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),  # c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name))
                                                    type='.',
                                                    field= c_ast.ID(name = 'stub_pArg_option')),
                                                    right= c_ast.ID(name='STUB_OPTION_PARG_COPY_TO'),
                                                    coord=None),
                                                    iftrue=c_ast.Compound(block_items=[
                                                        c_ast.Assignment(
                                                            op='=',
                                                            lvalue= c_ast.UnaryOp(op='*', expr=c_ast.ID(name=param.name)),
                                                            rvalue= c_ast.StructRef
                                                            (
                                                                name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),  # c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name))
                                                                type='.',
                                                                field= c_ast.ID(name = 'value')
                                                            )
                                                        )
                                                    ]),
                                                    iffalse=c_ast.Compound(block_items=[
                                                        c_ast.If(
                                                            cond=c_ast.BinaryOp(
                                                                op='==',
                                                                left = c_ast.StructRef
                                                                (
                                                                    name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),  # c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name))
                                                                    type='.',
                                                                    field= c_ast.ID(name = 'stub_pArg_option')
                                                                ),
                                                                right = c_ast.ID(name='STUB_OPTION_PARG_COPY_FROM'),
                                                                coord=None
                                                            ),
                                                            iftrue=c_ast.Compound(
                                                                block_items=[
                                                                    c_ast.Assignment(
                                                                        op='=',
                                                                        lvalue= c_ast.StructRef
                                                                        (
                                                                            name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),  # c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name))
                                                                            type='.',
                                                                            field= c_ast.ID(name = 'value')
                                                                        ),
                                                                        rvalue=c_ast.UnaryOp(op='*', expr=c_ast.ID(name=param.name))
                                                                    )
                                                                ]
                                                            ),
                                                            iffalse=None
                                                        )
                                                    ]),
                                                    coord=None
                                            )
                                        )
                            elif isinstance(param.type, c_ast.ArrayDecl):
                                max_copy = 1
                                if param.type.dim != None:
                                    max_copy = str(param.type.dim.value)
                                if 'const' in param.quals:
                                        blockItems[index].stmt.block_items[0].stmts.append( c_ast.For(
                                            init=c_ast.Decl(
                                                name='i',
                                                quals=[],
                                                align=None,
                                                storage=[],
                                                funcspec=[],
                                                type=c_ast.TypeDecl(
                                                    declname='i',
                                                    quals=[],
                                                    align=None,
                                                    type=c_ast.IdentifierType(names=['int']),
                                                    coord=None
                                                ),
                                                init=c_ast.Constant(type='int', value='0'),
                                                bitsize=None,
                                                coord=None
                                            ),
                                            cond=c_ast.BinaryOp(
                                                op='<',
                                                left=c_ast.ID(name='i'),
                                                right=c_ast.Constant(type='int', value=max_copy)
                                            ),
                                            next=c_ast.UnaryOp(
                                                op='++',
                                                expr=c_ast.ID(name='i'),
                                                coord=None
                                            ),
                                            stmt=c_ast.Compound(
                                                block_items=[
                                                    c_ast.Assignment(
                                                        op='=',
                                                        lvalue=c_ast.ArrayRef(
                                                            name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),
                                                            subscript=c_ast.ID(name='i'),
                                                            coord=None
                                                        ),
                                                        rvalue=c_ast.ArrayRef(
                                                            name=c_ast.ID(name=param.name),
                                                            subscript=c_ast.ID(name='i')
                                                        ),
                                                        coord=None
                                                    )
                                                ]
                                            )
                                        ))
                                else:
                                    blockItems[index].stmt.block_items[0].stmts.append(
                                        c_ast.If(
                                        cond=c_ast.BinaryOp
                                        (
                                            op = '==',
                                            left= c_ast.StructRef(
                                                name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),  # c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name))
                                                type='.',
                                                field= c_ast.ID(name = 'stub_pArg_option')),
                                                right= c_ast.ID(name='STUB_OPTION_PARG_COPY_TO'),
                                                coord=None),
                                                iftrue=c_ast.Compound(block_items=[
                                                    c_ast.For(
                                                        init=c_ast.Decl(
                                                                name='i',
                                                                quals=[],
                                                                align=None,
                                                                storage=[],
                                                                funcspec=[],
                                                                type=c_ast.TypeDecl(
                                                                    declname='i',
                                                                    quals=[],
                                                                    align=None,
                                                                    type=c_ast.IdentifierType(names=['int']),
                                                                    coord=None
                                                                ),
                                                                init=c_ast.Constant(type='int', value='0'),
                                                                bitsize=None,
                                                                coord=None
                                                        ),
                                                        cond=c_ast.BinaryOp(
                                                            op='<',
                                                            left=c_ast.ID(name='i'),
                                                            right=c_ast.Constant(
                                                                type='int', 
                                                                value= max_copy
                                                            )
                                                        ),
                                                        next=c_ast.UnaryOp(
                                                            op='++',
                                                            expr=c_ast.ID(name='i'),
                                                            coord=None
                                                        ),
                                                        stmt=c_ast.Compound(
                                                            block_items=[
                                                                c_ast.Assignment(
                                                                    op='=',
                                                                    lvalue=c_ast.ArrayRef(
                                                                        name=c_ast.ID(name=param.name),
                                                                        subscript=c_ast.ID(name='i')
                                                                    ),
                                                                    rvalue=c_ast.ArrayRef(
                                                                        name=c_ast.StructRef(
                                                                            name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),
                                                                            type='.',
                                                                            field= c_ast.ID(name = 'value')
                                                                        ),
                                                                        subscript=c_ast.ID(name='i'),
                                                                        coord=None
                                                                    ),
                                                                    coord=None
                                                                )
                                                            ]
                                                        )
                                                    )
                                                ]),
                                                iffalse=c_ast.Compound(block_items=[
                                                    c_ast.If(
                                                        cond=c_ast.BinaryOp(
                                                            op='==',
                                                            left = c_ast.StructRef
                                                            (
                                                                name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),  # c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name))
                                                                type='.',
                                                                field= c_ast.ID(name = 'stub_pArg_option')
                                                            ),
                                                            right = c_ast.ID(name='STUB_OPTION_PARG_COPY_FROM'),
                                                            coord=None
                                                        ),
                                                        iftrue=c_ast.Compound(
                                                            block_items=[
                                                                c_ast.For(
                                                                    init=c_ast.Decl(
                                                                        name='i',
                                                                        quals=[],
                                                                        align=None,
                                                                        storage=[],
                                                                        funcspec=[],
                                                                        type=c_ast.TypeDecl(
                                                                            declname='i',
                                                                            quals=[],
                                                                            align=None,
                                                                            type=c_ast.IdentifierType(names=['int']),
                                                                            coord=None
                                                                        ),
                                                                        init=c_ast.Constant(type='int', value='0'),
                                                                        bitsize=None,
                                                                        coord=None
                                                                    ),
                                                                    cond=c_ast.BinaryOp(
                                                                        op='<',
                                                                        left=c_ast.ID(name='i'),
                                                                        right=c_ast.Constant(type='int', value=max_copy)
                                                                    ),
                                                                    next=c_ast.UnaryOp(
                                                                        op='++',
                                                                        expr=c_ast.ID(name='i'),
                                                                        coord=None
                                                                    ),
                                                                    stmt=c_ast.Compound(
                                                                        block_items=[
                                                                            c_ast.Assignment(
                                                                                op='=',
                                                                                lvalue=c_ast.ArrayRef(
                                                                                    name=c_ast.StructRef(
                                                                                        name= c_ast.StructRef( name = c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type= '.' , field= c_ast.ID(param.name)),
                                                                                        type='.',
                                                                                        field= c_ast.ID(name = 'value')
                                                                                    ),
                                                                                    subscript=c_ast.ID(name='i'),
                                                                                    coord=None
                                                                                ),
                                                                                rvalue=c_ast.ArrayRef(
                                                                                    name=c_ast.ID(name=param.name),
                                                                                    subscript=c_ast.ID(name='i')
                                                                                ),
                                                                                coord=None
                                                                            )
                                                                        ]
                                                                    )
                                                                )
                                                            ]
                                                        ),
                                                        iffalse=None
                                                    )
                                                ]),
                                                coord=None
                                        )
                                        
                                )

        blockItems[index].stmt.block_items[0].stmts.append(c_ast.Break(coord=None))

        # STUB_OPTION_REDIRECT
        if isVoidType(entity.type.type):
            blockItems[index].stmt.block_items[1].stmts.append(c_ast.FuncCall(name=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type='.',field= c_ast.ID(name ='redirectFuncPtr')), args=c_ast.ExprList(exprs=[])))
        else:
            blockItems[index].stmt.block_items[1].stmts.append( 
                c_ast.BinaryOp
                (
                    op='=',
                    coord=None,
                    left= c_ast.ID(name='returnValue'),
                    right= c_ast.FuncCall
                    (
                        name=c_ast.StructRef
                        (
                            name= c_ast.StructRef
                            (
                                name = c_ast.ID
                                (
                                    name='TEST_STUB'
                                ),
                                type= '.',
                                field= c_ast.ID
                                (
                                    entity.name
                                )
                            ), 
                            type='.',
                            field= c_ast.ID
                            (
                                name ='redirectFuncPtr'
                            )
                        ), 
                        args=c_ast.ExprList(exprs=[])
                    )
                )
            )

        blockItems[index].stmt.block_items[1].stmts.append(c_ast.Break(coord=None))

        if entity.type.args != None:
            if hasattr(entity.type.args, 'params'):
                if entity.type.args.params != None:
                    for param in entity.type.args.params:
                        if param.name != None:
                            if entity.type.type.type.names[0] == 'void':
                                blockItems[index].stmt.block_items[1].stmts[0].args.exprs.append(c_ast.ID(name=param.name))
                            else:
                                blockItems[index].stmt.block_items[1].stmts[0].right.args.exprs.append(c_ast.ID(name=param.name))

        if not isVoidType(entity.type.type):
            blockItems.append(c_ast.Return(expr=c_ast.ID(name='returnValue'), coord=None))


    ###############################################
    #               TESTED FUNCTION               #
    ###############################################
    else:
        blockItems.append(c_ast.UnaryOp(op='p++', expr=c_ast.StructRef(name= c_ast.StructRef( name = c_ast.ID(name='TEST_STUB'), type= '.' , field= c_ast.ID(entity.name)), type='.',field= c_ast.ID(name ='callcount'))))
        if isVoidType(entity.type.type):
            blockItems.append(c_ast.FuncCall(name=c_ast.ID(name=entity.name), args=c_ast.ExprList(exprs=[])))
        else:
            blockItems.append(
                c_ast.Return(

                    c_ast.FuncCall(name=c_ast.ID(name=entity.name), args=c_ast.ExprList(exprs=[]))
                )
            )
        if entity.type.args != None:
            if hasattr(entity.type.args, 'params'):
                if entity.type.args.params != None:
                    for param in entity.type.args.params:
                        if param.name != None:
                            if entity.type.type.type.names[0] == 'void':
                                blockItems[1].args.exprs.append(c_ast.ID(name=param.name))
                            else:
                                blockItems[1].expr.args.exprs.append(c_ast.ID(name=param.name))
    return blockItems

# create source file containing stubs
def makeStubSource(ast, header_list):
    declList = getListofDecl(ast)
    funcDefList = getListofFuncDef(ast)
    funcDeclList = getListofFuncWithoutDefinition(declList, funcDefList)
    local_ast = c_ast.FileAST([])
    local_ast.ext.append(c_ast.Decl(   name='TEST_STUB',
                                            quals=[],
                                            storage=[],
                                            funcspec=[],
                                            align=None,
                                            type=c_ast.TypeDecl(    declname='TEST_STUB',
                                                                    align=None,     
                                                                    quals=[],
                                                                    type=c_ast.IdentifierType(names=['TEST_STUB_TYPE']),
                                                                    coord=None),
                                            init=c_ast.InitList(
                                                exprs=[
                                                    c_ast.Constant(type='int', value='0')
                                                ],
                                                coord=None
                                            ),
                                            bitsize=None,
                                            coord=None))
    for entity in funcDeclList:
        if isinstance(entity.type, c_ast.FuncDecl):
            funcDef = c_ast.FuncDef(decl=entity,param_decls=None,body=c_ast.Compound(block_items=[]))
            funcDef.body.block_items = makeStubCompound(entity, False)
            local_ast.ext.append(funcDef)

    funcDeclList = getListofFuncWithDefinition(declList, funcDefList)

    for entity in funcDeclList:
        if isinstance(entity.type, c_ast.FuncDecl) and entity.storage != ['static']:
            funcDef = c_ast.FuncDef(decl= c_ast.Decl(
                                                        name='TEST_CALL_' + entity.name,
                                                        quals=entity.quals,
                                                        align=entity.align,
                                                        bitsize=entity.bitsize,
                                                        storage=entity.storage,
                                                        funcspec=entity.funcspec,
                                                        type= c_ast.FuncDecl(   args= entity.type.args,
                                                                                type= c_ast.TypeDecl(   declname= 'TEST_CALL_' + entity.type.type.declname,
                                                                                                        quals= entity.type.type.quals,
                                                                                                        type= entity.type.type.type,
                                                                                                        coord= entity.type.type.coord,
                                                                                                        align= entity.type.type.align),
                                                                                coord=entity.type.coord),
                                                        init=entity.init,
                                                        coord=entity.coord),
                                    param_decls=None,
                                    body=c_ast.Compound(block_items=[]))
            funcDef.body.block_items = makeStubCompound(entity, True)
            local_ast.ext.append(funcDef)
    

    generator = c_generator.CGenerator()
    generator.indent_level = 4
    f = open(sys.argv[2] + "/src/stubs/stub.c" , "w")
    f.write(
"/**\n\
* @file stub.c\n\
*\n\
* @brief This file contains the stubs for the functions\n\
*\n\
*/\n")
    f.write("#include \"types.h\"\n")
    f.write("#include \"stub.h\"\n")
    f.write(generator.visit(local_ast))
    f.close()

# create the required header file
def makeHeaderFile(name, ast):
    generator = c_generator.CGenerator()
    generator.indent_level = 4
    # open the file for writing
    f = open( sys.argv[2] + "\\include\\stubs\\" + name, "w")
    # header guard
    f.write("#ifndef " + name[0:-2].upper() + "_H\n")
    f.write("#define " + name[0:-2].upper() + "_H\n")
    f.write("\n")
    # include types.h if created header is not types.h
    if name != "types.h":
        f.write("#include \"types.h\"\n")
    # write the header file
    f.write(generator.visit(ast))
    # close the header guard
    f.write("\n")
    f.write("#endif /* " + name[0:-2].upper() + "_H */")
    # close the file
    f.close()

# create stub struct for the function declaration
def makeStubStruct(entity):
    struct = None
    typedef = None
    if isinstance(entity, c_ast.Decl):
        if isinstance(entity.type, c_ast.FuncDecl):
            typedef = c_ast.Typedef(name='TEST_STUB_' + entity.name + '_TYPE',
                                    quals=None,
                                    type=c_ast.TypeDecl(   declname='TEST_STUB_' + entity.name + '_TYPE',
                                                            align= None,
                                                            quals=[],
                                                            type= None,
                                                            coord=entity.coord),
                                    coord=entity.coord,
                                    storage=['typedef'])
            struct = c_ast.Struct(name=None,decls=[],coord=None)
            struct.decls.append(c_ast.Decl( name='callcount',
                                            quals=[],
                                            align=[],
                                            storage=[],
                                            funcspec = [],
                                            type = c_ast.TypeDecl(  align=None,
                                                                    coord=None,
                                                                    declname='callcount',
                                                                    quals=[],
                                                                    type=c_ast.IdentifierType(names=['unsigned','long'])),
                                            init=None,
                                            bitsize=None))
            struct.decls.append(c_ast.Decl( name='stub_option',
                                            quals=[],
                                            align=[],
                                            storage=[],
                                            funcspec = [],
                                            type = c_ast.TypeDecl(  align=None,
                                                                    coord=None,
                                                                    declname='stub_option',
                                                                    quals=[],
                                                                    type=c_ast.IdentifierType(names=['stub_option_t'])),
                                            init=None,
                                            bitsize=None))
            if entity.type.type.type.names[0] != 'void':
                struct.decls.append(c_ast.Decl( name='returnValue',
                                                quals=[],
                                                align=[],
                                                storage=[],
                                                funcspec = None,
                                                type = c_ast.TypeDecl(  'returnValue',
                                                                        entity.type.type.quals,
                                                                        entity.type.type.align,
                                                                        entity.type.type.type,
                                                                        entity.type.type.coord),
                                                init=None,
                                                bitsize=None))
            if entity.type.args != None:
                for arg in entity.type.args.params:
                    if isinstance(arg.type, c_ast.TypeDecl):
                        if arg.type.type.names[0] != 'void':
                            struct.decls.append(c_ast.Decl(
                                name=arg.name,
                                align= arg.align,
                                bitsize= arg.bitsize,
                                coord= arg.coord,
                                funcspec= arg.funcspec,
                                init= arg.init,
                                quals= [],
                                storage= arg.storage,
                                type= arg.type
                            ))
                    elif isinstance(arg.type, c_ast.PtrDecl):
                        if isinstance(arg.type.type,c_ast.TypeDecl):
                            if arg.type.type.type.names == ['void']:
                                struct.decls.append(arg)
                            elif 'const' in arg.quals :
                                struct.decls.append(c_ast.Decl(
                                    name= arg.name,
                                    quals=[],
                                    align=arg.align,
                                    storage=arg.storage,
                                    funcspec = arg.funcspec,
                                    type = c_ast.TypeDecl(
                                        quals= [],
                                        align=arg.type.type.align,
                                        type=arg.type.type.type,
                                        coord=arg.type.type.coord,
                                        declname= arg.type.type.declname),
                                    init=arg.init,
                                    bitsize=arg.bitsize
                                ))
                            else:
                                struct.decls.append(c_ast.Decl(
                                    align=[],
                                    bitsize=None,
                                    coord=None,
                                    funcspec=[],
                                    init=None,
                                    name=arg.name,
                                    quals=[],
                                    storage=[],
                                    type = c_ast.TypeDecl(
                                        align=None,
                                        coord=None,
                                        declname=arg.type.type.declname,
                                        quals=[],
                                        type= c_ast.Struct(
                                            name=None,
                                            decls=[
                                                c_ast.Decl(
                                                    name='value',
                                                    quals=[],
                                                    align=arg.align,
                                                    storage=arg.storage,
                                                    funcspec = arg.funcspec,
                                                    type = c_ast.TypeDecl(
                                                        quals= [], # arg.type.type.quals,
                                                        align=arg.type.type.align,
                                                        type=arg.type.type.type,
                                                        coord=arg.type.type.coord,
                                                        declname= 'value'),
                                                    init=arg.init,
                                                    bitsize=arg.bitsize
                                                ),
                                                c_ast.Decl(
                                                    name='stub_pArg_option',
                                                    align=[],
                                                    bitsize= None,
                                                    coord= None,
                                                    funcspec= [],
                                                    init= None,
                                                    quals= [],
                                                    storage= [],
                                                    type= c_ast.TypeDecl(
                                                        align= None,
                                                        coord= None,
                                                        declname= 'stub_pArg_option',
                                                        quals= [],
                                                        type= c_ast.IdentifierType(
                                                            names= ['stub_pArg_option_t']
                                                        )
                                                    )
                                                )
                                            ]
                                        )
                                    )
                                )
                        )
                        elif isinstance(arg.type.type, c_ast.FuncDecl):
                            struct.decls.append(arg)
                    elif isinstance(arg.type, c_ast.ArrayDecl):
                        dim = c_ast.Constant(type='int', value= '1')
                        if arg.type.dim != None:
                            dim = arg.type.dim

                        if 'const' in arg.quals :
                            struct.decls.append(c_ast.Decl(
                                name=arg.name,
                                quals=[],
                                align=arg.align,
                                storage=arg.storage,
                                funcspec = arg.funcspec,
                                type = c_ast.ArrayDecl(
                                    type=c_ast.TypeDecl(
                                        declname=arg.type.type.declname,
                                        quals= [],
                                        align=arg.type.type.align,
                                        type=arg.type.type.type,
                                        coord=arg.type.type.coord
                                    ),
                                    dim=dim,
                                    coord=arg.type.coord,
                                    dim_quals=arg.type.dim_quals
                                ),
                                init=arg.init,
                                bitsize=arg.bitsize)
                            )
                        else:
                            struct.decls.append(c_ast.Decl(
                                        align=[],
                                        bitsize=None,
                                        coord=None,
                                        funcspec=[],
                                        init=None,
                                        name=arg.name,
                                        quals=[],
                                        storage=[],
                                        type = c_ast.TypeDecl(
                                            align=None,
                                            coord=None,
                                            declname=arg.type.type.declname,
                                            quals=[],
                                            type= c_ast.Struct(
                                            name=None,
                                            decls=[
                                                c_ast.Decl(
                                                    name='value',
                                                    quals=arg.quals,
                                                    align=arg.align,
                                                    storage=arg.storage,
                                                    funcspec = arg.funcspec,
                                                    type = c_ast.ArrayDecl(
                                                        type=c_ast.TypeDecl(
                                                            declname='value',
                                                            quals=arg.type.type.quals,
                                                            align=arg.type.type.align,
                                                            type=arg.type.type.type,
                                                            coord=arg.type.type.coord
                                                        ),
                                                        dim=dim,
                                                        coord=arg.type.coord,
                                                        dim_quals=arg.type.dim_quals
                                                    ),
                                                    init=arg.init,
                                                    bitsize=arg.bitsize
                                                ),
                                                c_ast.Decl(
                                                    name='stub_pArg_option',
                                                    align=[],
                                                    bitsize= None,
                                                    coord= None,
                                                    funcspec= [],
                                                    init= None,
                                                    quals= [],
                                                    storage= [],
                                                    type= c_ast.TypeDecl(
                                                        align= None,
                                                        coord= None,
                                                        declname= 'stub_pArg_option',
                                                        quals= [],
                                                        type= c_ast.IdentifierType(
                                                            names= ['stub_pArg_option_t']
                                                        )
                                                    )
                                                )
                                        ]
                                ))))
                    else:
                        print("ERROR: Unknown type in function declaration")
            struct.decls.append(c_ast.Decl( 
                name = "redirectFuncPtr",
                align=[],
                bitsize=None,
                coord=None,
                funcspec=[],
                init=None,
                quals=[],
                storage=[],
                type=c_ast.PtrDecl( 
                    quals=[],
                    type=c_ast.FuncDecl(    
                        args = entity.type.args,
                        type = c_ast.TypeDecl(
                            declname='redirectFuncPtr',
                            align=entity.type.type.align,
                            quals=entity.type.type.quals,
                            type=entity.type.type.type,
                            coord=entity.type.type.coord
                        ),
                        coord=entity.coord
                    ),
                    coord=None)))
            typedef.type.type = struct
            c_ast.PtrDecl(  quals=[],
                            type= entity.type,
                            coord=None)
            
            typedef.type.type = struct
    return typedef

# main entry point
def main():
    if len(sys.argv) > 2:
        ast = parse_file(sys.argv[1], use_cpp=False)

        # get list of function declarations from include files
        typedefList = getListofTypedef(ast)

        # get list of declarations
        declList = getListofDecl(ast)

        # get list of header files from file directly
        headerList = getHeaderListFromFileDirectly(sys.argv[1])

        # create the type stub header file
        makeTypeStubHeader(ast, headerList)

        # create the header stub files
        makeStubSource(ast, headerList)

        ################################
        funcDeclList = getListofFuncDecl(ast)
        # headerstubbed = getListofFuncWithoutDefinition(declList, funcDefL)
#
        #for header in headerList:
        #    header_ast = c_ast.FileAST([])
        #    for entity in funcDeclList:
        #        if returnHeaderName(entity.coord) == header:
        #            header_ast.ext.append(entity)
        #    makeHeaderFile(header, header_ast)

        # Create stub header which contains every generated header

        f = open( sys.argv[2] + "/include/stubs/stub.h" , "w")
        f.write("#ifndef STUB_H\n")
        f.write("#define STUB_H\n")
        f.write("#include \"types.h\"\n")
        funcDefList = getListofFuncDef(ast)
        unitFuncList = getListofFuncWithDefinition(declList, funcDefList)
        stubFuncList = []
        for entity in unitFuncList:
            if entity.storage != ['static']:
                new_Decl = c_ast.Decl(
                    name = "TEST_CALL_" + entity.name,
                    quals= entity.quals,
                    align= entity.align,
                    storage= entity.storage,
                    funcspec= entity.funcspec,
                    type= entity.type,
                    init= entity.init,
                    bitsize= entity.bitsize,
                    coord= entity.coord
                )
                new_Decl.type.type.declname = "TEST_CALL_" + entity.type.type.declname
                stubFuncList.append(new_Decl)

        generator = c_generator.CGenerator()
        generator.indent_level = 4
        header_ast = c_ast.FileAST(stubFuncList)
        f.write(generator.visit(header_ast))
        f.write("#endif /* STUB_H */")
        
        f.close()

    else:
        print('Please specify filename and path')

if __name__ == "__main__":
    main()