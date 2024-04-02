/*Number Guessing Game*/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
  bool bIsRunning = true;
  std::string input;
  int guessCount{0}, minNumber{}, maxNumber{}, randomNumber{}, guessNumber{};

  while (bIsRunning) {
    std::cout << "*** Number Guessing Game ***" << std::endl;
    std::cout << "Enter the number of guesses : ";
    getline(std::cin, input);
    guessCount = std::stoi(input);
    std::cout << "Enter the minimum number : ";
    getline(std::cin, input);
    minNumber = std::stoi(input);
    std::cout << "Enter the maximum number : ";
    getline(std::cin, input);
    maxNumber = std::stoi(input);

    // Generate the random number
    srand((unsigned)time(0));
    randomNumber = rand() % (maxNumber - minNumber + 1) + minNumber;

    for (int i = 0; i < guessCount; i++) {
      std::cout << "Enter the number you guess : ";
      getline(std::cin, input);
      guessNumber = std::stoi(input);
      if (guessNumber == randomNumber) {
        std::cout << "Well done, you guessed the number !" << std::endl;
        break;
      } else if (guessNumber > randomNumber) {
        std::cout << "Your guess was too high , you have remaining "
                  << guessCount - 1 - i << " : " << std::endl;
      } else {
        std::cout << "Your guess was too low , you have remaining "
                  << guessCount - 1 - i << " : " << std::endl;
      }
    }
    std::cout << "\nEnter 0 to exit, or any number to play again: ";
    getline(std::cin, input);
    if (std::stoi(input) == 0) {
      bIsRunning = false;
    }
  }

  return 0;
}
