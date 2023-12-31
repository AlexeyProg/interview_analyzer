#include <company.h>

Company::Company()
{

}

Company::Company(string mName)
{

}

void Company::setName(string &mName)
{
    this->name = mName;
}

void Company::setGrade(int x)
{
    this->grade = x;
}

void Company::setStatus(Status &s)
{
    switch(s)
    {
        case Status::FailedHRinterview:
            this->status = "Failed HR interview";
            break;
        case Status::FailedTechInterview:
            this->status = "Failed Tech interview";
            break;
        case Status::Successfull:
            this->status = "Successfull";
            break;
        case Status::WaitInterview:
            this->status = "Waiting interview";
            break;
        case Status::WaitResults:
            this->status = "Waiting results";
            break;
        default:
            this->status = "Undefined";
    }

}

void Company::addSkill(string &skill)
{
    mSkills.push_back(skill);
}

Company::~Company()
{

}