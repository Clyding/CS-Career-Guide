// Career.h

#ifndef CAREER_H
#define CAREER_H

#include <iostream>
#include <string>

using namespace std;

class Career {
private:
    string goals;
    string interest;
    string academic_level;

public:
    Career();
    Career(string student_goals, string student_interest, string level);

    void setGoals(string student_goals);
    void setInterest(string student_interest);
    void setAcademicLevel(string level);

    string getGoals() const;
    string getInterest() const;
    string getAcademicLevel() const;
};

#endif