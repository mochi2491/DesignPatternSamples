#include "Aggregate.h"
#include "StudentList.h"

namespace Iterator {
class MyStudentList : public StudentList, Aggregate {
public:
    MyStudentList() : StudentList() {};
    MyStudentList(int studentCount) : StudentList(studentCount) {};
    Iterator* GetIterator();
};
}  // namespace Iterator
