#ifndef SUMMERCOURSE_H
#define SUMMERCOURSE_H
#include <bits/stdc++.h>
using namespace std;
#include "Course.h"

class SummerCourse : public Course {
    public:
        SummerCourse();
        SummerCourse(const std::string& name, int level, int creditHours);

        void generateCode() override;
};


#endif //SUMMERCOURSE_H
