#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    bool check = 1;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            check = 0;
    if (n == 1)
    {
        cout << -1;
        return 0;
    }
    if (check == 1)
        cout << 1;
    else
        cout << 0;
    return 0;
}