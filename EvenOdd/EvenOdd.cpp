/*
Even or Odd
Pawelski
3/26/2023
C++
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number >> ";
    std::cin >> number;
    if (number % 2 == 0)
    {
        std::cout << "That number is even!";
    }
    if (number % 2 == 1)
    {
        std::cout << "That number is odd!";
    }
    return 0;
}
