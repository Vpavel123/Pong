cmake_minimum_required(VERSION 3.23)
project(Ponk)

set(CMAKE_CXX_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)
link_libraries(glew32s.lib libglfw3.a opengl32.lib)

add_executable(Ponk main.cpp stb.cpp Application.cpp Application.h mesh.cpp mesh.h VAO.cpp VAO.h VBO.cpp VBO.h Buffers.cpp Buffers.h ElementBuffer.cpp ElementBuffer.h Shader.cpp Shader.h)
