#include<iostream>
using namespace std;
int main()
{
    int Existing_litre = 40;
    int add_litre = 12 ;
    int time = 10;
    int consumed_litre = 35;
    int leftover= Existing_litre - consumed_litre;
    cout<< "The Total Litre is : " << leftover+(add_litre*time);
}