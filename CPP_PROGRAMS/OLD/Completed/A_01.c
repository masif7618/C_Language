#include<stdio.h>

/*1).
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even number");
    else
      printf("Odd number");
    return 0;
}*/

/* 2).
int main(){
    int n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}*/

/* 3).
int main(){
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d , b=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping a=%d , b=%d",a,b);
    return 0;
}*/

/* 4).
int lcm(int a, int b){
    int i;
    for(i=a>b?a:b ; i<=a*b ; i++){
        if(i%a==0 && i%b==0){
            break;
        }
    }
    return i;
}*/

/* 5).
int isPrime(int a){
    int i;
    for(int i=2;i<a;i++){
        if(a%i==0)
            return 0;
    }
    return 1;
}*/

int main(){
    int a;
    printf("Enter a numbers : ");
    scanf("%d",&a);
    printf("%d",isPrime(a));
}




