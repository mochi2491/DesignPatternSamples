#pragma once
#include <string>

namespace Iterator {
class Student {
public:
    Student();
    Student(int age, const std::string& name);
    ~Student();
    int GetAge() const;
    const std::string& GetName() const;

private:
    int m_age;
    std::string m_name;
};  // namespace Iterator
}