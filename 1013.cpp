#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numeros[3], maior;
    for(int i=0; i<3; i++)
    {
        cin >> numeros[i];
        if(i == 0)
        {
            maior = numeros[i];
        }
        else
        {
            if(numeros[i]>maior)
            {
                maior = numeros[i];
            }
        }
    }
    cout <<maior<< " eh o maior" << endl;
    return 0;
}
