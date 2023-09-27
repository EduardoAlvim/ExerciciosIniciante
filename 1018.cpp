#include <bits/stdc++.h>

using namespace std;

int main()
{
    int imprime, valor;
    cin >> valor;
    cout <<valor<< endl;
    imprime = valor/100;
    cout <<imprime<< " nota(s) de R$ 100,00" << endl;
    valor= valor - (imprime*100);
    imprime = 0;
    imprime = valor/50;
    cout <<imprime<< " nota(s) de R$ 50,00" << endl;
    valor= valor - (imprime*50);
    imprime = 0;
    imprime = valor/20;
    cout <<imprime<< " nota(s) de R$ 20,00" << endl;
    valor= valor - (imprime*20);
    imprime = 0;
    imprime = valor/10;
    cout <<imprime<< " nota(s) de R$ 10,00" << endl;
    valor= valor - (imprime*10);
    imprime = 0;
    imprime = valor/5;
    cout <<imprime<< " nota(s) de R$ 5,00" << endl;
    valor= valor - (imprime*5);
    imprime = 0;
    imprime = valor/2;
    cout <<imprime<< " nota(s) de R$ 2,00" << endl;
    valor= valor - (imprime*2);
    imprime = 0;
    imprime = valor / 1;
    cout <<imprime<< " nota(s) de R$ 1,00" << endl;
    return 0;
}
