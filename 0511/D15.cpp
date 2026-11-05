#include<iostream>
using namespace std;
int main()
{
    int age_limit = 18;
    bool personhaslicense = true;
     if((age_limit>=18) || personhaslicense)
     {
        cout<<"No problem the person can drive";
     }
     else
     {
        cout<<" the person not able to drive";
     }
     return 0;
}