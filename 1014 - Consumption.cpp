#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    double b,total;
    cin>> a>> b;
    total=a/b;
    cout<<fixed<< setprecision(3)<< total<< " km/l" << "\n" ;
    return 0;
}
