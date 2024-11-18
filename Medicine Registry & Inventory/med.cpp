#include "med.h"
#include <vector>
#include <cstring>
#include <iostream>
#include <iomanip>

void Medicine::add(int id, const char* name, int cost, int qty) {
    med_id = id;
    strcpy(med_name, name);
    med_cost = cost;
    med_qty = qty;
}

void Medicine::remove(int id, std::vector<Medicine>& meds) {
    for (int i = 0; i < meds.size(); i++) {
        if (meds[i].med_id == id) {
            meds.erase(meds.begin() + i);
            return;
        }
    }
}

void Medicine::display_all(const std::vector<Medicine>& meds) {
    std::cout << "\n-----------------------------------------------\n";
    std::cout << "\t\tMedicine Inventory:\n";
    std::cout << "-----------------------------------------------\n";
    
    std::cout << std::left << std::setw(10) << "ID"
              << std::setw(30) << "Name"
              << std::setw(15) << "Cost"
              << std::setw(10) << "Quantity" << std::endl;
    std::cout << "-----------------------------------------------\n";

    for (int i = 0; i < meds.size(); i++) {
        std::cout << std::left << std::setw(10) << meds[i].med_id
                  << std::setw(30) << meds[i].med_name
                  << std::setw(15) << meds[i].med_cost
                  << std::setw(10) << meds[i].med_qty << std::endl;
    }

    std::cout << "-----------------------------------------------\n";
}

void Medicine::get_expensive(const std::vector<Medicine>& meds) {
    int max_index = 0;

    for (int i = 1; i < meds.size(); i++) {
        if (meds[i].med_cost > meds[max_index].med_cost) {
            max_index = i;
        }
    }

    std::cout << "\n-----------------------------------------------\n";
    std::cout << "Medicine - Most Expensive:\n";
    std::cout << "Medicine - Name: " << meds[max_index].med_name << std::endl;
    std::cout << "Medicine - Cost: " << std::fixed << std::setprecision(2) << meds[max_index].med_cost << std::endl;
    std::cout << "-----------------------------------------------\n";
}

void Medicine::get_cheap(const std::vector<Medicine>& meds) {
    int min_index = 0;

    for (int i = 1; i < meds.size(); i++) {
        if (meds[i].med_cost < meds[min_index].med_cost) {
            min_index = i;
        }
    }

    std::cout << "\n-----------------------------------------------\n";
    std::cout << "Medicine - The Cheapest:\n";
    std::cout << "Medicine - Name: " << meds[min_index].med_name << std::endl;
    std::cout << "Medicine - Cost: " << std::fixed << std::setprecision(2) << meds[min_index].med_cost << std::endl;
    std::cout << "-----------------------------------------------\n";
}

void Medicine::find_maxsales(const std::vector<Medicine>& meds) {
    int max_index = 0;
    double max_sales = meds[0].med_cost * meds[0].med_qty;

    for (int i = 1; i < meds.size(); i++) {
        double sales = meds[i].med_cost * meds[i].med_qty;
        if (sales > max_sales) {
            max_sales = sales;
            max_index = i;
        }
    }

    std::cout << "\n-----------------------------------------------\n";
    std::cout << "Medicine - Highest Sales:\n";
    std::cout << "Medicine - Name: " << meds[max_index].med_name << std::endl;
    std::cout << "Medicine - Total Sales: " << std::fixed << std::setprecision(2) << max_sales << std::endl;
    std::cout << "-----------------------------------------------\n";
}
