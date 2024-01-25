#include <iostream>

using namespace std;

int main()
{
    int anos=0, meses=0, dias=0;
    int valor;
    cin >> valor;
    // 3600 segundos em uma hora, 60 segundos em uma hora
    if(valor >= 365)
    {
        int aux;
        aux = valor / 365;
        valor = valor - (aux * 365);
        anos = aux;
    }
    if(valor >= 30)
    {
        int aux;
        aux = valor / 30;
        valor = valor - (aux * 30);
        meses = aux;
    }
    dias = valor;
    cout <<anos<<" ano(s)"<< endl;
    cout <<meses<<" mes(es)"<< endl;
    cout <<dias<<" dia(s)"<< endl;
    return 0;
}
