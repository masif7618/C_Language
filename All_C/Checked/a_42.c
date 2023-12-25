#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
} // Checked

void search_all_occurrences(char *str, char ch, int *arr){
    int i,j;
    for(i=0,j=0;str[i];i++){
        if(str[i]==ch){
            arr[j]=i;
            j++;
        }
    }
} // Checked

char* uppercase(char *str){
    int i;
    for(i=0;str[i];i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return str;
} // Checked

char* lowercase(char *str){
    for(int i=0;str[i];i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
} // Checked

void extract_string(char *str, int start_index, int end_index, char *result){
    int i,j;
    for(j=0,i=start_index;i<end_index;i++,j++)
        result[j] =str[i];
    result[j] = '\0';
} // Checked

int main(){
    char str[50],ch,result[20];
    int arr[10]={0};
    printf("Enter a string : ");
    fgets(str,50,stdin);
    // printf("Enter a character : ");
    // fflush(stdin);
    // scanf("%c",&ch);
    extract_string(str,4,11,result);
    printf("%s",result);
    // for(int i=0;arr[i]!=0;i++)
    //     printf("%d ",arr[i]);
    return 0;
}