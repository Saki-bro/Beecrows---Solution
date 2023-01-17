#include<iostream>
using namespace std;
int main()
{
    int n, number;
    cin>> n;

    cout<< n << "\n";
    cout<< n/100 << " nota(s) de R$ 100,00\n";
    number = (n%100);
    cout<< number/50 << " nota(s) de R$ 50,00\n";
    number = (number%50);
    cout<< number/20 << " nota(s) de R$ 20,00\n";
    number =(number%20);
    cout<< number/10 << " nota(s) de R$ 10,00\n";
    number = (number%10);
    cout<< number/5 << " nota(s) de R$ 5,00\n";
    number= (number%5) ;
    cout<< number/2 << " nota(s) de R$ 2,00\n";
    number= (number%2);
    cout<< number/1 << " nota(s) de R$ 1,00\n";
    return 0;
}
