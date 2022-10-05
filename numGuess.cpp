// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/05
// Takes user input of a guessed number between 0 and 9.
// If the user guessed the correct number (8), a message is
// displayed.
// If the user does not guess it correctly, another
// message is displayed.

#include <iostream>

int main() {
    // correct number constant
    const int correctNumber = 8;

    // guessed number variable
    float guess;

    // title
    std::cout << "Guess a number between 0 and 9!\n";

    // user input for the guessed number
    std::cout << "Enter your guessed number: ";
    std::cin >> guess;

    if (guess == correctNumber) {
        std::cout << "You guessed the number correctly!";
    }

    if (guess != correctNumber) {
        std::cout << "You did not guess the number correctly. Try again!";
    }
}
