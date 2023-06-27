//****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
//****** PROBLEM 10
//****** EDSON ZANLORENSI JUNIOR

#include <iostream>
#include <string>
#include<limits>
constexpr int maxChar{ 1000 };

int main()
{
    char* x = new char[maxChar];

    while (true) {
        std::cout << "Enter the string: ";
      
        std::cin.getline(x, maxChar);

        int count = 0;
        for (int i = 0; i < maxChar; ++i)
        {
            if (x[i] == '\0' || x[i] == '\n') break;
            count++;
        }

        if (count == maxChar-1) {
            std::cout << "Please input a string with less than " + std::to_string(maxChar-1) + " characters." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');      
        }
        else {
            std::cout << "Size of string: " << count << std::endl;
            delete[] x;
            break;
        }
    }

    return 0;
}