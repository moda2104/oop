#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n, x, sum_1 = 0, sum_2 = 0, sum_3 = 0, giai_thua;
    cin >> n >> x;

    for (int i = 0; i <= n; i++)
    {
        sum_1 += pow(x, i);
    }

    for (int i = 0; i <= n; i++)
    {
        sum_2 += pow(x, 2 * i);
    }

    for (int i = 0; i <= n; i++)
    {
        giai_thua = 1;
        for (int j = 1; j <= i; j++) 
        {
            giai_thua *= j;
        }
        sum_3 += 1.0 * pow(x, i) / giai_thua;
    }
    cout << sum_1 << endl << sum_2 << endl << sum_3 << endl;
    return 0;
}