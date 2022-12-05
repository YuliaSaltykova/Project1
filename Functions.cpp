
#include "Functions.h" 

bool check(int n) {

    for (int i = 2; i <= (n - 1); ++i) {

        if (n % i == 0)
        {

            return false;
        }

        
    }
   return true;
}


std::vector <int> prime_numbers(int a, int b) {
    std::vector <int> result; 
    for (int n = a; n <= b; ++n) {
        if (check(n)) {
            result.push_back(n);
        }
    }
    return result;
}