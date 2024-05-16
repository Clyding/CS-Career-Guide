// GradSch.cpp

#include "GradSch.h"
#include <iostream>
#include <list>

using namespace std;

GradSch::GradSch() : researchAreas(""), gradSchoolTips("") {}

GradSch::GradSch(string Res_Area, string tips)
    : researchAreas(Res_Area), gradSchoolTips(tips) {}

void GradSch::setResearchAreas(string Res_Area) {
    researchAreas = Res_Area;
}

void GradSch::setGradSchoolTips(string tips) {
    gradSchoolTips = tips;
}

string GradSch::getResearchAreas() const {
    return researchAreas;
}

string GradSch::getGradSchoolTips() const {
    return gradSchoolTips;
}

void GradSch::displayInformation(fstream& dataFile1) const {
    if (!dataFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        return;
    }

    string line;
    while (getline(dataFile1, line)) {
        cout << line << endl;
    }
}