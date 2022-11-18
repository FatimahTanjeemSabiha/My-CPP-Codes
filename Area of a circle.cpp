#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double radius,area;

    cout<< "Enter radius : ";
    cin>> radius;

    area = 3.141 * radius * radius;

    cout<< "Area of the circle = " <<area;

    getch();
}

