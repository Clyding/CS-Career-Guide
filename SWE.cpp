// SWE.cpp
#include "SWE.h"
#include <iostream>
#include <list>

using namespace std;

SWE::SWE() : softwareMethod(""), softwareToolsList() {}

SWE::SWE(string sM, const list<string>& softwareToolsList)
    : softwareMethod(sM), softwareToolsList(softwareToolsList) {}

void SWE::setSoftwareMethods(string sM) {
    softwareMethod = sM;
}

void SWE::setSoftwareTools(const list<string>& toolsList) {
    softwareToolsList = toolsList;
}

string SWE::getSoftwareMethods() const {
    return softwareMethod;
}

const list<string>& SWE::getSoftwareTools() const {
    return softwareToolsList;
}

// Correct the definition to be const
void SWE::displayInformation(fstream& dataFile) const {
    if (!dataFile.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        return;
    }

    string line;
    while (getline(dataFile, line)) {
        cout << line << endl;
    }
}
