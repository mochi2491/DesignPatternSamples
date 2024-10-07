#include "Student.h"

#define DEFAULT_AGE 0
namespace Iterator {

const std::string DEFAULT_NAME = "hoge";
Student::Student()
    : m_age(DEFAULT_AGE),
      m_name(DEFAULT_NAME) {};

Student::Student(int age, const std::string& name)
    : m_age(age),
      m_name(name) {};

Student::~Student() {}

int Student::GetAge() const {
    return m_age;
}

const std::string& Student::GetName() const {
    return m_name;
}
}  // namespace Iterator