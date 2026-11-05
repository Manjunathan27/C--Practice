#include <iostream>
using namespace std;

int main()
{
    int adultfare = 450;
    int adult = 3;
    int childfare = 225;
    int children = 2;
    int totaladultfare = adultfare*adult;
    int totalchildfare = childfare*children;
    cout<<"The Total fare is " << totaladultfare+totalchildfare;
    return 0;
}