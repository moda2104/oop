#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n, sum_1 = 0, sum_2 = 0, sum_3 = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum_1 += pow(i, i);

    for (int i = 1; i <= n; i++)
    {
        int sum_fake = 1;
        for (int j = 1; j <= i; j++)
            sum_fake *= j;
        sum_2 += sum_fake;
    }

    for (int i = 1; i <= n; i++)
    {
        int sum_feka = 0;
        for (int j = 1; j <= i; j++)
            sum_feka += j;
        sum_3 += 1.0 / (sum_feka);
    }
    cout << sum_1 << endl << sum_2 << endl << sum_3;
    return 0;
}