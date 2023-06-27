//****** PROGRAMMING SKILLS CHALLENGE - SIEMENS PROOF OF CONCEPT
//****** PROBLEM 4
//****** EDSON ZANLORENSI JUNIOR


#include <iostream>
#include <string>
bool ConcatRemove(std::string s, std::string t, int k)
{
    //Case 1: k bigger than or equal sum of size of both strings
    int size_s = s.size();
    int size_t = t.size();
    if (k >= size_s + size_t) { //if the desired number of operations is bigger than or equal the sum of sizes of s and t, returns positive (possible) - in this case, just remove s and concatenate t, removing empty strings as necessary
        std::cout << "Yes" << std::endl;
        std::cout << "\nOperations:" << std::endl;
        std::cout << "Removed \"" + s + "\" (" + std::to_string(size_s) + " operations)" << std::endl; //remove all s characters
        if (k - size_s - size_t > 0) 
            std::cout << "Removed " + std::to_string(k - size_s - size_t) + " empty strings (" + std::to_string(k - size_s - size_t) + " operations)" << std::endl; //remove k-size_s-size_t (if this>0) empty characters from the empty result
        std::cout << "Concatenated \"" + t + "\" (" + std::to_string(size_t) + " operations)"; //concatenate all t characters
        return true; //true
    }


    //Case 2: k is bigger than minimum value and lesser than sum of size of both strings
    int index{};

    for (int i = 0; i <= size_s; i++) //loop through string s, starting from beginning until the end
    {
        if (s[i] != t[i] || i == size_t)  //get position i where strings start to differ
        {
            index = i;
            break;
        }
    }
    int minK = size_t - index + size_s - index; //the minimum value of k so it is possible to perform the desired transformation

    if (!((k - minK) % 2)) { //if the difference between k and the minimum k is an even value (or zero), it is possible (return true). That is because it is always possible to remove and add the same character (2 operations) to fill the number of operations until it reaches the desired value. 
        int indexAux = index - (k - minK) / 2; //stores a auxiliary value to use in the operations. Its value equals the index where strings begin to differ minus the number of necessary pair operations (remove/concatenate)
        std::cout << "Yes" << std::endl;
        std::cout << "\nOperations:" << std::endl;
        std::cout << "Removed \"" + s.substr(indexAux) + "\" (" + std::to_string(s.substr(indexAux).size()) + " operations)" << std::endl;  // removes the characters of s that comes after the auxiliary index
        if (t.substr(indexAux).size() > 0)
            std::cout << "Concatenated \"" + t.substr(indexAux) + "\" (" + std::to_string(t.substr(indexAux).size()) + " operations)"; //and if necessary, concatenates the characters of t of position > auxiliary index 

        return true;
    }
    std::cout << "No" << std::endl; //return false if none of above conditions were met.
    return false;
}
int main()
{
    std::string s;
    std::string t;
    int k;
    std::cout << "Enter the starting string (s): ";
    std::cin >> s;
    std::cout << "Enter the desired string (t): ";
    std::cin >> t;
    std::cout << "Enter the desired number of operations (k): ";
    std::cin >> k;

    ConcatRemove(s, t, k);
    return 0;
}