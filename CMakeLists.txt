cmake_minimum_required(VERSION 3.1)
project( convert_color )
find_package( OpenCV REQUIRED ) # 환경 변수 들을 찾아서등록
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( convert_color.out convert_color.cpp )
target_link_libraries( convert_color.out ${OpenCV_LIBS} )
