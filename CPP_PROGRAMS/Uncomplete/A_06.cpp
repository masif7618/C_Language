#include<iostream>
using namespace std;

void display(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[],int size, bool order=true){
    int i,r,temp;
    if(order){
        for(r=0;r<size-1;r++){
            for(i=0;i<size-r-1;i++){
                if(arr[i]>arr[i+1]){
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
            }
        }
    }
    }
    else{
        for(r=0;r<size-1;r++){
            for(i=0;i<size-r-1;i++){
                if(arr[i]<arr[i+1]){
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                 }
             }
        }
    }
}

int main(){
    
    cout<<endl;
    return 0;
}