SET(SRC_LIST FoxDebug.cpp
             FoxDebug.h
             FoxFile.cpp
             FoxFile.h
             FoxFilePath.cpp
             FoxFilePath.h
             FoxList.cpp
             FoxList.h
             FoxLuaScript.cpp
             FoxLuaScript.h
             FoxLuaScriptSet.cpp
             FoxLuaScriptSet.h
             FoxMemBase.cpp
             FoxMemBase.h
             FoxMemClass.cpp
             FoxMemClass.h
             FoxNode.cpp
             FoxNode.h
             FoxPakFile.cpp
             FoxPakFile.h
             FoxScript.cpp
             FoxScript.h
             FoxStrBase.cpp
             FoxStrBase.h
             FoxWin32.cpp
             FoxWin32.h
             LuaLib.h
             )

SET(LIBRARY_OUTPUT_PATH ${TF_CURRENT_BINARY_PATH_LIB})

ADD_LIBRARY(ScriptEngine SHARED ${SRC_LIST})

IF(CMAKE_SYSTEM MATCHES Windows)
  TARGET_LINK_LIBRARIES(ScriptEngine LuaLib)
ENDIF(CMAKE_SYSTEM MATCHES Windows)


