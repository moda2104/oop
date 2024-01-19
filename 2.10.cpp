#include <iostream>
using namespace std;
int main(){
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    bool check = 0;
    if (nam > 0) 
    {
        switch (thang)
        {
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
            {
                if (1 <= ngay && ngay <= 31) check = 1;
                break;
            }
            case 4 : case 6 : case 9 : case 11 :
            {
                if (1 <= ngay && ngay <= 30) check = 1;
                break;
            }
            case 2 :
            {
                if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
                    if (1 <= ngay && ngay <= 29) check = 1;
                } else {
                    if (1 <= ngay && ngay <= 28) check = 1;
                }
                break;
            }
            default :
            {
                cout << "Thang khong hop le.\n";
                return 0;
            }
        }
    } else {
        cout << "Nam khong hop le.\n";
        return 0;
    }
    if (check == 1) cout << ngay << "/" << thang << "/" << nam << " la ngay hop le.\n";
    else cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.\n";
    return 0;
}