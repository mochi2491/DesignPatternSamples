#include "Iterator.h"
#include "StudentList.h"

namespace Iterator {
class MyStudentList : public StudentList, Iterator {
public:
    MyStudentList();
    MyStudentList(int studentCount);
};
}  // namespace Iterator
