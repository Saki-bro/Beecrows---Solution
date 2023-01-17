#include<iostream>
using namespace std;
int main()
{
    int sec, minu, hour;

    cin>> sec;

    hour= sec/3600;
    sec= sec - (hour*3600);

    minu= sec/60;
    sec= sec - (minu*60);



    cout << hour<< ":"<<minu<< ":"<<sec<< "\n";
    return 0;
}
