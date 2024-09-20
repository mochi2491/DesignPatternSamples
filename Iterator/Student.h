#include <string>

namespace Iterator {
class Student {
public:
    Student();
    Student(const std::string& name, Sex sex);
    const std::string& GetName() const;
    Sex GetSex() const;

private:
    std::string m_name;
    Sex m_sex;
};

enum Sex {
    male,
    female,
    neither
};
}  // namespace Iterator
