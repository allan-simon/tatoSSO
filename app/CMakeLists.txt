cmake_minimum_required(VERSION 2.6)

project(TatoSSO)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Weverything -Wno-c++98-compat -Wno-padded -Wno-global-constructors -Wno-weak-vtables -std=c++0x")


##########################
#  Packaging/Versioning 
#########################
set(PROJECT_VERSION "0.0.1")
set(ARCHIVE_NAME ${CMAKE_PROJECT_NAME}-${PROJECT_VERSION})
add_custom_target(
    dist
    COMMAND git archive --prefix=${ARCHIVE_NAME}/ HEAD
        | bzip2 > ${CMAKE_BINARY_DIR}/${ARCHIVE_NAME}.tar.bz2
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

###################
# Dependency check
##################
find_library(CPPCMS cppcms)
find_library(BOOSTER booster)
find_library(CPPDB cppdb)
find_library(SQLITE3 sqlite3)




###################
# source files
###################
include_directories(
    src
)


set(
    FRAMEWORK_BUILD_DIR
    build
)


file(
    GLOB
    controllers_files
    src/controllers/*
    src/controllers/webs/*
    src/controllers/generics/*
)

file(
    GLOB
    models_files
    src/models/*
)

file(
    GLOB
    results_files
    src/results/*
)

file(
    GLOB
    contents_files
    src/contents/*
)


file(
    GLOB
    generics_files
    src/generics/*
)

####### FRAMEWORK PART 
# TODO we need to compile the framework separately          
#####


add_executable(
    TatoSSO
    src/TatoSSO.cpp
    src/main.cpp
    ${controllers_files}
    ${models_files}
    ${generics_files}
    ${results_files}
    ${contents_files}
    view_responsive_skin_web.cpp
)

set(
    MAIN_PROJECT_LIBS
    ${CPPCMS}
    ${CPPDB}
    ${BOOSTER}
    ${SQLITE3}
    cppcmsskel
    #if you need to link with an other lib add it here
)




target_link_libraries(
    TatoSSO
    ${MAIN_PROJECT_LIBS}
)

###########################
# Part common to all skins
###########################
set(
    WEB_SKINS_COMMONS_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/src/views/webs/commons/
)

set(
    WEB_SKINS_COMMONS
    ${WEB_SKINS_COMMONS_DIR}/layouts/master.tmpl
    ${WEB_SKINS_COMMONS_DIR}/*/*.tmpl
)




########################
#  responsive skin
########################
set(
    RESPONSIVE_WEB_SKIN_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/src/views/webs/skins/responsive
)

add_custom_command(
    OUTPUT view_responsive_skin_web.cpp
    COMMAND cppcms_tmpl_cc 
        ${WEB_SKINS_COMMONS_DIR}/layouts/master.tmpl
        ${RESPONSIVE_WEB_SKIN_DIR}/layouts/master.tmpl
        ${WEB_SKINS_COMMONS_DIR}/*/*.tmpl
        ${RESPONSIVE_WEB_SKIN_DIR}/*/*.tmpl 
        -o view_responsive_skin_web.cpp
        -s responsive
    DEPENDS
        ${WEB_SKINS_COMMONS}
        ${RESPONSIVE_WEB_SKIN_DIR}/*/*.tmpl 
)


##################
# unit tests
##################
enable_testing()

set(
    ALL_TESTS
    #TODO add your tests there
)


foreach(TEST ${ALL_TESTS})
    add_executable(
        ${TEST}
        tests/${TEST}.cpp
        ${controllers_files}
        ${models_files}
        ${generics_files}
        ${results_files}
        ${contents_files}
    )
    target_link_libraries(${TEST} ${MAIN_PROJECT_LIBS})
    add_test(
        ${TEST}
        ${TEST}
    )
endforeach()


