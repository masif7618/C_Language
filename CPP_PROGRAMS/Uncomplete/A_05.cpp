#include<iostream>
using namespace std;

void swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int add(int a, int b, int c=0){
   return a+b+c;
}

float area(float radius){
    return 3.14*radius*radius;
}

int area(int l, int b){
    return l*b;
}

float area(float b, float h){
    return 1/2.0*(b*h);
}

int max(int a, int b){
    return a>b?a:b;
}

int max(int a, float b){
    return a>b?a:b;
}

int max(float a, int b){
    return a>b?a:b;
}

int max(float a, float b){
    return a>b?a:b;
}

int add(int a, int b){
    return a+b;
}

int add(int a, float b){
    return a+b;
}

int add(float a, int b){
    return a+b;
}

int add(float a, float b){
    return a+b;
}

int main(){
    cout<<add(4.0f,2.0f);
    cout<<endl;
    return 0;
}