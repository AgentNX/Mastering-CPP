#ifndef MED_H
#define MED_H

#include <vector>
#include <cstring>
#include <iostream>

class Medicine {
public:
    int med_id;
    char med_name[30];
    double med_cost, med_qty;

    void add(int id, const char* name, int cost, int qty);
    void remove(int id, std::vector<Medicine>& meds);

    static void display_all(const std::vector<Medicine>& meds);
    static void get_expensive(const std::vector<Medicine>& meds);
    static void get_cheap(const std::vector<Medicine>& meds);
    static void find_maxsales(const std::vector<Medicine>& meds);
};

#endif