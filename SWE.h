// SWE.h
#ifndef SWE_H
#define SWE_H
#include "Career.h"
#include <iostream>
#include <string>
#include <list>
#include <fstream>

using namespace std;

class SWE : public Career {
private:
    string softwareMethod;
    list<string> softwareToolsList;

public:
    SWE();
    SWE(string sM, const list<string>& softwareToolsList);

    void setSoftwareMethods(string sM);
    void setSoftwareTools(const list<string>& softwareToolsList);

    string getSoftwareMethods() const;
    const list<string>& getSoftwareTools() const;

    // Correct the declaration to be const
    void displayInformation(fstream& dataFile) const;
};

extern fstream dataFile;  // Declare as extern in the header

#endif
