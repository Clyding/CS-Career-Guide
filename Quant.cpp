// Quant.cpp

#include "Quant.h"
#include <iostream>
#include <list>
#include <string>

using namespace std;

Quant::Quant() : quantumBits(0), quantumHardware() {}

Quant::Quant(int qBits, const list<string>& quantHardware)
    : quantumBits(qBits), quantumHardware(quantHardware) {}

void Quant::setQuantumBits(int qBits) {
    quantumBits = qBits;
}

void Quant::setQuantumHardware(const list<string>& quantHardware) {
    quantumHardware = quantHardware;
}

int Quant::getQuantumBits() const {
    return quantumBits;
}

const list<string>& Quant::getQuantumHardware() const {
    return quantumHardware;
}

void Quant::displayInformation(fstream& dataFile2) const {
    if (!dataFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        return;
    }

    string line;
    while (getline(dataFile2, line)) {
        cout << line << endl;
    }
}
