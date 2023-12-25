#include<stdio.h>
#include<stdlib.h>

char* inputString(){
    char *p=NULL,*q=NULL,ch;
    int size=1,i;
    while(1){
        ch=getchar();
        p=(char*)malloc(size);
        if(ch==10)
            break;
        if(q){
            for(i=0;i<size;i++)
                *(p+i) = *(q+i);
            *(p+i-1)=ch;
            free(q);
        }
        else
            *p=ch;
        q=(char*)malloc(size+1);
        for(i=0;i<size;i++)
            *(q+i) = *(p+i);
        *(q+i) = '\0';
        free(p);
        size++;
    }
    return q;
} // Checked

void f2(){
    int *arr,i,n,s=0;
    float avg;
    printf("How many values you want to enter : ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    printf("Enter %d values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    for(i=0;i<n;i++)
        s=s+arr[i];
    avg = (float)s/n;
    printf("Average is %f",avg);
    free(arr);
} //Checked

void f3(){
     int *arr,i,n,s=0;
    printf("How many values you want to enter : ");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    printf("Enter %d values : ",n);
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    for(i=0;i<n;i++)
        s=s+arr[i];
    printf("Sum is %d",s);
    free(arr);
} //Checked

int* merge(int A[], int n1, int B[], int n2){
    int *arr,i,j,k;
    arr=(int*)malloc(n1+n2*sizeof(int));
    for(i=0,j=0,k=0;i<n1 && j< n2;k++){
        if(A[i] < B[j]){
            arr[k]=A[i];
            i++;
        }
        else{
            arr[k]=B[j];
            j++;
        }
    }
    while(i<n1){
            arr[k]=A[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k]=B[j];
            j++;
            k++;
        }
    return arr;
} // Checked

int main(){
    int a[]={3,7,10,18,21};
    int b[]={9,11,15};
    int *c,i;
    c=merge(a,5,b,3);
    for(i=0;i<8;i++)
        printf("%d ",c[i]);
    return 0;
}

