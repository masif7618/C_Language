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


void q1(int arr[],int index1, int index2,int size){
    input(arr,size);
    printf("Before Swapping\n");
    print(arr,size);
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
    printf("\nAfter swapping");
    print(arr,size);
} // Checked

void sort(int arr[], int size){
    int r,temp,i;
    for(r=1;r<size;r++){
        for(i=0;i<size-r;i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

int q2(int arr[],int size){
    input(arr,size);
    sort(arr,size);
    int i=0,j=1,count=0;
    while(j<size){
        while(arr[i] == arr[j]){
            if(i+1==j)
                count++;
            j++;
            if(j==size)
                break;
        }
        i = j;
        j = j+1;
    }
    return count;  
} // Checked

void q3(int arr[], int size){
    input(arr,size);
    sort(arr,size);
    int i=0,j=1;
    while(i<size){
        printf("%d ",arr[i]);
        if(i==size-1)
            break;
        while(arr[i] == arr[j]){
            j++;
            if(j==size)
                break;
        }
        i = j;
        j = j+1;
    }
} // Checked

void q4(int a[],int b[],int size,int c[]){
    int i,j,k=5;
    i=size-1;
    j=size-1;
    k=2*size-1;
    for(k=2*size-1; i>=0 && j>=0 ; k--){
        if(a[i] > b[j]){
            c[k] = a[i];
            i--; 
        }
        else{
            c[k] = b[j];
            j--;
        }
    }

    while(i>=0){
        c[k] = a[i];
        i--;
        k--;
    }   
    while(j>=0){
        c[k] = b[j];
        j--;
        k--;
    }
    
    print(c,10);
} // Checked

void freq(int arr[],int size){
    input(arr,size);
    sort(arr,size);
    int i=0,j=1,count=0;
    while(i<size){
        printf("\n%d - ",arr[i]);
        count=1;
        if(i==size-1){
            printf("%d",count);
            break;
        }
        while(arr[i] == arr[j]){
            count++;
            j++;
            if(j==size)
                break;
        }
        printf("%d",count);
        i = j;
        j = j+1;
    }
} // Checked

int main(){
    int a[10];
    freq(a, 10);
    return 0;
}
