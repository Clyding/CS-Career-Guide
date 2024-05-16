// Fintech.cpp

#include "Fintech.h"
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

fstream dataFile;  // Define the variable in one source file

Fintech::Fintech() : fintechAreas(""), blockchainTechList() {}

Fintech::Fintech(string finTech, const list<string>& blockchainTechList)
    : fintechAreas(finTech), blockchainTechList(blockchainTechList) {}

void Fintech::setFinTechAreas(string finTech) {
    fintechAreas = finTech;
}

void Fintech::setBlockchainTech(const list<string>& blockchainTech) {
    blockchainTechList = blockchainTech;
}

string Fintech::getFinTechAreas() const {
    return fintechAreas;
}

const list<string>& Fintech::getBlockchainTech() const {
    return blockchainTechList;
}

void Fintech::displayInformation(fstream& dataFile) const {
    if (!dataFile.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        return;
    }

    string line;
    while (getline(dataFile, line)) {
        cout << line << endl;
    }
}
