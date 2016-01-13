#include "eecs230.h"

////
//// Lab 2 programs
////
//
//int illegalStatements() {
//    /* Start here! */
//    //int double = 0;
//    //double char = 2.5;
//    //char mychar = 'd'; mychar += 12;
//    //unsigned int a = -1;
//    //int pi = 3.14;
//    //short num = 1e9;
//    //string mystring = 5;
//    return 0;
//}

using namespace std;

void odd_or_even(int num)
{
    if(num%2 == 0) //even
        cout<< num << " is even\n";
    else  //odd
        cout << num<< " is odd\n";

}

void calc()
{
    string operation;
    double first;
    double second;

    cout<<"What Mathematical Operation?\n";
    cin>> operation;
    cout<<"What is your first number?\n";
    cin>>first;
    cout<<"What is your second number?\n";
    cin>>second;

    if(operation == "+")
        cout<< "Your new number is "<<(first + second);
    if(operation == "-")
        cout<< "Your new number is "<<(first - second);
    if(operation == "*")
        cout<< "Your new number is "<<(first * second);
    if(operation == "/")
        cout<< "Your new number is "<<(first/second);
}

int main() {
//    odd_or_even(4);
//    odd_or_even(5);
//
//    return 0;
    calc();
}

