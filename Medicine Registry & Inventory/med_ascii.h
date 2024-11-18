#ifndef ASCII_ART_H
#define ASCII_ART_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

void printAsciiText(const std::string& text) {
    std::map<char, std::vector<std::string>> asciiArt = {
        {'M', {"M   M", "MM MM", "M M M", "M   M", "M   M"}},
        {'E', {"EEEEE", "E    ", "EEE  ", "E    ", "EEEEE"}},
        {'D', {"DDDD ", "D   D", "D   D", "D   D", "DDDD "}},
        {'I', {"IIIII", "  I  ", "  I  ", "  I  ", "IIIII"}},
        {'C', {" CCC ", "C    ", "C    ", "C    ", " CCC "}},
        {'N', {"N   N", "NN  N", "N N N", "N  NN", "N   N"}},
    };

    for (int i = 0; i < 5; i++) {
        for (char c : text) {
            c = toupper(c);

            if (asciiArt.find(c) != asciiArt.end()) {
                std::cout << asciiArt[c][i] << "  "; 
            } else {
                std::cout << "     ";  
            }
        }
        std::cout << "\n"; 
    }
}

#endif
