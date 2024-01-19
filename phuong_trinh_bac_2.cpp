#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if ((b * b - 4 * a * c) < 0)
        cout << "PTVN";
    else if ((b * b - 4 * a * c) == 0)
        cout << "PT co nghiem kep: x1 = x2 = " << -b / (2 * a);
    else
    {
        cout << "PT co hai nghiem phan biet: \n";
        cout << "x1 = " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    }
    return 0;
}