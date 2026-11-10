#include<iostream>
using namespace std;
int main()
{
    int seconds = 7384;
    int hour = seconds/3600;
    int minutes = (seconds%3600)/60;
    int rem_seconds = seconds%60;
    cout<<"Hours : " << hour <<endl;
    cout<<"Minutes : " <<minutes <<endl;
    cout<<"seconds : " << rem_seconds;
    return 0;
}