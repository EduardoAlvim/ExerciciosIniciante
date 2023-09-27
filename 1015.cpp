#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1,x2,y1,y2, distancia;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    distancia = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
    cout << fixed<<std::setprecision(4) <<distancia<< endl;
    return 0;
}
