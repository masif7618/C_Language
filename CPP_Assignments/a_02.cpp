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
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
}

void area_of_circle(){
    float r,area;
    cout<<"Enter radius of circle : ";
    cin>>r;
    area = 3.14 * r * r;
    cout<<"Area of circle is "<<area<<" having radius "<<r;
}

void volume_of_cuboid(){
    int l,b,h,volume;
    cout<<"Enter length, breadth and height of cuboid : ";
    cin>>l>>b>>h;
    volume = l*b*h;
    cout<<"Voulume of cuboid is "<<volume;
}

int main(){
    volume_of_cuboid();
    return 0;
}