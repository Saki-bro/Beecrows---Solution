#include<iostream>
using namespace std;
int main()
{
    int a,b,s, maior;
    cin>> a>> b>>s;
    maior=(a+b+abs(a-b))/2;
    int maiorAB=(maior+s+abs(maior-s))/2;
    cout<< maiorAB << " eh o maior\n";
    return 0;
}
