#include<stdio.h>
#include<string.h>

void inputStrings(char str[][20],int n){
    printf("Enter %d names : ",n);  
    int i,l;
    for(i=0;i<n;i++){
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
} //Checked

void countVowels(char str[][20], int n){
    int count=0,i,j,k;
    char v[] = "aeiouAEIOU";
    inputStrings(str,n);
    for(i=0;i<n;i++){
        for(j=0,count=0;str[i][j];j++){
            for(k=0;v[k];k++){
                if(str[i][j]==v[k]){
                    count++;
                    break;
                }
            }
        }
        printf("Vowels is %s is %d\n",str[i],count);
    }
} //Checked

void sort(char str[][20],int n){
    char temp[50];
    for(int r=1;r<n;r++){
        for(int i=0;i<=n-1-r;i++){
            if(strcmp(str[i],str[i+1]) > 0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
} //Checked

void display(char str[][20], int n){
    int i;
    for(i=0;i<n;i++){
        printf("\n%s",str[i]);
    }
}

char* trim(char str[]){
    int i;
    char temp[50];
    for(i=0;str[i];i++){
        if(str[i] != ' ')
            break;
    }
    strcpy(temp,str+i);
    for(i=0;temp[i];i++);
    i--;
    while(temp[i] == ' ')
        i--;
    temp[i+1] = '\0';
    strcpy(str,temp);
    return str;
} // Checked

int countWords(char str[]){
    int i,count=0;
    trim(str);
    for(i=0;str[i];i++){
        if(str[i] == ' ')
            count++;
    }
    return count+1;
} // Checked

int splitToStrings(char str[],char s[][20],int n){
    int no_of_words,i,j=-1,k;
    no_of_words = countWords(str);
    if(no_of_words<=n){
        for(i=0;i<no_of_words;i++){
            for(j++,k=0;str[j] != ' ' && str[j]!='\0';j++,k++)
                s[i][k] = str[j];
            s[i][k] = '\0';
        }   
    }
    return no_of_words;
} // Checked

int removeDuplicate(char str[][20], int n){
    int i,j,k=0;
    char temp[n][20];
    sort(str,n);
    strcpy(temp[k],str[0]);
    for(i=0,j=1;i<n-1;){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j]) == 0)
                continue;
            else{
                i=j;
                k++;
                strcpy(temp[k],str[j]);
                break;
            }
        }
        if(j==n)
            break;
    }
    for(i=0;i<=k;i++)
        strcpy(str[i],temp[i]);
    return k+1;
} // Checked

int main(){
    char str[5][20];
    // char s[] = "Hello Mohd Ali how are";
    int size = 10,n;
    inputStrings(str,size);
    n=removeDuplicate(str,size);
    display(str,n);
    // for(int i=0;i<size;i++){
    //     printf("%s\n",str[i]);
    // }
    return 0;
}