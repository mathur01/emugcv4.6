# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/orin/Desktop/emgucv-4.6.0;/home/orin/Desktop/emgucv-4.6.0/platforms/ubuntu/22.04/build")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "emgucv_binary;emgucv_example_source;emgucv_source;libs;main")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "emgucv built using CMake")
set(CPACK_GENERATOR "ZIP")
set(CPACK_INSTALL_CMAKE_PROJECTS "/home/orin/Desktop/emgucv-4.6.0/platforms/ubuntu/22.04/build;emgucv;ALL;/")
set(CPACK_INSTALL_PREFIX "/home/orin/Desktop/emgucv-4.6.0/platforms/ubuntu/22.04/build/install")
set(CPACK_MODULE_PATH "/home/orin/Desktop/emgucv-4.6.0/cmake/modules;/home/orin/.hunter/_Base/Download/Hunter/0.24.0/a3d7f43/Unpacked/cmake/modules;/home/orin/.hunter/_Base/Download/Hunter/0.24.0/a3d7f43/Unpacked/cmake/find")
set(CPACK_NSIS_DISPLAY_NAME "emgucv ...0")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "emgucv ...0")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/home/orin/Desktop/emgucv-4.6.0/platforms/ubuntu/22.04/build/CPackConfig.cmake")
set(CPACK_PACKAGE_CLI_FOLDER "libs")
set(CPACK_PACKAGE_CONTACT "Emgu CV SUPPORT <support@emgu.com>")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DEPENDENCY_VERSION "...0")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Emgu CV is a cross platform .Net wrapper to the OpenCV image processing library.")
set(CPACK_PACKAGE_FILE_NAME "libemgucv-...0")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "emgucv ...0")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "emgucv ...0")
set(CPACK_PACKAGE_NAME "emgucv")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Emgu Corporation")
set(CPACK_PACKAGE_VERSION "...0")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_PACKAGE_VERSION_PATCH_PLUS_ONE "1")
set(CPACK_RESOURCE_FILE_LICENSE "/home/orin/Desktop/emgucv-4.6.0/LICENSE")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.22/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/orin/Desktop/emgucv-4.6.0/platforms/ubuntu/22.04/build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/orin/Desktop/emgucv-4.6.0/platforms/ubuntu/22.04/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()