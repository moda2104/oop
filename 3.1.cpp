#include <iostream>
using namespace std;

int main()
{
    int n;
    int a1 = 1, a2 = 1, next, count = 2;
    cin >> n;
    if (1 <= n && n <= 30)
    {
        if (n == 1 || n == 2)
            cout << 1;
        else
        {
            while (count != n)
            {
                next = a1 + a2;
                a1 = a2;
                a2 = next;
                count++;
            }
            cout << next << endl;
        }
    }
    else
        cout << "So " << n << " khong nam trong khoang [1,30].\n";

    return 0;
}