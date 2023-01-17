#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    double A,B;
    cin>> name;
    cin>> A;
    cin>> B;
    double total;
    total=(A+(B*15)/100);
    cout<< "TOTAL = R$ "<<fixed<< setprecision(2)<< total<< "\n";
    return 0;
}
