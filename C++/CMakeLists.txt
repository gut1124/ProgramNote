# cmake文件demo,包含opencv/boost/halcon/hik等常用库类的添加逻辑

####################################################################################################
# 工程设置
####################################################################################################

# 设置cmake最低版本
cmake_minimum_required(VERSION 3.5)

# 设置工程名
project(ShapeMatch)

# 设定C++版本
set(CMAKE_CXX_STANDARD 11)

# 设置为release模式,在vs编译器编译的情况下,debug模式和release模式的性能存在较大的差异
set(CMAKE_BUILD_TYPE "Release")

# 开启此选项,可以在release模式下进行debug调试
if (WIN32)
    # 开启此选项,可以在release模式下进行debug调试
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
    set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
    set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
endif()

####################################################################################################
# 添加第三方库
# 1. 设置头文件目录 include_directories
# 2. 设置库文件目录 link_directories
# 3. 将库文件链接进工程中 link_libraries  需要在add_executable之前
# 3. 将库文件链接进工程中 target_link_libraries  需要在add_executable之后
####################################################################################################

# 添加opencv支持
if (WIN32)
    set(OpenCV_DIR "C:/Program Files/CppLibrary/opencv/build")
endif()
find_package(OpenCV REQUIRED)
link_directories(${OpenCV_LIBRARY_DIRS})
#target_link_libraries(${PROJECT_NAME}  ${OpenCV_LIBS})  # 这个要放最后

# 添加OpenMP支持
find_package( OpenMP REQUIRED)
if(OPENMP_FOUND)
    message("OPENMP FOUND")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()

# 添加boost/serialization支持
include_directories("C:/Program Files/CppLibrary/boost/include/boost-1_75")
link_directories("C:/Program Files/CppLibrary/boost/lib")
if(${CMAKE_BUILD_TYPE} STREQUAL Release)
    set(BOOST_SERIALIZATION_LIB "libboost_serialization-vc142-mt-x64-1_75")
else()
    set(BOOST_SERIALIZATION_LIB "libboost_serialization-vc142-mt-gd-x64-1_75")
endif()
link_libraries(${BOOST_SERIALIZATION})
#target_link_libraries(${PROJECT_NAME} ${BOOST_SERIALIZATION_LIB})

# 添加HIK相机SDK支持
include_directories($ENV{MVCAM_COMMON_RUNENV}/Includes)
link_directories($ENV{MVCAM_COMMON_RUNENV}/Libraries/win64)
link_libraries($ENV{MVCAM_COMMON_RUNENV}/Libraries/win64/MvCameraControl.lib)

####################################################################################################
# 设置输出
####################################################################################################

# 设置头文件目录
include_directories(
${PROJECT_SOURCE_DIR}
)

#设置参与编译的文件
file(GLOB SRC_LIST "*.cpp")

# 将源代码添加到此项目的可执行文件
add_executable (${PROJECT_NAME} ${SRC_LIST})

# 创建链接库
# add_library(${PROJECT_NAME} ${SRC_LIST})

####################################################################################################
# 绑定工程和第三方库
####################################################################################################

target_link_libraries(${PROJECT_NAME} 
  ${OpenCV_LIBS}
)


####################################################################################################
# 输出
####################################################################################################

# 设置输出根路径
set (CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/..)

# 设置库安装路径
install(TARGETS ${PROJECT_NAME} 
        EXPORT ${PROJECT_NAME}  
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib  # 动态库安装路径
        ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib  # 静态库安装路径
        RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin  # 可执行文件安装路径
        )

# 复制相关头文件到头文件安装路径下
file (GLOB INSTALL_HEAD_FILES  "${PROJECT_SOURCE_DIR}/include/*.h")
install(FILES ${INSTALL_HEAD_FILES} DESTINATION  ${CMAKE_INSTALL_PREFIX}/include/CvVision)

