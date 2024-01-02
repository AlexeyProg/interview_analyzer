#include <iostream>
#include <vector>

using namespace std;

//enum status ; enum grade'

enum class Status 
{
    FailedTechInterview = 1,
    Successfull = 2,
    FailedHRinterview = 3,
    WaitResults = 4,
    WaitInterview = 5
};

class Company
{
public:
    Company();
    Company(string mName);
    ~Company();

    void setGrade(int x);
    void setStatus(Status &s); // poka hz chto po args
    void setName(string &mName);
    void addSkill(string &skill);
private:
    string name;
    vector<string>mSkills;
    int grade;
    string status;
    string filename_questions;
};