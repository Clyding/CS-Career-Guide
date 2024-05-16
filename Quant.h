// Quant.h

#ifndef QUANT_H
#define QUANT_H

#include "Career.h"
#include <iostream>
#include <list>
#include <fstream>

using namespace std;

class Quant : public Career {
private:
    int quantumBits;
    list<string> quantumHardware;

public:
    Quant();
    Quant(int qBits, const list<string>& quantHardware);

    void setQuantumBits(int qBits);
    void setQuantumHardware(const list<string>& quantHardware);

    int getQuantumBits() const;
    const list<string>& getQuantumHardware() const;

    void displayInformation(fstream& dataFile) const;
};

#endif