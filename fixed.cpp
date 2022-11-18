#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){
    float num1, num2;

    cout<< showpoint;

    //It will show 2 digits after decimal
    cout<<fixed;
    cout<< setprecision(2);

    cout<< "Enter two numbers : ";
    cin>> num1;
    cout << endl;
    cin >> num2;
    cout << endl;

    float sum = num1 + num2;
    cout<< "The sum is  : " <<sum;
    cout << endl;

    float subtraction = num1 - num2;
    cout<< "The subtraction is  : " <<subtraction;
    cout<< endl;

    float multiplication = num1 * num2;
    cout<< "The product is  : " <<multiplication;
    cout<< endl;

    double division = (float) num1/num2; //type casting
    cout<< "The division is : " <<division;
    cout<< endl;

    getch();


}

