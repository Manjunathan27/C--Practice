 //fibbonaci series
 #include<iostream>
 using namespace std;
 int main()
 {
    int Fib,FP=1,SP=0;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      if(i==1)
      {
        cout<<SP<<endl;}
      if(i==2)
      {
      cout<<FP<<endl;}
      Fib=FP+SP;
      SP=FP;
      FP=Fib;
      
      cout<<Fib<<endl;
    }
 }