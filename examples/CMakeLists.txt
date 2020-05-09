link_libraries(glfw3)

add_executable(shaderExample shaderExample.cpp)

add_executable(textureExample textureExample.cpp)

add_executable(transformation transformation.cpp)

add_executable(coordinateSystem coordinateSystem.cpp)

add_executable(camera camera.cpp)

target_link_libraries(shaderExample SRCS)

target_link_libraries(textureExample SRCS)

target_link_libraries(transformation SRCS)

target_link_libraries(coordinateSystem SRCS)

target_link_libraries(camera SRCS)

add_executable(light light.cpp)
target_link_libraries(light SRCS)

add_executable(basic_lighting_specular light/basic_lighting_specular.cpp)
target_link_libraries(basic_lighting_specular SRCS)
