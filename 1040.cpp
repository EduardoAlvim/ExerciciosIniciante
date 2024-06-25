#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float n1,n2,n3,n4,media;
    cin>>n1;
    n1 = n1*2;
    cin>>n2;
    n2 = n2*3;
    cin>>n3;
    n3 =n3*4;
    cin>>n4;
    media = (n1+n2+n3+n4) / 10;
    cout << fixed << std::setprecision(1) << "Media: " << media << endl;
    if(media >= 7.0){
        cout<< "Aluno aprovado." << endl;
    }
    else if(media < 5.0){
        cout<< "Aluno reprovado." << endl;
    }
    else if(media >= 5.0 && media <= 6.9){
        cout<< "Aluno em exame." << endl;
        float exame;
        cin>> exame;
        cout << fixed << std::setprecision(1) << "Nota do exame: " << exame << endl;
        media = (media+exame) / 2;
        if(media >= 5.0){
            cout<< "Aluno aprovado." << endl;
        }
        else if(media <= 4.9){
            cout<< "Aluno reprovado." << endl;
        }
        cout << fixed << std::setprecision(1) << "Media final: " << media << endl;
    }
    return 0;
}
