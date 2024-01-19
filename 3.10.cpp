#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, count = 0;
    bool check1, check2;

    cin >> n;

    for (int i = 3; i < n; i++)
    {
        check1 = true;
        check2 = true;

        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
                check1 = false; // ktr i co phai la so nguyen to?

        if (check1 == true) // neu dung thi tiep tuc kiem tra so cach 2 dvi
            for (int j = 2; j <= sqrt(i + 2); j++)
                if ((i + 2) % j == 0)
                    check2 = false;

        if (check1 == true && check2 == true && i < n && (i + 2) < n)
        {
            cout << i << ", " << i + 2 << endl;
            count++;
        }
    }
    cout << "Tong: " << count << " cap so sinh doi < " << n;

    return 0;
}
