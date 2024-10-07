#pragma once
#include "Iterator.h"
namespace Iterator {
template <typename T>
class Aggregate {
public:
    Aggregate() {};
    virtual ~Aggregate() {};
    virtual Iterator<T>* GetIterator() = 0;
};
}  // namespace Iterator
