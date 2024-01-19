#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    bool check;
    cout << "Nhap chuoi: ";
    getline(cin, a);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[0] != ' ' && 'a' <= a[0] && a[0] <= 'z')
            a[0] -= 32;
        if (a[i] == ' ' && 'a' <= a[i + 1] && a[i + 1] <= 'z')
            a[i + 1] -= 32;
        if ('A' <= a[i] && a[i] <= 'Z' && a[i - 1] != ' ')
            a[i] += 32;
        
    }
    cout << "Ket qua: " << a;
    return 0;
}