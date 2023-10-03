#include<iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    cout<<"Enter an Operation:";
    cin>>operation;
    cout<<"Enter two operands:";
    cin>>num1>>num2;
    
    switch(operation)
    {
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        default:
            cout<<"Enter! operator is not correct";
            break;


    }
    return 0;


    }

    