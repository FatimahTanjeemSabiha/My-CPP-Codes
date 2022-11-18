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
    cout<<setw(25)<<"The sum is  : " <<sum;
    cout << endl;

    float subtraction = num1 - num2;
    cout<<setw(25)<< "The subtraction is  : " <<subtraction;
    cout<< endl;

    float multiplication = num1 * num2;
    cout<<setw(25)<< "The product is  : " <<multiplication;
    cout<< endl;

    double division = (float) num1/num2; //type casting
    cout<<setw(25)<< "The division is : " <<division;
    cout<< endl;

    getch();


}

