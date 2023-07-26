#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
   
    std::srand(std::time(0));

    int lowerBound = 1; 
    int upperBound = 100; 
    int randomNumber = std::rand() % (upperBound - lowerBound + 1) + lowerBound;

    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have chosen a number between " << lowerBound << " and " << upperBound << "." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            std::cout << "Number of attempts: " << attempts << std::endl;
        }

    } while (userGuess != randomNumber);

    return 0;
}



