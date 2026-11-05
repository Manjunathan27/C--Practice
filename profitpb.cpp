#include <iostream>
using namespace std;
int main()
{
    int note= 40;
    int bp = 18;
    int sp = 25;
    int Boughtprice = note*bp;
    int Sellingprice = note*sp;
    cout<<"Boughtprice: " <<Boughtprice<<endl;
    cout<<"Sellingprice: " <<Sellingprice<<endl;
    cout<<"Profit : " <<Sellingprice-Boughtprice<<endl;
}