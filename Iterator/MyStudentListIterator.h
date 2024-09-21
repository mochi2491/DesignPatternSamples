#include "Iterator.h"
#include "MyStudentList.h"

namespace Iterator {
class MyStudentListIterator : public Iterator {
public:
    MyStudentListIterator(MyStudentList list);
    bool HasNext() override;
    Student* Next() override;

private:
    int m_index;
    MyStudentList m_studentList;
};
}  // namespace Iterator