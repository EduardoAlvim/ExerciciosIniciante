#include <bits/stdc++.h>

using namespace std;

int main()
{
    double raio, retorno;
    cin >> raio;
    retorno = (4.0/3) * 3.14159 * pow(raio, 3);
    cout << fixed<<std::setprecision(3) << "VOLUME = "<<retorno << endl;
    return 0;
}
