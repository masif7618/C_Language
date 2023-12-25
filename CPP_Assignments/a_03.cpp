#include<iostream>
using namespace std;

void average(){
    int a,b,c,avg;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    avg = (a+b+c)/3;
    cout<<"Average of "<<a<<" "<<b<<" and "<<c<<" is "<<avg;
}

void square(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Square of "<<n<<" is "<<n*n;
}

void swap(){
    int a,b;
    cout<<"Enter a two numbers :  ";
    cin>>a>>b;
    cout<<"Before swapping a = "<<a<<" b = "<<b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"\nAfter swapping a = "<<a<<" b = "<<b;
}

void find_max(){
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    if(a>b)
        cout<<a;
    else
        cout<<b;
}

void p5(){
    int a[10],i,sum=0;
    cout<<"Enter 10 number : ";
    for(i=0;i<=9;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"Sum is "<<sum;
}

int main(){
    p5();
    return 0;
}