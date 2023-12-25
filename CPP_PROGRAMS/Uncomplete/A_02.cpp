#include<iostream>
using namespace std;

void p1(){
    cout<<"Hello Ali";
}

void p2(){
    cout<<"Hello";
    cout<<endl;
    cout<<"Ali";
}

void sum(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
}

void area(){
    float radius,area;
    cout<<"Enter radius of circle : ";
    cin>>radius;
    area = 3.14 * radius * radius;
    cout<<"Area of circle is "<<area;
}

void cuboidVolume(){
    int  l,w,h;
    cout<<"Enter length, width and height : ";
    cin>>l>>w>>h;
    cout<<"Volume of cuboid is "<<l*w*h;
}

int main(){
    cuboidVolume();
    cout<<endl;
    return 0;
}