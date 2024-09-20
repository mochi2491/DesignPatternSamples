#include "StudentList.h"

namespace Iterator {
StudentList::StudentList() {}

StudentList::StudentList(int studentCount) {
    m_students = new Student[studentCount];
}

void StudentList::Add(const Student& student) {
    m_students[m_last] = student;
    m_last++;
}

const Student& StudentList::GetStudentAt(int index) const {
    return m_students[index];
}

int StudentList::GetLastNum() const {
    return m_last;
}

}  // namespace Iterator