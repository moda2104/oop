#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin >> n;

    for (int i = 0; i <= n; i++)
        sum += 1.0 * pow(-1, i) / (2 * i + 1);
    cout << 4 * sum;
    return 0;
}