#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tempo, velocidade;
    double litros, distancia;
    cin >> tempo;
    cin >> velocidade;
    distancia= tempo*velocidade;
    litros = distancia/12;
    cout << fixed<<std::setprecision(3) <<litros<< endl;
    return 0;
}
