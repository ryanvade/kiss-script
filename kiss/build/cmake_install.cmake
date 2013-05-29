# Install script for directory: /build/kiss-script/kiss

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/build/kiss-script/kiss/deploy/template_packs")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/build/kiss-script/kiss/deploy" TYPE DIRECTORY FILES "/build/kiss-script/kiss/rc/template_packs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/kiss/documentation_manager.hpp;/usr/local/include/kiss/template_pack.hpp;/usr/local/include/kiss/log_window.hpp;/usr/local/include/kiss/singleton.hpp;/usr/local/include/kiss/log_stream_buf.hpp;/usr/local/include/kiss/activatable.hpp;/usr/local/include/kiss/template_dialog.hpp;/usr/local/include/kiss/declarative_tab.hpp;/usr/local/include/kiss/main_window.hpp;/usr/local/include/kiss/kiss.hpp;/usr/local/include/kiss/kiss_standard_environment.hpp;/usr/local/include/kiss/template_tab.hpp;/usr/local/include/kiss/template_manager.hpp;/usr/local/include/kiss/output_helper.hpp;/usr/local/include/kiss/resource_helper.hpp;/usr/local/include/kiss/language_helper.hpp;/usr/local/include/kiss/tab.hpp;/usr/local/include/kiss/language_helper_manager.hpp;/usr/local/include/kiss/language_helper_plugin_manager.hpp;/usr/local/include/kiss/plugin_manager.hpp;/usr/local/include/kiss/build_options.hpp;/usr/local/include/kiss/documentation.hpp;/usr/local/include/kiss/source_file.hpp;/usr/local/include/kiss/unit.hpp;/usr/local/include/kiss/log.hpp;/usr/local/include/kiss/macro_string.hpp;/usr/local/include/kiss/file_utils.hpp;/usr/local/include/kiss/template_file.hpp;/usr/local/include/kiss/template_model.hpp;/usr/local/include/kiss/lexer_factory.hpp;/usr/local/include/kiss/lexer_plugin_manager.hpp;/usr/local/include/kiss/syntax_standards.hpp;/usr/local/include/kiss/theme_settings_dialog.hpp;/usr/local/include/kiss/password_dialog.hpp;/usr/local/include/kiss/target_dialog.hpp;/usr/local/include/kiss/manual_target_dialog.hpp;/usr/local/include/kiss/message_dialog.hpp;/usr/local/include/kiss/save_as_dialog.hpp;/usr/local/include/kiss/editor_settings_dialog.hpp;/usr/local/include/kiss/communication_progress_bar.hpp;/usr/local/include/kiss/color_box.hpp;/usr/local/include/kiss/source_find_widget.hpp;/usr/local/include/kiss/communication_widget.hpp;/usr/local/include/kiss/title_description_widget.hpp;/usr/local/include/kiss/output_widget.hpp;/usr/local/include/kiss/icon_widget.hpp;/usr/local/include/kiss/main_window_menu.hpp;/usr/local/include/kiss/menu_manager.hpp;/usr/local/include/kiss/developer_menu.hpp;/usr/local/include/kiss/template_pack_menu.hpp;/usr/local/include/kiss/target_menu.hpp;/usr/local/include/kiss/file_operations_menu.hpp;/usr/local/include/kiss/menus.hpp;/usr/local/include/kiss/concrete_menuable.hpp;/usr/local/include/kiss/source_file_menu.hpp;/usr/local/include/kiss/documentation_menu.hpp;/usr/local/include/kiss/new_project_wizard.hpp;/usr/local/include/kiss/linked_kar.hpp;/usr/local/include/kiss/project.hpp;/usr/local/include/kiss/project_manager.hpp;/usr/local/include/kiss/project_model.hpp;/usr/local/include/kiss/project_settings.hpp;/usr/local/include/kiss/interface_responder.hpp;/usr/local/include/kiss/communication_manager.hpp;/usr/local/include/kiss/main_responder.hpp;/usr/local/include/kiss/interface_model.hpp;/usr/local/include/kiss/interface_plugin_manager.hpp;/usr/local/include/kiss/interface_manager.hpp;/usr/local/include/kiss/interface.hpp;/usr/local/include/kiss/communication_queue.hpp;/usr/local/include/kiss/target_model.hpp;/usr/local/include/kiss/communication_queue_model.hpp;/usr/local/include/kiss/target_response.hpp;/usr/local/include/kiss/dummy_interface.hpp;/usr/local/include/kiss/target.hpp;/usr/local/include/kiss/target_filesystem_engine.hpp;/usr/local/include/kiss/target_responder.hpp")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/local/include/kiss" TYPE FILE FILES
    "/build/kiss-script/kiss/include/documentation_manager.hpp"
    "/build/kiss-script/kiss/include/template_pack.hpp"
    "/build/kiss-script/kiss/include/log_window.hpp"
    "/build/kiss-script/kiss/include/singleton.hpp"
    "/build/kiss-script/kiss/include/log_stream_buf.hpp"
    "/build/kiss-script/kiss/include/activatable.hpp"
    "/build/kiss-script/kiss/include/template_dialog.hpp"
    "/build/kiss-script/kiss/include/declarative_tab.hpp"
    "/build/kiss-script/kiss/include/main_window.hpp"
    "/build/kiss-script/kiss/include/kiss.hpp"
    "/build/kiss-script/kiss/include/kiss_standard_environment.hpp"
    "/build/kiss-script/kiss/include/template_tab.hpp"
    "/build/kiss-script/kiss/include/template_manager.hpp"
    "/build/kiss-script/kiss/include/output_helper.hpp"
    "/build/kiss-script/kiss/include/resource_helper.hpp"
    "/build/kiss-script/kiss/include/language_helper.hpp"
    "/build/kiss-script/kiss/include/tab.hpp"
    "/build/kiss-script/kiss/include/language_helper_manager.hpp"
    "/build/kiss-script/kiss/include/language_helper_plugin_manager.hpp"
    "/build/kiss-script/kiss/include/plugin_manager.hpp"
    "/build/kiss-script/kiss/include/build_options.hpp"
    "/build/kiss-script/kiss/include/documentation.hpp"
    "/build/kiss-script/kiss/include/source_file.hpp"
    "/build/kiss-script/kiss/include/unit.hpp"
    "/build/kiss-script/kiss/include/log.hpp"
    "/build/kiss-script/kiss/include/macro_string.hpp"
    "/build/kiss-script/kiss/include/file_utils.hpp"
    "/build/kiss-script/kiss/include/template_file.hpp"
    "/build/kiss-script/kiss/include/template_model.hpp"
    "/build/kiss-script/kiss/include/lexer/lexer_factory.hpp"
    "/build/kiss-script/kiss/include/lexer/lexer_plugin_manager.hpp"
    "/build/kiss-script/kiss/include/lexer/syntax_standards.hpp"
    "/build/kiss-script/kiss/include/dialogs/theme_settings_dialog.hpp"
    "/build/kiss-script/kiss/include/dialogs/password_dialog.hpp"
    "/build/kiss-script/kiss/include/dialogs/target_dialog.hpp"
    "/build/kiss-script/kiss/include/dialogs/manual_target_dialog.hpp"
    "/build/kiss-script/kiss/include/dialogs/message_dialog.hpp"
    "/build/kiss-script/kiss/include/dialogs/save_as_dialog.hpp"
    "/build/kiss-script/kiss/include/dialogs/editor_settings_dialog.hpp"
    "/build/kiss-script/kiss/include/widgets/communication_progress_bar.hpp"
    "/build/kiss-script/kiss/include/widgets/color_box.hpp"
    "/build/kiss-script/kiss/include/widgets/source_find_widget.hpp"
    "/build/kiss-script/kiss/include/widgets/communication_widget.hpp"
    "/build/kiss-script/kiss/include/widgets/title_description_widget.hpp"
    "/build/kiss-script/kiss/include/widgets/output_widget.hpp"
    "/build/kiss-script/kiss/include/widgets/icon_widget.hpp"
    "/build/kiss-script/kiss/include/menus/main_window_menu.hpp"
    "/build/kiss-script/kiss/include/menus/menu_manager.hpp"
    "/build/kiss-script/kiss/include/menus/developer_menu.hpp"
    "/build/kiss-script/kiss/include/menus/template_pack_menu.hpp"
    "/build/kiss-script/kiss/include/menus/target_menu.hpp"
    "/build/kiss-script/kiss/include/menus/file_operations_menu.hpp"
    "/build/kiss-script/kiss/include/menus/menus.hpp"
    "/build/kiss-script/kiss/include/menus/concrete_menuable.hpp"
    "/build/kiss-script/kiss/include/menus/source_file_menu.hpp"
    "/build/kiss-script/kiss/include/menus/documentation_menu.hpp"
    "/build/kiss-script/kiss/include/project/new_project_wizard.hpp"
    "/build/kiss-script/kiss/include/project/linked_kar.hpp"
    "/build/kiss-script/kiss/include/project/project.hpp"
    "/build/kiss-script/kiss/include/project/project_manager.hpp"
    "/build/kiss-script/kiss/include/project/project_model.hpp"
    "/build/kiss-script/kiss/include/project/project_settings.hpp"
    "/build/kiss-script/kiss/include/interface/interface_responder.hpp"
    "/build/kiss-script/kiss/include/interface/communication_manager.hpp"
    "/build/kiss-script/kiss/include/interface/main_responder.hpp"
    "/build/kiss-script/kiss/include/interface/interface_model.hpp"
    "/build/kiss-script/kiss/include/interface/interface_plugin_manager.hpp"
    "/build/kiss-script/kiss/include/interface/interface_manager.hpp"
    "/build/kiss-script/kiss/include/interface/interface.hpp"
    "/build/kiss-script/kiss/include/interface/communication_queue.hpp"
    "/build/kiss-script/kiss/include/interface/target_model.hpp"
    "/build/kiss-script/kiss/include/interface/communication_queue_model.hpp"
    "/build/kiss-script/kiss/include/interface/target_response.hpp"
    "/build/kiss-script/kiss/include/interface/dummy_interface.hpp"
    "/build/kiss-script/kiss/include/interface/target.hpp"
    "/build/kiss-script/kiss/include/interface/target_filesystem_engine.hpp"
    "/build/kiss-script/kiss/include/interface/target_responder.hpp"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/build/kiss-script/kiss/build/plugins/cmake_install.cmake")
  INCLUDE("/build/kiss-script/kiss/build/tests/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/build/kiss-script/kiss/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/build/kiss-script/kiss/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
