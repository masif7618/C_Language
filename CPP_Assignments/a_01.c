#include<stdio.h>

void even_odd(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n&1)
        printf("Odd number");
    else
        printf("Even number");
}

void factorial(){
    int i,n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
        fact = fact * i;
    printf("Factorial of %d is %d",n,fact);
}

void swap(){
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swapping a = %d b = %d",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping a = %d b = %d",a,b);
}

void lcm(){
    int a,b,i;
    printf("Enter two numbers : ");
    scanf("%d%D",&a,&b);
    for(i=a>b?a:b;i<=a*b;i++)
        if(i%a==0 && i%b==0)
            break;
    printf("LCM of %d and %d is %d",a,b,i);
}

void isPrime(){
    int n,prime=1,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            prime=0;
    }
    if(prime)
        printf("Prime Number");
    else    
        printf("Not a prime");
}

int main(){
    isPrime();
    return 0;
}