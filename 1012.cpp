#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C;
    double tri, c, tra, q, r;
    cin >> A;
    cin >> B;
    cin >> C;
    tri = (A * C) / 2;
    c = 3.14159 * pow(C, 2);
    tra = (A + B) * (C / 2);
    q = B*B;
    r = A*B;
    cout << fixed<<std::setprecision(3) << "TRIANGULO: "<<tri << endl;
    cout << fixed<<std::setprecision(3) << "CIRCULO: "<<c << endl;
    cout << fixed<<std::setprecision(3) << "TRAPEZIO: "<<tra << endl;
    cout << fixed<<std::setprecision(3) << "QUADRADO: "<<q << endl;
    cout << fixed<<std::setprecision(3) << "RETANGULO: "<<r << endl;
    return 0;
}
