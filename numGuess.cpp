// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: October 5, 2022
// This program asks the user to try and guess the correct number
// between 1-9 and displays a message depending on if they get it right or not

#include <iostream>

int main() {
    // Correct number for user to try and guess
    const int CORRECT_NUMBER = 8;

    // Initialize Variable
    float userGuess;

    // Asks the user to guess the number
    std::cout << "Guess the number (1-9): ";
    std::cin >> userGuess;

    // IF the user guesses the number correctly
    if (userGuess == CORRECT_NUMBER) {
        std::cout << "You guessed correctly!" << std::endl;

    // IF the user guessed wrong
    } else {
        std::cout << "You guessed wrong!" << std::endl;
    }

    // Displays the correct answer regardless
    std::cout << "The correct number was " << CORRECT_NUMBER << std::endl;
}
