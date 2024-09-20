#include <iostream>

#include "MyTeacher.h"
#include "Teacher.h"
namespace Iterator {
int main() {
    Teacher* you = new MyTeacher();
    you->CreateStudentList();
    you->CallStudents();
    return 0;
}
}  // namespace Iterator
