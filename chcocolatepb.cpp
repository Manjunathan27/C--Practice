#include <iostream>
using namespace std;
int main()
{
    int tc = 50;
    int person = 7;
    int Totalobtained = tc / person;
    int leftover = tc % person;
    cout << "Total obtained: " << Totalobtained << endl;
    cout << "Leftover: " << leftover << endl;
    return 0;
}
