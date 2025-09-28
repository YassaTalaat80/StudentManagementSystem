cmake_minimum_required(VERSION 3.31)
project(untitled9)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled9
      src/main.cpp
        src/Rational.cpp
        src/Student.cpp
        src/Course.cpp
        src/NormalCourse.cpp
        src/SummerCourse.cpp
        src/GeneralProgramStudent.cpp
        src/SpecialProgramStudent.cpp
        src/CourseList.cpp
)
