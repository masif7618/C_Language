#include<stdio.h>

void input(int a[],int size){
    printf("Enter %d numbers : ",size);
    for(int i=0; i<size ; i++){
        scanf("%d",&a[i]);
    }
}

void print(int a[],int size){
   for(int i=0 ; i<size ; i++){
        printf("%d ",a[i]);
    }
}

int q1(int arr[],int size){
    input(arr,size);
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
} // Checked

int q2(int arr[],int size){
    input(arr,size);
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
} // Checked

void q3(int arr[],int size){
    int r,temp;
    input(arr,size);
    for(int r=1; r<size; r++){
        for(int i=0; i<size-r ; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    print(arr,size);
} // Checked

// Daught on rotation
void q4(int arr[],int size,int n,int d){
    // if d=-1 mean left and d==1 means right
    input(arr,size);
    int i,temp,j;
    if(d==1){
       for(j=1;j<=n;j++){
            temp = arr[size-1];
            for(i=size-2;i>=0;i--){
                arr[i+1] = arr[i];
            }
            arr[0] = temp;
        }
    }
    else{
        for(j=1;j<=n;j++){
            temp = arr[0];
            for(i=1;i<=size-1;i++){
                arr[i-1] = arr[i];
            }
            arr[size-1] = temp;
        }
    }
} // Checked

int q5(int size){
    int arr[size];
    input(arr,size);
    for(int i=0; i<=size-2; i++){
        if(arr[i]== arr[i+1]){
            return arr[i];
        }
    }
    return 0;
} // Checked

int main(){
    int arr[10],size=5;
    q4(arr,size,2,-1);
    print(arr,size);
    return 0;
}