#include<iostream>
using namespace std;

void sort_number(int a[], int size, bool sort_order=true){
    int r,i,temp;
    if(sort_order){
        for(r=1;r<size;r++){
            for(i=0;i<size-r;i++){
                if(a[i] > a[i+1]){
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                }
            }
        }
    }
    else{
        for(r=1;r<size;r++){
            for(i=0;i<size-r;i++){
                if(a[i] < a[i+1]){
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                }
            }
        }
    }
}

void sort_string(char str[], int size, bool sort_order=true){
    int r,i,temp,l;
    for(l=0;str[l];l++);
    str[l-1]='\0';
    l=l-1;
    if(sort_order){
        for(r=1;r<l;r++){
            for(i=0;i<l-r;i++){
                if(str[i] > str[i+1]){
                    temp = str[i];
                    str[i] = str[i+1];
                    str[i+1] = temp;
                }
            }
        }
    }
    else{
        for(r=1;r<l;r++){
            for(i=0;i<l-r;i++){
                if(str[i] < str[i+1]){
                    temp = str[i];
                    str[i] = str[i+1];
                    str[i+1] = temp;
                }
            }
        }
    }
}

int main(){
    char a[50];
    cout<<"Enter the string : ";
    fgets(a,50,stdin);
    sort_string(a,10,false);
    // for(int i=0;i<10;i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<a;
    return 0;
}