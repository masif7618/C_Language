#include<stdio.h>

void swap_strings(char *s1, char *s2){
    
}

void sort(int *ptr, int size){
    int r,i,temp;
    for(r=0; r<size;r++){
        for(i=0;i<size-r-1;i++){
            if(ptr[i] > ptr[i+1]){
                temp = ptr[i];
                ptr[i] = ptr[i+1];
                ptr[i+1] = temp;
            }
        }
    }
}

void merge(int *arr, int size1, int *arr2, int size2, int *arr3){
    int i;
    for(i=0;i<size1;i++){
        arr3[i] = arr[i];
    }
    for(i=0;i<size2;i++){
        arr3[size1] = arr2[i];
        size1++;
    }
}

void p4(int *arr, int size){
    int i,temp;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

int main(){
    int a[10],size=10;
    printf("Enter %d numbers : ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    p4(a,size);
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}