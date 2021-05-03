// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program gets the user to guess a pseudo-random number

#include <iostream>
#include <random>

int main() {
    // this function generates a pseudo-random number and gets the user to
    //      guess it

    // variables
    int guess;
    int correctNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    correctNumber = idist(rgen);

    // input
    std::cout << "Guess a number from 0 - 9: ";
    std::cin >> guess;

    // process & output
    if (guess == correctNumber) {
        std::cout << "\nCorrect!" << std::endl;
    } else {
        std::cout << "\nIncorrect! The number was " << correctNumber << "."
              << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
