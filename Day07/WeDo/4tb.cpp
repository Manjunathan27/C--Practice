#include<iostream>
using namespace std;
int main(){
    int number,total=0;
    cout<<"Enter the number : ";
    cin>>number;
    for(int i=1; i<=number;i++)
    {
        total = total + (i*4);
        cout<<(i*4)<<endl;
    }
    cout<<"Total = "<< total;
}