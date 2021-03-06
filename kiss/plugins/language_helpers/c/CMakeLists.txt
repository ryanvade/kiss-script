SET(PLUGIN_NAME c_language_helper)

PROJECT(${PLUGIN_NAME})
cmake_minimum_required(VERSION 2.6.0)

FIND_PACKAGE(Qt4 REQUIRED)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR} ${QT_INCLUDE_DIR} ${KISS_INCLUDE_DIRS})

INCLUDE(${QT_USE_FILE})

FILE(GLOB LOCAL_INCLUDES *.hpp)
FILE(GLOB LOCAL_SOURCES *.cpp)

QT4_WRAP_CPP(INCLUDES_MOC ${LOCAL_INCLUDES})

ADD_DEFINITIONS(${QT_DEFINITIONS})
ADD_DEFINITIONS(-DQT_PLUGIN)
ADD_DEFINITIONS(-DQT_NO_DEBUG)
ADD_DEFINITIONS(-DQT_SHARED)
ADD_DEFINITIONS(-DQT_DLL)

ADD_LIBRARY(${PLUGIN_NAME} SHARED ${LOCAL_SOURCES} ${INCLUDES_MOC})
LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})

TARGET_LINK_LIBRARIES(${PLUGIN_NAME} kisside pcompiler kar ${QT_LIBRARIES})

IF(APPLE)
SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -headerpad_max_install_names")
ADD_CUSTOM_TARGET(${PLUGIN_NAME}_osx_install_names ALL 
	COMMAND ${OSX_INSTALL_NAMES_SCRIPT} lib${PLUGIN_NAME}.dylib
		QtCore.framework/Versions/4/QtCore
		QtScript.framework/Versions/4/QtScript
		QtDBus.framework/Versions/4/QtDBus
		QtGui.framework/Versions/4/QtGui
		QtNetwork.framework/Versions/4/QtNetwork
		QtXml.framework/Versions/4/QtXml
		QtXmlPatterns.framework/Versions/4/QtXmlPatterns
		QtSvg.framework/Versions/4/QtSvg
		QtSql.framework/Versions/4/QtSql
		QtWebKit.framework/Versions/4/QtWebKit
		phonon.framework/Versions/4/phonon
		QtDeclarative.framework/Versions/4/QtDeclarative
		libkar.dylib
		libpcompiler.dylib
	WORKING_DIRECTORY ${LIBRARY_OUTPUT_PATH}
	DEPENDS ${PLUGIN_NAME})
INSTALL(TARGETS ${PLUGIN_NAME} LIBRARY DESTINATION ${EXECUTABLE_OUTPUT_PATH}/KISS.app/Contents/language_helpers)
ELSE(APPLE)
	INSTALL(TARGETS ${PLUGIN_NAME} LIBRARY DESTINATION ${EXECUTABLE_OUTPUT_PATH}/language_helpers
		RUNTIME DESTINATION ${EXECUTABLE_OUTPUT_PATH}/language_helpers)
ENDIF(APPLE)