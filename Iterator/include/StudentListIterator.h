#pragma once
#include "Iterator.h"
#include "StudentList.h"

namespace Iterator {
template <typename T>
class StudentList;

template <typename T>
class StudentListIterator : public Iterator<T> {
public:
    StudentListIterator(StudentList<T>* list);
    ~StudentListIterator() override {};
    bool HasNext() override;
    T Next() override;

private:
    StudentList<T>* m_list;
    int m_index;
};

template <typename T>
StudentListIterator<T>::StudentListIterator(StudentList<T>* list)
    : m_list(list),
      m_index(0) {}

template <typename T>
bool StudentListIterator<T>::HasNext() {
    return m_index < m_list->GetLast();
}

template <typename T>
T StudentListIterator<T>::Next() {
    return m_list->GetList()[m_index++];
}
}  // namespace Iterator