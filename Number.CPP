#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() 
{
    int guess = rand()%100+1;
    int num = 0;
    int  a = 1;
    int time = 6;
    cout<<"ENTER A NUMBER BETWEEN 1 TO 100"<<endl;
    do{
    cout<<"Attempts Remaining"<<time+1;
    cin>>num;
    if(num==guess)
    {
        cout<<"The Number You guessed is correct"<<endl;
        a = 0;
    }
    else if(num<guess)
    {
        cout<<"Enter more higher number"<<endl;
    }
    else if(num>guess)
    {
        cout<<"Enter lower number"<<endl;
    }
    }
    while(a == 1 && time--);
    
   return 0;
}