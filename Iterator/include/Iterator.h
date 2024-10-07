#pragma once
namespace Iterator {
template <typename T>
class Iterator {
public:
    Iterator() {};
    virtual ~Iterator() {};
    virtual bool HasNext() = 0;
    virtual T Next() = 0;
};
}  // namespace Iterator
