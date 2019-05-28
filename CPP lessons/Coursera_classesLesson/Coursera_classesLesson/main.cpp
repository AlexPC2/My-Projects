#include <iostream>
#include <string>

struct Specialization
{
    std::string value;
    explicit Specialization(const std::string in)
    {
        value = in;
    }
};

struct Course
{
    std::string  value;
    explicit Course(const std::string in)
    {
        value = in;
    }
};

struct Week
{
    std::string  value;
    explicit Week(const std::string in)
    {
        value = in;
    }
};

struct LectureTitle
{
    explicit LectureTitle(Specialization S, Course C, Week W)
    {
        specialization = S.value;
        course = C.value;
        week = W.value;
        
    }
    std::string specialization;
    std::string course;
    std::string week;
};

