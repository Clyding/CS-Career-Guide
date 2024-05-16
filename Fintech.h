// Fintech.h

#ifndef FINTECH_H
#define FINTECH_H

#include "Career.h"
#include <iostream>
#include <string>
#include <list>
#include <fstream>

using namespace std;

class Fintech : public Career {
private:
    string fintechAreas;
    list<string> blockchainTechList;

public:
    Fintech();
    Fintech(string finTech, const list<string>& blockchainTechList);

    void setFinTechAreas(string finTech);
    void setBlockchainTech(const list<string>& blockchainTechList);

    string getFinTechAreas() const;
    const list<string>& getBlockchainTech() const;
    void displayInformation(fstream& dataFile) const;
};

extern fstream dataFile;  // Declare as extern in the header

#endif
