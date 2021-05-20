// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 18, 2021
// This program asks the user to input a number
// and displays the sum of all number from 0 to the
// number inputted

#include <iostream>
#include <string>


int main() {
    // set variables
    int counter = 0, sum = 0, numberAsInt;
    std::string numberAsString;

    // ask the user for a number
    std::cout << "Enter a positive number: ";
    std::cin >> numberAsString;

    try {
        // convert from string to integer
        numberAsInt = std::stoi(numberAsString);

        if (numberAsInt < 0) {
            // check if number is negative
            std::cout << numberAsString << " is not a positive number.\n";
        } else {
            while (counter <= numberAsInt) {
                // calculate the sum of all number from 0 to numberAsInt
                std::cout << "Tracking " << counter << " times through loop.\n";
                sum = sum + counter;
                counter = counter + 1;
            } std::cout << sum << " is the sum of all "
                                "the numbers from 0 to " << numberAsInt << "\n";
        }
    }  // error message
    catch (std::invalid_argument) {
        std::cout << numberAsString << " is not a positive number.\n";
    }
}
