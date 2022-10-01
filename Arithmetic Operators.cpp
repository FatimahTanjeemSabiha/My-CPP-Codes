#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num1, num2;

    cout<< "Enter two numbers : ";
    cin>> num1;
    cout << endl;
    cin >> num2;
    cout << endl;

    int sum = num1 + num2;
    cout<< "The sum is  : " <<sum;
    cout << endl;

    int subtraction = num1 - num2;
    cout<< "The subtraction is  : " <<subtraction;
    cout<< endl;

    int multiplication = num1 * num2;
    cout<< "The product is  : " <<multiplication;
    cout<< endl;

    double division = (float) num1/num2; //type casting
    cout<< "The division is : " <<division;
    cout<< endl;

    int remainder = num1 % num2;
    cout<< "The remainder is    : " <<remainder;
    cout<< endl;

    getch();


}

