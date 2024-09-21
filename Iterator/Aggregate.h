#include "Iterator.h"
namespace Iterator {
class Aggregate {
public:
    virtual Iterator* GetIterator() = 0;
};
}  // namespace Iterator
