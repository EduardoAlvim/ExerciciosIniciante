#include <bits/stdc++.h>

using namespace std;

// NÃO RESOLVIDO

int main()
{
    int imprime=0;
    double valor;
    cin >> valor;
    cout <<"NOTAS:"<< endl;
    if(valor >= 100){
    imprime = valor/100;
    cout <<imprime<< " nota(s) de R$ 100.00" << endl;
    valor= valor - (imprime*100);
    imprime = 0;
    }
    else{
        cout <<"0 nota(s) de R$ 100.00" << endl;
    }
    if(valor >= 50){
    imprime = valor/50;
    cout <<imprime<< " nota(s) de R$ 50.00" << endl;
    valor= valor - (imprime*50);
    imprime = 0;
    }
    else{
        cout <<"0 nota(s) de R$ 50.00" << endl;
    }
    if(valor >= 20){
    imprime = valor/20;
    cout <<imprime<< " nota(s) de R$ 20.00" << endl;
    valor= valor - (imprime*20);
    imprime = 0;
    }
    else{
        cout <<"0 nota(s) de R$ 20.00" << endl;
    }
    if(valor >= 10){
    imprime = valor/10;
    cout <<imprime<< " nota(s) de R$ 10.00" << endl;
    valor= valor - (imprime*10);
    imprime = 0;
    }
    else{
        cout <<"0 nota(s) de R$ 10.00" << endl;
    }
    if(valor >= 5){
    imprime = valor/5;
    cout <<imprime<< " nota(s) de R$ 5.00" << endl;
    valor= valor - (imprime*5);
    imprime = 0;
    }
    else{
        cout <<"0 nota(s) de R$ 5.00" << endl;
    }
    if(valor >= 2){
    imprime = valor/2;
    cout <<imprime<< " nota(s) de R$ 2.00" << endl;
    valor= valor - (imprime*2);
    imprime = 0;
    }
    else{
        cout <<"0 nota(s) de R$ 2.00" << endl;
    }
    cout <<"MOEDAS:" << endl;
    if(valor >= 1){
    imprime = valor / 1;
    cout <<imprime<< " moeda(s) de R$ 1.00" << endl;
    valor= valor - imprime;
    imprime = 0;
    }
    else{
        cout <<"0 moeda(s) de R$ 1.00" << endl;
    }
    if(valor >= 0.50){
    imprime = valor / 0.50;
    cout <<imprime<< " moeda(s) de R$ 0.50" << endl;
    valor= valor - (imprime*0.50);
    imprime = 0;
    }
    else{
        cout <<"0 moeda(s) de R$ 0.50" << endl;
    }
    if(valor >= 0.25){
    imprime = valor / 0.25;
    cout <<imprime<< " moeda(s) de R$ 0.25" << endl;
    valor= valor - (imprime*0.25);
    imprime = 0;
    }
    else{
        cout <<"0 moeda(s) de R$ 0.25" << endl;
    }
    if(valor >= 0.10){
    imprime = valor / 0.10;
    cout <<imprime<< " moeda(s) de R$ 0.10" << endl;
    valor= valor - (imprime*0.10);
    imprime = 0;
    }
    else{
        cout <<"0 moeda(s) de R$ 0.10" << endl;
    }
    if(valor >= 0.05){
    imprime = valor / 0.05;
    cout <<imprime<< " moeda(s) de R$ 0.05" << endl;
    valor= valor - (imprime*0.05);
    imprime =0;
    }
    else{
        cout <<"0 moeda(s) de R$ 0.05" << endl;
    }
    if(valor >= 0.01){
    imprime = valor / 0.01;
    cout <<imprime<< " moeda(s) de R$ 0.01" << endl;
    valor= valor - (imprime*0.01);
    imprime =0;
    }
    else{
        cout <<"0 moeda(s) de R$ 0.01" << endl;
    }
    return 0;
}
