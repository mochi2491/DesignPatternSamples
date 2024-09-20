#include "Teacher.h"

namespace Iterator {
class MyTeacher : public Teacher {
public:
    void CreateStudentList() override;
    void CallStudents() override;

private:
    StudentList m_studentList;
};
}  // namespace Iterator
