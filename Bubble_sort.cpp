#include <iostream>
using namespace std;
int main()
{
    int a[5] = {3, 9, 6, 1, 2};
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tam = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tam;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}