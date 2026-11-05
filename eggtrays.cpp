#include <iostream>
using namespace std;
int main()
{
    int totaleggs= 275;
    int trayeggs = 30;
    int nooftraysfilled = totaleggs/trayeggs;
    int leftover= totaleggs%trayeggs;
    cout<<"nooftraysfilled : " << nooftraysfilled << endl;
    cout<<"leftover : " << leftover;
}