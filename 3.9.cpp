#include <iostream>
using namespace std;
int main()
{
    long long n;
    int arr[10], i = 1;
    bool check = true;

    cin >> n;

    while (n)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }

    i--;
    for (int j = 1; j <= i; j++)
    {
        if (arr[j] != arr[i + 1 - j])
            check = false;
    }

    cout << boolalpha << check << endl;

    return 0;
}