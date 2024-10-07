#pragma once
#include "Aggregate.h"
#include "Student.h"
#include "StudentListIterator.h"

namespace Iterator {
template <typename T>
class StudentList : public Aggregate<T> {
public:
    StudentList(int count);
    ~StudentList();
    void Add(T student);
    int GetLast();
    T* GetList();

    Iterator<T>* GetIterator() override;

private:
    T* m_list;
    int m_last;
};

template <typename T>
StudentList<T>::StudentList(int count)
    : m_list(new Student[count]),
      m_last(0) {}

template <typename T>
StudentList<T>::~StudentList() {
    delete m_list;
}

template <typename T>
void StudentList<T>::Add(T student) {
    m_list[m_last] = student;
    m_last++;
}

template <typename T>
int StudentList<T>::GetLast() {
    return m_last;
}

template <typename T>
T* StudentList<T>::GetList() {
    return m_list;
}

template <typename T>
Iterator<T>* StudentList<T>::GetIterator() {
    return new StudentListIterator<T>(this);
}
}  // namespace Iterator
