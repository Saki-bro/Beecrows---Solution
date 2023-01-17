#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C, pi=3.14159;
    cin>> A>>B>>C;
    double triangel,circle,trapiziam, quadar, reqtengular;
    triangel= (A*C)/2;
    circle= pi*(C*C);
    trapiziam= ((A+B)/2)*C;
    quadar= B*B;
    reqtengular=A*B;
    cout<< "TRIANGULO: "<<fixed<< setprecision(3)<<  triangel<<"\n";
    cout<< "CIRCULO: "<<fixed<< setprecision(3)<< circle << "\n";
    cout<< "TRAPEZIO: "<<fixed<< setprecision(3)<<  trapiziam<<"\n";
    cout<< "QUADRADO: "<<fixed<< setprecision(3)<<  quadar<<"\n";
    cout<< "RETANGULO: "<<fixed<< setprecision(3)<<  reqtengular<<"\n";
    return 0;
}
