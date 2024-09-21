#include "MyStudentList.h"

#include "MyStudentListIterator.h"

namespace Iterator {
Iterator* MyStudentList::GetIterator() {
    return new MyStudentListIterator(*this);
}
}  // namespace Iterator