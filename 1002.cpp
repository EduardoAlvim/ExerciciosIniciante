#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double area, n, raio;
    n = 3.14159;
    cin >> raio;
    area = n * raio*raio;
    //cout << "A="<<area << endl;
    cout << fixed << std::setprecision(4) << "A=" << area << endl;
    return 0;
}
