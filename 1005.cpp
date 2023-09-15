#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, media;
    cin >> a;
    cin >> b;
    a = a * 3.5;
    b = b * 7.5;
    media =  (a + b) / 11;
    cout << fixed << std::setprecision(5) << "MEDIA = "<<media << endl;
    return 0;
}
