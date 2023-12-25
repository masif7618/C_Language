#include<stdio.h>

void evenOdd(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even number");
    else
        printf("Odd Number");
}

void fact(){
    int n,i,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial is %d",fact);
}

void swap(){
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping a = %d, b = %d",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping a = %d, b = %d",a,b);
}

void lcm(){
    int a,b,i;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    for(i=a>b?a:b;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            printf("LCM is %d",i);
            break;
        }
    }
}

void isPrime(){
    int n,flag=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<2){
        printf("Not prime");
        return ;
    }
    for(int i=2; i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Prime");
    else
        printf("Not prime");
}

int main(){
    isPrime();
    return 0;
}