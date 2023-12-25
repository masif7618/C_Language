#include<iostream>
using namespace std;

void p1(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"Average is "<<(a+b+c)/3.0;
}

void square(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Square of "<<n<<" is "<<n*n;
}

void swap(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"\nBefore swapping a = "<<a<<" b = "<<b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"\n After swapping a = "<<a<<" b = "<<b;
}

void max(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    if(a>b)
        cout<<a;
    else
        cout<<b;
}

void p5(){
    int arr[10],sum=0;
    cout<<"Enter 10 numbers : ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum;
}

int main(){
    p5();
    cout<<endl;
    return 0;
}