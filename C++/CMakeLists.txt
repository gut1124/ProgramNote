# cmake文件demo,包含opencv/boost/halcon/hik等常用库类的添加罗技

# 设置cmake最低版本
cmake_minimum_required(VERSION 3.5)

# 设置工程名
project(ShapeMatch)

####################################################################################################
# 工程设置
####################################################################################################

# 设定C++版本
set(CMAKE_CXX_STANDARD 11)

# 设置为release模式,在vs编译器编译的情况下,debug模式和release模式的性能存在较大的差异
set(CMAKE_BUILD_TYPE "Release")

# 开启此选项,可以在release模式下进行debug调试
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")

####################################################################################################
# 设置输出
####################################################################################################

#设置参与编译的文件
file(GLOB SRC_LIST "*.cpp")

# 将指定的cpp文件参与编译,生成可执行文件
add_executable (${PROJECT_NAME} ${SRC_LIST} )

# 将指定的cpp文件参与编译,生成静态链接库
add_library(${PROJECT_NAME}_static STATIC ${SRC_LIST})

# 将指定的cpp文件参与编译,生成动态链接库
add_library(${PROJECT_NAME}_shared SHARED ${SRC_LIST})

# 将链接库的输出名更改为指定的名称
SET_TARGET_PROPERTIES(${PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "a1")
SET_TARGET_PROPERTIES(${PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "a2")

####################################################################################################
# 添加第三方库
# 1. 设置头文件目录 include_directories
# 2. 设置库文件目录 link_directories
# 3. 将库文件链接进工程中 target_link_libraries
####################################################################################################

# 添加opencv支持
set(OpenCV_DIR "C:/Program Files/CppLibrary/opencv/build")
find_package(OpenCV REQUIRED)
link_directories(${OpenCV_LIBRARY_DIRS})

target_link_libraries(${PROJECT_NAME}  ${OpenCV_LIBS})

# 添加boost/serialization支持
include_directories("C:/Program Files/CppLibrary/boost")
link_directories("C:/Program Files/CppLibrary/boost/stage/lib")

if(${CMAKE_BUILD_TYPE} STREQUAL Release)
    set(BOOST_SERIALIZATION_LIB "libboost_serialization-vc142-mt-x64-1_75.lib")
else()
    set(BOOST_SERIALIZATION_LIB "libboost_serialization-vc142-mt-gd-x64-1_75.lib")
endif()

target_link_libraries(${PROJECT_NAME} ${BOOST_SERIALIZATION_LIB})

# 添加halcon支持
include_directories($ENV{HALCONROOT}/include 
                    $ENV{HALCONROOT}/include/halconcpp)
link_directories($ENV{HALCONROOT}/lib/x64-win64)

target_link_libraries(${PROJECT_NAME} halconcpp.lib halcon.lib halconc.lib)

# 添加HIK相机SDK支持
include_directories($ENV{MVCAM_COMMON_RUNENV}/Includes)
link_directories($ENV{MVCAM_COMMON_RUNENV}/Libraries/win64)

target_link_libraries(${PROJECT_NAME} MvCameraControl.lib)


