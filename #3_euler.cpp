#include <iostream>
using namespace std;



int main()
{   
    int i = 2, pro = 1;
    long long n = 600851475143;
    while (pro - 600851475143 != 0){
        if (n % i == 0){
            cout << i << " ";
            pro *= i;
            n /= i;
            i = 2;
        }
        i++;
    }

    return 0;
}