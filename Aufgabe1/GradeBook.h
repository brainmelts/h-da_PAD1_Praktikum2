#include <string>

class GradeBook {
public:
    GradeBook(std::string, std::string);

    void setCourseName(std::string);
    void setDozentName(std::string);

    std::string getCourseName() const;
    std::string getDozentName() const;

    std::string message() const;

private:
    std::string courseName;
    std::string dozentName;
};