# Install script for directory: /build/kiss-script/libkovan

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kovan" TYPE FILE FILES
    "/build/kiss-script/libkovan/include/kovan/debug.h"
    "/build/kiss-script/libkovan/include/kovan/botball.h"
    "/build/kiss-script/libkovan/include/kovan/battery.h"
    "/build/kiss-script/libkovan/include/kovan/display.h"
    "/build/kiss-script/libkovan/include/kovan/analog.h"
    "/build/kiss-script/libkovan/include/kovan/servo.h"
    "/build/kiss-script/libkovan/include/kovan/general.h"
    "/build/kiss-script/libkovan/include/kovan/kovan.h"
    "/build/kiss-script/libkovan/include/kovan/geom.h"
    "/build/kiss-script/libkovan/include/kovan/export.h"
    "/build/kiss-script/libkovan/include/kovan/console.h"
    "/build/kiss-script/libkovan/include/kovan/thread.h"
    "/build/kiss-script/libkovan/include/kovan/camera.h"
    "/build/kiss-script/libkovan/include/kovan/motors.h"
    "/build/kiss-script/libkovan/include/kovan/button.h"
    "/build/kiss-script/libkovan/include/kovan/audio.h"
    "/build/kiss-script/libkovan/include/kovan/accel.h"
    "/build/kiss-script/libkovan/include/kovan/datalog.h"
    "/build/kiss-script/libkovan/include/kovan/create.h"
    "/build/kiss-script/libkovan/include/kovan/util.h"
    "/build/kiss-script/libkovan/include/kovan/wifi.h"
    "/build/kiss-script/libkovan/include/kovan/ir.h"
    "/build/kiss-script/libkovan/include/kovan/ardrone.h"
    "/build/kiss-script/libkovan/include/kovan/create_codes.h"
    "/build/kiss-script/libkovan/include/kovan/draw.h"
    "/build/kiss-script/libkovan/include/kovan/digital.h"
    "/build/kiss-script/libkovan/include/kovan/color.hpp"
    "/build/kiss-script/libkovan/include/kovan/button_ids.hpp"
    "/build/kiss-script/libkovan/include/kovan/wifi.hpp"
    "/build/kiss-script/libkovan/include/kovan/sensor_logic.hpp"
    "/build/kiss-script/libkovan/include/kovan/draw.hpp"
    "/build/kiss-script/libkovan/include/kovan/config.hpp"
    "/build/kiss-script/libkovan/include/kovan/thread.hpp"
    "/build/kiss-script/libkovan/include/kovan/servo.hpp"
    "/build/kiss-script/libkovan/include/kovan/socket.hpp"
    "/build/kiss-script/libkovan/include/kovan/analog.hpp"
    "/build/kiss-script/libkovan/include/kovan/create.hpp"
    "/build/kiss-script/libkovan/include/kovan/port.hpp"
    "/build/kiss-script/libkovan/include/kovan/digital.hpp"
    "/build/kiss-script/libkovan/include/kovan/reflection.hpp"
    "/build/kiss-script/libkovan/include/kovan/datalog.hpp"
    "/build/kiss-script/libkovan/include/kovan/kovan.hpp"
    "/build/kiss-script/libkovan/include/kovan/camera.hpp"
    "/build/kiss-script/libkovan/include/kovan/geom.hpp"
    "/build/kiss-script/libkovan/include/kovan/button.hpp"
    "/build/kiss-script/libkovan/include/kovan/types.hpp"
    "/build/kiss-script/libkovan/include/kovan/console.hpp"
    "/build/kiss-script/libkovan/include/kovan/ir.hpp"
    "/build/kiss-script/libkovan/include/kovan/motors.hpp"
    "/build/kiss-script/libkovan/include/kovan/ardrone.hpp"
    "/build/kiss-script/libkovan/include/kovan/accel.hpp"
    "/build/kiss-script/libkovan/include/kovan/battery.hpp"
    "/build/kiss-script/libkovan/include/kovan/sensor.hpp"
    "/build/kiss-script/libkovan/include/kovan/util.hpp"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkovan.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkovan.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkovan.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/build/kiss-script/libkovan/lib/libkovan.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkovan.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkovan.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkovan.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/build/kiss-script/libkovan/build/test/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/build/kiss-script/libkovan/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/build/kiss-script/libkovan/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
