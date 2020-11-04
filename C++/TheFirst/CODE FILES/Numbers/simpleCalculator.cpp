#include <iostream>
#include <cmath>

using namespace std;

int main() //function
{
    int a,b;
    cout<<"Enter two integer numbers: "<<endl;
    cin>>a>>b;

    cout<<a+b<<endl; //try inputing float numbers
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl; //observe: give the inputs as 3 and 6. 3%6==3. You don't calculate with the steps: 3/6= 6*0.5=3 (don't go to decimal types while dividing integers)


    float c,d;
    cout<<"Enter two float numbers: "<<endl;
    cin>>c>>d;

    cout<<c+d<<endl;
    cout<<c-d<<endl;
    cout<<c*d<<endl;
    cout<<c/d<<endl;
    //cout<<c%d<<endl; RESULTS IN AN ERROR


    return 0;
}

