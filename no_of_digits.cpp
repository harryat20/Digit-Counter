#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the digit :"<<endl;
    cin>>n;;

    long int counter=0;
    while(n>0)
    {
        counter++;
        n=n/10;
    }

    cout<<"Number of digits = "<<counter;
    return 0;
}