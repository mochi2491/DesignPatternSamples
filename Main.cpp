#include <iostream>

#include "Student.h"
#include "StudentList.h"
#include "StudentListIterator.h"

int main() {
    Iterator::StudentList<Iterator::Student> list{5};

    list.Add(Iterator::Student(17, "a"));
    list.Add(Iterator::Student(18, "b"));
    list.Add(Iterator::Student(17, "c"));
    list.Add(Iterator::Student(16, "d"));
    list.Add(Iterator::Student(16, "e"));
    auto itr = list.GetIterator();
    while (itr->HasNext()) {
        Iterator::Student&& student = itr->Next();
        std::cout << student.GetAge() << std::endl;
    }
    std::cout << "aaa";
    return 0;
}
