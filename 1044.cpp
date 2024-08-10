#include <iostream>

using namespace std;

int main()
{
    int A, B, i=0, resultado=1, flag=1;
    cin >> A;
    cin >> B;
    if(B > A)
    {
        while(resultado <= B)
        {
            resultado = A * i;
            if(resultado == B)
            {
                flag=0;
            }
            i++;
        }
    }
    else
    {
        while(resultado <= A)
        {
            resultado = B * i;
            if(resultado == A)
            {
                flag=0;
            }
            i++;
        }
    }
    if(flag == 1)
    {
        cout << "Nao sao Multiplos" << endl;
    }
    else
    {
        cout << "Sao Multiplos" << endl;
    }
    return 0;
}
