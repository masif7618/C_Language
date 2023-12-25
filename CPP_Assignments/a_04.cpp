#include<iostream>
using namespace std;

void prime_numbers_between_two_numbers(){
    int a,b,i,j,flag=1;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    for(i=a+1;i<b;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag)
                cout<<" "<<i;
        flag=1;
    }
}

int find_highest_digit(){
    int n,r,highestDigit=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        r=n%10;
        if(r>highestDigit)
            highestDigit=r;
        n=n/10;
    }
    return highestDigit;
}

int pow(int n, int power){
    int i,sum=1;
    for(i=1;i<=power;i++){
        sum = sum * n;
    }
    return sum;
}

int in_fibonacci_series(int n){
    int i=0,next=0,a=-1,b=1;
    while(next<=n){
        next = a+b;
        if(n==next)
            return 1;
        a = b;
        b = next;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<in_fibonacci_series(n);
    return 0;
}