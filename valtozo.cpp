#include <iostream>

using namespace std;

int main(){

    int a=54;
    int b=2014;

    cout<<"a:"<<a<<" b:"<<b<<endl;

    a=a*b;
    b=a/b;
    a=a/b;

    cout<<"a:"<<a<<" b:"<<b<<endl;

    a=a*b;
    b=a/b;
    a=a/b;

    cout<<"a:"<<a<<" b:"<<b<<endl;

    return 0;
}