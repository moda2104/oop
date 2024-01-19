#include <iostream>
using namespace std;
int main(){
    int i = 3,count = 2;
    while (count != 10002)
    {
        bool check = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) check = false;
        }
        if (check == true) count++;
        if (count == 10002) cout << i;
        i++;
    }
    return 0;
}