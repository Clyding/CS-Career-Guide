// Career.cpp

#include "Career.h"
#include <iostream>

using namespace std;

Career::Career() : goals(""), interest(""), academic_level("") {}

Career::Career(string student_goals, string student_interest, string level)
    : goals(student_goals), interest(student_interest), academic_level(level) {}

void Career::setGoals(string student_goals) {
    goals = student_goals;
}

void Career::setInterest(string student_interest) {
    interest = student_interest;
}

void Career::setAcademicLevel(string level) {
    academic_level = level;
}

string Career::getGoals() const {
    return goals;
}

string Career::getInterest() const {
    return interest;
}

string Career::getAcademicLevel() const {
    return academic_level;
}