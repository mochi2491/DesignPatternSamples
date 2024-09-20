#include "Student.h"

namespace Iterator {
class StudentList {
public:
    StudentList();
    StudentList(int studentCount);
    void Add(const Student& student);
    const Student& GetStudentAt(int index) const;
    int GetLastNum() const;

protected:
    Student* m_students;

private:
    int m_last = 0;
};
}  // namespace Iterator
