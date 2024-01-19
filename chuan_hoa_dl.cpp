#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cout << "Nhap chuoi: ";
    getline(cin, a);

    while (a[0] == ' ')
    {
        a.erase(0, 1);
    }

    while (a[a.length() - 1] == ' ')
    {
        a.erase(a.length() - 1, 1);
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ' && a[i + 1] == ' ')
        {
            a.erase(i, 1);
            i--;
        }
    }

    if ('a' <= a[0] && a[0] <= 'z')
        a[0] -= 32;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ' && 'a' <= a[i + 1] && a[i + 1] <= 'z')
            a[i + 1] -= 32;
        if (a[i] != ' ' && 'A' <= a[i + 1] && a[i + 1] <= 'Z')
            a[i + 1] += 32;
    }

    cout << "Ket qua: " << a;

    return 0;
}