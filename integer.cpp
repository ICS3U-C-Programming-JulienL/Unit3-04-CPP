// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 13, 2023
// This program displays the type of integer entered by the user

#include <cstdlib>
#include <iostream>

int main() {
    // declare variables
    int userInteger;

    // get the user integer
    std ::cout << "The Integer Program" << std::endl;
    std::cout << "Enter an integer and the type will be shown (ex. positive): ";
    std::cin >> userInteger;

    // if the user integer > 0, tell them it is positive
    if (userInteger > 0) {
        std ::cout << userInteger << " is positive." << std::endl;
    } else if (userInteger < 0) {
        // otherwise, if the user integer < 0, tell them it is negative
        std ::cout << userInteger << " is negative." << std::endl;
    } else {
        // otherwise the number is 0
        std ::cout << "The number is 0." << std::endl;
    }
}
