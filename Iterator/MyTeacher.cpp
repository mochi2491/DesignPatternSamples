#include "MyTeacher.h"

#include <iostream>

#include "StudentList.h"

namespace Iterator {
void MyTeacher::CreateStudentList() {
    m_studentList = MyStudentList();
    studentList.add(new Student("赤井亮太", 1));
    studentList.add(new Student("赤羽里美", 2));
    studentList.add(new Student("岡田美央", 2));
    studentList.add(new Student("西森俊介", 1));
    studentList.add(new Student("中ノ森玲菜", 2));
}

void MyTeacher::CallStudents() {
    int size = m_studentList.GetLastNum();
    for (int n = 0; n < size; n++) {
        std::cout << m_studentList.GetStudentAt(n).GetName() << std::endl;
    }
}
}  // namespace Iterator