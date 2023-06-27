//****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
//****** PROBLEM 3
//****** EDSON ZANLORENSI JUNIOR


#include <iostream>
#include <string>

int main()
{
    std::string output;
    for (int i = 1; i <= 100; i++)
    {
        if (!(i % 3)) output += "Foo"; //if the ith value if multiple of 3, add "Foo" to output
        if (!(i % 5)) output += "Baa";  //if the ith value if multiple of 5, add "Baa" to output

        if (output.empty()) output=std::to_string(i); //if output is empty, just print the ith value
        std::cout << output << std::endl;
		output.clear(); //clear the output for the next iteration
    }
    return 0;
}