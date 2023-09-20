#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cod1, cod2, quant1, quant2;
    double val1, val2, valf;
    cin >> cod1;
    cin >> quant1;
    cin >> val1;
    cin >> cod2;
    cin >> quant2;
    cin >> val2;
    valf = (val1 * quant1) + (val2 * quant2);
    cout << fixed<<std::setprecision(2) << "VALOR A PAGAR: R$ "<<valf << endl;
    return 0;
}
