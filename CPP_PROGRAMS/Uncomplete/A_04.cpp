#include<iostream>
using namespace std;

int isPrime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

void primeBetweenTwoNumbers(int start, int end){
    for(int i=start+1; i<end;i++){
        if(isPrime(i))
            cout<<" "<<i;
    }
}

void p2(int n){
    int num,highestDigit=0,rem;
    num = n;
    while(num){
        rem = num % 10;
        if(rem > highestDigit)
            highestDigit = rem;
        num = num / 10;
    }
    cout<<"Highest digit in "<<n<<" is "<<highestDigit;
}

int power(int n, int pow){
    int result = 1;
    for(int i=1;i<=pow;i++){
        result = result * n;
    }
    return result;
}

void pascal(){
    
}

int inFibonacciSeries(int n){
    int a=1,b=1,next=0;
    if(n==0 || n==1){
        return 1;
    }
    while(next<n){
        next = a+b;
        if(next==n){
           return 1;
        }
        a = b;
        b = next;
    }
    return 0;
}

int main(){
    cout<<power(5,7);
    cout<<endl;
    return 0;
}