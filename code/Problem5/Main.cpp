//****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
//****** PROBLEM 5
//****** EDSON ZANLORENSI JUNIOR


#include "ConcatRemove.h"
int main()
{
    //case 1: k is bigger than the sum of the sizes of both strings
    std::cout << "\nCase 1";
    ConcatRemove("abc", "def", 8); //in this case, abc is removed, 2 empty strings are removed, and def is concatenated (8 operations)

    //case 2: k is equal the sum of the sizes of both strings
    std::cout << "\nCase 2";
    ConcatRemove("abc", "def", 6); //in this case, abc is removed and def is concatenated (6 operations)

    //case 3: k is equal the minimum necessary value
    std::cout << "\nCase 3";
    ConcatRemove("abcdef", "abc", 3); // in this case, def is removed (3 operations)

    //case 4: k is between the minimun necessary value and the sum of the sizes of both strings
    std::cout << "\nCase 4";
    ConcatRemove("abcdefgh", "abtrg", 11); // in this case, bcdefgh is removed and btrg is concatenated (11 operations) - notice that k-minK=2, so it also removes 2/2=1 character along with the minimum (the b character)

    //case 5: another case of the above condition
    std::cout << "\nCase 5";
    ConcatRemove("abcdefghij", "abcdtrg", 13); // in this case, cdefghij is removed and cdtrg is concatenated (13 operations) - notice that k-minK=4, so it also removes 4/2=2 characters along with the minimum (the c and d characters adr)
    
    //case 6: another case of the above condition, but now s<t
    std::cout << "\nCase 6";
    ConcatRemove("abc", "abcdtrg", 6); // in this case, c is removed and cdtrg is concatenated (6 operations) - notice that k-minK=2, so it also removes 2/2=1 characters along with the minimum (the c character)
    
    //case 7: not possible to perform the desired operations
    std::cout << "\nCase 7";
    ConcatRemove("abc", "abcdtrg", 5); //not possible

    return 0;
}