//****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
//****** PROBLEM 3
//****** EDSON ZANLORENSI JUNIOR


#include <iostream>
#include <sstream>

int main()
{
    std::ostringstream output;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0) output << "Foo";
        if (i % 5 == 0) output << "Baa";

        if (output.str().empty()) output << i;
        std::cout << output.str() << std::endl;
        output.str(""); // Clear the output for the next iteration
    }
    return 0;
}