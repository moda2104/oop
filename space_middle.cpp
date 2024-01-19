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
        if (a[i] == ' ' && a[i + 1] == ' ')
        {
            a.erase(i, 1);
            i--;
        }
    } 
    cout << "Ket qua: " << a;
    return 0;
}