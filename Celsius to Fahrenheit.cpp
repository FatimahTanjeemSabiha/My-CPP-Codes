#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double f,c;

    cout << "Enter celsius: ";
    cin>> c;

    f = 1.8 * c + 32;

    cout<< "Farenheit = " << f;

    getch();
}
