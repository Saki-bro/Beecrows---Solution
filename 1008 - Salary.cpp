#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int A,B;
    double salary;
    cin>> A;
    cin>> B;
    cin>> salary;
    double SALARY;
    SALARY =B*salary;
    cout<< "NUMBER = " << A << "\n" ;
    cout<< "SALARY = U$ " << fixed<< setprecision(2)<< SALARY<< "\n";
   return 0;
}
