#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, media;
    cin >> A;
    cin >> B;
    cin >> C;
    A = A * 2;
    B = B * 3;
    C = C * 5;
    media = (A + B +C) / 10;
    cout << fixed<<std::setprecision(1) << "MEDIA = "<<media << endl;
    return 0;
}
