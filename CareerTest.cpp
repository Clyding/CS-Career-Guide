#include "Career.h"
#include "GradSch.h"
#include "Quant.h"
#include "Fintech.h"
#include "SWE.h"
#include <fstream>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    fstream dataFile1, dataFile2, dataFile3, dataFile4;
    dataFile1.open("GradSch.txt", ios::in);
    dataFile2.open("Quant.txt", ios::in);
    dataFile3.open("SWE.txt", ios::in);
    dataFile4.open("Fintech.txt", ios::in);

    string interest;
    string goals;
    string classification;
    string profession;
    Quant quant_info;
    SWE swe_info;
    GradSch gradsch_info;
    Fintech fintech_info;

    Career career;

    cout << "What are your major goals?" << endl;
    getline(cin, goals);
    career.setGoals(goals);
    cout << " " << endl;

    cout << "What are your interests?" << endl;
    getline(cin, interest);
    career.setInterest(interest);
    cout << " " << endl;

    cout << "What is your current classification?" << endl;
    getline(cin, classification);
    career.setAcademicLevel(classification);
    cout << " " << endl;

    cout << "Your Goals: " << career.getGoals() << endl;
    cout << "Specific Interests: " << career.getInterest() << endl;
    cout << "Current Classification: " << career.getAcademicLevel() << endl;
    cout << " " << endl;

    cout << "Type a career profession you would like to pursue from the options below" << endl;
    cout << "1. Quantitative Trading 2. Financial Tech (FinTech) 3. Academia 4. Software Engineering" << endl;
    getline(cin, profession);
    cout << " " << endl;

    cout << "What are your specific job interests?" << endl;
    cout << "Check the options for a clue" << endl;
    cout << "1. Quantitative Trader 2. Software Engineer 3. Graduate School 4. AI Researcher 5. Professor 6. Site Reliability Engineer 7. Machine Learning Engineer 8. Product Manager 9. DeVops Engineer Fintech Engineer" << endl;
    getline(cin, interest);
    cout << " " << endl;


    if (goals == "Quantitative Trading" || goals == "Quant" || goals == "Quant Trader") {
        quant_info.displayInformation(dataFile2);
    } else if (goals == "Financial Tech" || goals == "FinTech" || goals == "Finance") {
        fintech_info.displayInformation(dataFile4);
    } else if (goals == "Academia" || goals == "Research" || goals == "PhD") {
        gradsch_info.displayInformation(dataFile1);
    } else if (goals == "Software Engineering" || goals == "SWE") {
        swe_info.displayInformation(dataFile3);
    } else {
        cout << "Invalid choice. Please choose a valid career option." << endl;
    }

    return 0;
}
