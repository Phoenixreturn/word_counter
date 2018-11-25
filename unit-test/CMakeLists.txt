# CMakeList.txt: проект CMake для word_counter; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(unit-test unit-test.cpp)
target_link_libraries(unit-test gtest gmock_main)
add_test(NAME example_test COMMAND unit-test)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
