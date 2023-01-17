#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R, result;
    double pi=3.14159;
    cin>> R;

    result=(4/3.0)*pi* (R*R*R) ;
    cout<< "VOLUME = "<< fixed<< setprecision(3)<< result<< "\n";
    return 0;
}
