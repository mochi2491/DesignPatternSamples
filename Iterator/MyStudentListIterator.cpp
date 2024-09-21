#include "MyStudentListIterator.h"

namespace Iterator {
MyStudentListIterator::MyStudentListIterator(MyStudentList list) {
    m_index = 0;
    m_studentList = list;
};

bool MyStudentListIterator::HasNext() {
    if (m_studentList.GetLastNum() > m_index) {
        return true;
    } else {
        return false;
    }
}
Student* MyStudentListIterator::Next() {
    Student s = m_studentList.GetStudentAt(m_index);
    m_index++;
    return &s;
}
}  // namespace Iterator
