#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n=3;
    double r=1.0;
    cout<<"when n=1, r= "<<r<<endl;
    while (n<=10){
        r=r/( cos (3.1415926/(n)) );
        n++;
    }
        cout<<"when n=10, r= "<<r<<endl;
    while (n<=100){
        r=r/( cos (3.1415926/(n)) );
        n++;
    }
    cout<<"when n=100, r= "<<r<<endl;
    while (n<=1000){
        r=r/( cos (3.1415926/(n)));
        n++;
    }
    cout<<"when n=1000, r= "<<r<<endl;
    while (n<=10000){
        r=r/( cos (3.1415926/(n)));
        n++;
    }
    cout<<"when n=10000, r= "<<r<<endl;
    while (n<=100000){
        r=r/( cos (3.1415926/(n)) );
        n++;
    }
    cout<<"when n=100000, r= "<<r<<endl;
    while (n<=1000000){
        r=r/( cos (3.1415926/(n)) );
        n++;
    }
    cout<<"when n=1000000, r= "<<r<<endl;

}