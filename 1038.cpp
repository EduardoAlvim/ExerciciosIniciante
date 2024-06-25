#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int cod, quant;
    float result;
    cin>> cod;
    cin>> quant;
    if (cod == 1){
        result = quant * 4;
        cout << fixed << std::setprecision(2) << "Total: R$ " << result << endl;
    }
    else if (cod == 2){
        result = quant * 4.5;
        cout << fixed << std::setprecision(2) << "Total: R$ " << result << endl;
    }
    else if (cod == 3){
        result = quant * 5;
        cout << fixed << std::setprecision(2) << "Total: R$ " << result << endl;
    }
    else if (cod == 4){
        result = quant * 2;
        cout << fixed << std::setprecision(2) << "Total: R$ " << result << endl;
    }
    else if (cod == 5){
        result = quant * 1.5;
        cout << fixed << std::setprecision(2) << "Total: R$ " << result << endl;
    }
    return 0;
}
