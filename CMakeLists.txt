cmake_minimum_required(VERSION 2.8.12)

project(json_parse_error)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

find_package(Threads REQUIRED)
find_package(Casablanca 2.8.0 REQUIRED)
find_package(Boost REQUIRED COMPONENTS random chrono system thread)

if(APPLE AND NOT OPENSSL_ROOT_DIR)
  file(GLOB OPENSSL_ROOT_DIR /usr/local/Cellar/openssl/*)
  list(REVERSE OPENSSL_ROOT_DIR)
endif()
set(_OPENSSL_VERSION "")
find_package(OpenSSL 1.0.0 REQUIRED)

include_directories(${OPENSSL_INCLUDE_DIR} ${CASABLANCA_INCLUDE_DIRS})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(src)
