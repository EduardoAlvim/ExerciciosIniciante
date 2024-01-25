#include <iostream>

using namespace std;

int main()
{
    int horas=0, minutos=0, segundos=0;
    int valor;
    cin >> valor;
    // 3600 segundos em uma hora, 60 segundos em uma hora
    if(valor >= 3600)
    {
        int aux;
        aux = valor / 3600;
        valor = valor - (aux * 3600);
        horas = aux;
    }
    if(valor >= 60)
    {
        int aux;
        aux = valor / 60;
        valor = valor - (aux * 60);
        minutos = aux;
    }
    segundos = valor;
    cout <<horas<< ":" <<minutos<< ":"<<segundos<< endl;
    return 0;
}
