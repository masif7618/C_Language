#include<stdio.h>

void input(int a[]){
    for(int i=0; i<10 ; i++){
        scanf("%d",&a[i]);
    }
}

void print(int a[]){
   for(int i=0 ; i<10 ; i++){
        printf("%d ",a[i]);
    }
}

void q1(){
    int arr[10],r,temp;
    printf("Enter 10 numbers : ");
    input(arr);
    for(int r=1; r<=9 ; r++){
        for(int i=0; i<=9-r ;i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    print(arr);
} // Checked

void q2(){
    int arr[10],temp;
    printf("Enter 10 numbers : ");
    input(arr);
    for(int r=1; r<=2; r++){
        for(int i=0;i<=9-r;i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    printf("second largest = %d", arr[8]);
} // Checked

void q3(){
    int arr[10],r,temp;
    printf("Enter 10 numbers : ");
    input(arr);
    for(int r=1; r<=2; r++){
        for(int i=0;i<=9-r;i++)
        if(arr[i] < arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("second smallest = %d", arr[8]);
} // Checked

void q4(){
    int arr[10],r,temp;
    printf("Enter 10 numbers : ");
    input(arr);
    for(int r=1; r<=9 ; r++){
        for(int i=0; i<=9-r ;i++){
            if(arr[i] < arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    print(arr);
} // Checked

void q5(){
    int arr[10],arr2[10];
    printf("Enter 10 numbers : ");
    input(arr);
    for(int i=0; i<10; i++){
        arr2[i] = arr[i];
    }
    print(arr2);
}  // Checked

int main(){
    q5();
    return 0;
}