#include <iostream>
#include <cmath>

using namespace std;

int main() //function
{

    //The functions: pow,sqrt,round,ceil,floor,fmax,fmin
    cout<<pow(2,5)<<endl;
    cout<<sqrt(25.5)<<endl;
    cout<<round(4.1)<<endl;
    cout<<round(4.5)<<endl;
    cout<<round(4.6)<<endl;

    cout<<round(-4.1)<<endl;
    cout<<round(-4.5)<<endl;
    cout<<round(-4.6)<<endl;

    cout<<round(4.14)<<endl;
    cout<<round(4.18)<<endl;
    cout<<round(4.15)<<endl;
    cout<<round(4.54)<<endl;
    cout<<round(4.59)<<endl;
    cout<<round(4.55)<<endl;
    cout<<round(4.62)<<endl;
    cout<<round(4.68)<<endl;
    cout<<round(4.65)<<endl;

    cout<<"Ceil function rounds to the next highest whole number"<<endl;
    cout<<"If it is a negative number, it rounds to the highest negative number"<<endl;
    cout<<ceil(-4.1)<<endl;
    cout<<ceil(-4.5)<<endl;
    cout<<ceil(-4.6)<<endl;
    cout<<ceil(4.1)<<endl;
    cout<<ceil(4.5)<<endl;
    cout<<ceil(4.6)<<endl;

    cout<<"Floor function is opposite to the ceil function"<<endl;
    cout<<"Floor function rounds to the next lowest whole number"<<endl;
    cout<<"If it is a negative number, it rounds to the lowest negative number"<<endl;
    cout<<floor(-4.1)<<endl;
    cout<<floor(-4.5)<<endl;
    cout<<floor(-4.6)<<endl;
    cout<<floor(4.1)<<endl;
    cout<<floor(4.5)<<endl;
    cout<<floor(4.6)<<endl;

    cout<<"Returns maximum"<<endl;
    cout<<fmax(10,5)<<endl;
    cout<<fmax(10,10)<<endl;
    cout<<fmax(5,10)<<endl;

    cout<<"Returns minimum"<<endl;
    cout<<fmin(10,5)<<endl;
    cout<<fmin(10,10)<<endl;
    cout<<fmin(5,10)<<endl;

    return 0;
}

