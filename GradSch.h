// GradSch.h

#ifndef GRADSCH_H
#define GRADSCH_H

#include "Career.h"
#include <iostream>
#include <list>
#include <fstream>

class GradSch : public Career {
private:
    string researchAreas;
    string gradSchoolTips;

public:
    GradSch();
    GradSch(string Res_Area, string tips);

    void setResearchAreas(string Res_Area);
    void setGradSchoolTips(string tips);

    string getResearchAreas() const;
    string getGradSchoolTips() const;

    void displayInformation(fstream& dataFile) const;
};

#endif