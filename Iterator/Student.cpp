#include "Student.h"

namespace Iterator {
Student::Student(const std::string& name, Sex sex)
    : m_name(name), m_sex(sex) {};

const std::string& Student::GetName() const {
    return m_name;
}

Sex Student::GetSex() const {
    return m_sex;
}

}  // namespace Iterator