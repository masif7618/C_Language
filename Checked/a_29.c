#include<stdio.h>


void q1(){
    int arr[10],sum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10 ; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum is %d",sum);
    printf("\n");
    return 0;
} // Checked

void q2(){
    int arr[10],sum=0;
    float avg;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10 ; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    avg = sum/10.0;
    printf("Average is %f",avg);
    return 0;
} // Checked

void q3(){
    int arr[10],evenSum=0,oddSum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10 ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            evenSum = evenSum + arr[i];
        else
            oddSum = oddSum + arr[i];
    }
    printf("Sum of even numbers is %d\n",evenSum);
    printf("Sum of odd numbers is %d",oddSum);
    printf("\n");
    return 0;
} // Checked

void q4(){
    int arr[10],max;
    float avg;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10 ; i++)
        scanf("%d",&arr[i]);
    max = arr[0];
    for(int i=1; i<10 ; i++){
         if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("Greatest value is %d",max);
    printf("\n");
    return 0;
} // Checked

void q5(){
    int arr[10],min;
    float avg;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10 ; i++)
        scanf("%d",&arr[i]);
    min = arr[0];
    for(int i=1; i<10 ; i++){
         if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("Smallest value is %d",min);
    printf("\n");
    return 0;
} // Checked

int main(){
    q5();
    return 0;
}