# Install script for directory: /build/kiss-script/libkovan/test

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/build/kiss-script/libkovan/build/test/ardrone/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/battery/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/draw/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/servo/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/button/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/create/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/datalog/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/config/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/camera/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/botball/cmake_install.cmake")
  INCLUDE("/build/kiss-script/libkovan/build/test/time/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

