#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    double x,y;
    double z;
    cin>> x>> y;
    z=(x*y)/12;
    cout<< fixed<< setprecision(3)<<z << "\n";

    return 0;
}
