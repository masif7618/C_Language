#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void search_all_occurrences(char *str, char ch, int *arr){
    for(int i=0;str[i];i++){
        if(str[i]==ch){
            arr[i]++;
        }
    }
}

void uppercase(char *str){
    for(int i=0;str[i];i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
}

void lowercase(char *str){
    for(int i=0;str[i];i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
}

void extract_string(char *str, int start_index, int end_index, char *result){
    int i,j=0;
    for(i=start_index;i<end_index;i++,j++){
        result[j] =str[i];
    }
}

int main(){
    char str[50],ch,result[20];
    int arr[50] = {0};
    printf("Enter a string : ");
    fgets(str,50,stdin);
    // printf("Enter a character : ");
    // fflush(stdin);
    // scanf("%c",&ch);
    extract_string(str,4,11,result);
    printf("%s",result);
    return 0;
}