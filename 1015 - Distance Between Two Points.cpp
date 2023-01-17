#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x1,y1,x2,y2, grade;
    cin>> x1>> y1;
    cin>> x2>>y2;

    grade= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<fixed<< setprecision(4)<< grade  <<"\n";

    return 0;


}
