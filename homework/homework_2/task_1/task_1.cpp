#include<iostream>
#include<random>
#include<cstdlib>

int main()
{   
    int guessed_number;
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> dist(0, 99); // define the range
 
    int random_number = dist(gen); // generate numbers
    std::cout << random_number;
    std::cout << "please input guessed number between 0 to 99: " << std::endl;
    std::cin >> guessed_number;
    if (std::cin.fail()) 
    {
        std::cout << "Error encountered, exiting..." << std::endl;
        return 1;
        return EXIT_FAILURE;
    }
    if (guessed_number < 0 || guessed_number > 99)
    {
        std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
    }
    if (guessed_number == random_number)
    {
        std::cout << "Game own." << std::endl;
    }

    bool condition = (random_number != guessed_number);
    while (condition)
    {
        if (guessed_number > random_number)
            std::cout << "Guessed number is greater than system generated random number." << std::endl;
        if (guessed_number < random_number)
            std::cout << "Guessed number is lesser than system generated random number." << std::endl;
        std::cout << "please input guessed number between 0 to 99: " << std::endl;
        std::cin >> guessed_number;
        if (guessed_number == random_number)
        {
            std::cout << "Game own." << std::endl;
            return 0;
            return EXIT_SUCCESS;
        }
    }
}
