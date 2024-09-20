#include "StudentList.h"

namespace Iterator {
class Teacher {
public:
    virtual void CreateStudentList() = 0;
    virtual void CallStudents() = 0;

protected:
    StudentList m_studentList;
};
}  // namespace Iterator
