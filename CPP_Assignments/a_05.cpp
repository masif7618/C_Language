#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int add(int a, int b=0, int c=0){
    return a+b+c;
}

float area(float r){
    return 3.14*r*r;
}

int area(int l, int w){
    return l*w;
}

float area(float b, float h){
    float result = (1/2.0)*(b*h);
    return result;
}

int find_max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

float find_max(float a, float b){
    if(a>b)
        return a;
    else
        return b;
}

float add(float a,int b){
    return a+b;
}

float add(int a,float b){
    return a+b;
}

float add(float a,float b){
    return a+b;
}

int main(){
    cout<<add(5.0f,8.0f);
    return 0;
}