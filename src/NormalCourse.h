#ifndef NORMALCOURSE_H
#define NORMALCOURSE_H
#include <bits/stdc++.h>
using namespace std;
#include "Course.h"

class NormalCourse : public Course{
    public:
        NormalCourse();
        NormalCourse(const std::string& name, int level, int creditHours);

        void generateCode() override;
};

#endif //NORMALCOURSE_H
