//****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
//****** PROBLEM 11
//****** EDSON ZANLORENSI JUNIOR

#include <iostream>
#include <string>

constexpr int maxChar{ 1000 };

int main()
{
    //reverse string base on the algorithm below to swap values a and b:
    // a=a^b;
    // b=a^b;
    // a=a^b;
    std::string input;
    std::cin >> input;
    int inputSize = input.size();
    for (int i = 0; i < inputSize / 2; i++) {
        input[i] ^= input[inputSize - i - 1];
        input[inputSize - i - 1] ^= input[i];
        input[i] ^= input[inputSize - i - 1];
    }
    std::cout << input << std::endl;
    return 0;
}