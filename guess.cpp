#include <iostream>

void guessGame()
{
    int secretNumber = 56;
    int chanceToWin = 3;
    int currentRound = 0;
    int userInput;

    do
    {
        std::cout << "Please enter a number from 1 to 100 to guess a number: ";
        std::cin >> userInput;
        if (userInput != secretNumber)
        {
            currentRound++;
        }
        if (currentRound == chanceToWin)
        {
            std::cout << "You lose :(" << std::endl;
        }
        if (userInput == secretNumber)
        {
            std::cout << "Congratulation, you won :)" << std::endl;
            break;
        }
    } while (chanceToWin != currentRound);
}

int main()
{
    guessGame();
    return 0;
}