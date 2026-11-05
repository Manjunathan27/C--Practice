#include <iostream>
using namespace std;
int main()
{
    int minutes = 135;
    int hours = minutes/60;
    int remminutes = minutes%60;
    cout<<"hours :" << hours << endl;
    cout<<"remminutes : " << remminutes;
    return 0;
}