// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program determines if a year is a leap year

#include <iostream>
#include <string>

int main() {
    // this function will calculate if a given year is a leap year

    std::cout << "This program determines if a year is "
              << "a leap year or not." << std::endl;

    // variable declarations
    const int QUADRENNIAL = 4;
    const int CENTENNIAL = 100;
    const int QUADRICENTENNIAL = 400;
    std::string inputYear;
    int inputYearInt;

    // input
    std::cout << "Please input a year: ";
    std::cin >> inputYear;
    std::cout << "" << std::endl;

    // process
    try {
        inputYearInt = std::stoi(inputYear);

        if (inputYearInt % QUADRENNIAL == 0) {
            if (inputYearInt % CENTENNIAL == 0) {
                if (inputYearInt % QUADRICENTENNIAL == 0) {
                    // output
                    std::cout << inputYearInt << " is a leap year!";
                } else {
                    // output
                    std::cout << inputYearInt << "is not a leap year.";}
            } else {
                // output
                std::cout << inputYearInt << " is a leap year!";}
        } else {
            // output
            std::cout << inputYearInt << " is not a leap year.";}
    } catch (std::invalid_argument) {
        std::cout << "Please input a year as an integer!"
                  << " Try again." << std::endl;}

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Thank you for playing!" << std::endl;
}
