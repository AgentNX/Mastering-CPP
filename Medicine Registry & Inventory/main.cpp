/*
    To Compile:
    1. g++ main.cpp med.cpp -o med
    2. ./med
*/


#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#include "med.h"
#include "med_ascii.h"
using namespace std;

int main() {
    vector<Medicine> meds;

    Medicine med1;
    med1.add(7, "Hycort", 9.49, 80);
    meds.push_back(med1);

    Medicine med2;
    med2.add(3, "Antihistamine", 10.2, 50);
    meds.push_back(med2);

    Medicine med3;
    med3.add(6, "Ala-Cort", 8.99, 90);
    meds.push_back(med3);

    Medicine med4;
    med4.add(2, "Ibuprofen", 7.3, 100);
    meds.push_back(med4);

    Medicine med5;
    med5.add(5, "Lomotil", 3.75, 150);
    meds.push_back(med5);

    Medicine med6;
    med6.add(1, "Paracetamol", 4.5, 100);
    meds.push_back(med6);

    Medicine med7;
    med7.add(4, "Rolaids", 17.3, 45);
    meds.push_back(med7);

    std::string text = "Medicine";
    printAsciiText(text);

    std::cout << "\n-----------------------------------------------\n" << endl;
    std::cout << "\nHello! Welcome To The Medicine Display Program!\n" << endl;
    std::cout << "\n-----------------------------------------------\n" << endl;
    std::cout << "\nDisplay All Medicines Available: \n" << endl;
    std::cout << "\n-----------------------------------------------\n" << endl;

    Medicine::display_all(meds);
    Medicine::get_expensive(meds);
    Medicine::get_cheap(meds);
    Medicine::find_maxsales(meds);

    med5.remove(5, meds);
    std::cout << "\n-----------------------------------------------\n" << endl;
    std::cout << "Removed Medicine ID[5]: \n" << endl;
    std::cout << "\n-----------------------------------------------\n" << endl;
    Medicine::display_all(meds);

    return 0;
};