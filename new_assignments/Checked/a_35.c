#include<stdio.h>

void q1(){
    char str[50];
    int count=0,i;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    for(int i=0; str[i]; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s",str);
} // Checked

int length(char str[]){
    int i;
    for(i=0; str[i];i++);
    return i-1;
}

void q2(){
    char str[50],ch;
    int count=0,i,l;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    l = i-1;
    for(int i=0; i<l/2; i++){
        ch = str[i];
        str[i] = str[l-1-i];
        str[l-1-i] = ch;
    }
    printf("%s",str);
} // Checked

void q3(){
    char str[50];
    int count_alpha=0,count_digit=0,count_special=0,i;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    for(int i=0; str[i]; i++){
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >='a' && str[i] <= 'z')
            count_alpha++;
        else if(str[i] >= '0' && str[i] <= '9')
            count_digit++;
        else{
            count_special++;
        }
    }
    printf("Total Digits : %d\n",count_digit);
    printf("Total Alphabets : %d\n",count_alpha);
    printf("Total Special Charaters  : %d",count_special);
} // Checked

void q4(){
    char str[50],s[50];
    int i;
    printf("Enter a string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    for(int i=0; str[i]; i++){
        s[i] = str[i];
    }
    s[i] = '\0';
    for(int i=0; str[i]; i++){
        printf("%c",s[i]);
    }
} // Checked 

void q5(){
    char str[50],c;
    int i;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    printf("Enter a character : ");
    fflush(stdin);
    scanf("%c",&c);
    for(i=0; str[i]; i++){
        if(str[i]==c)
            break;
    }
    if(str[i])
        printf("%c is found at index %d",c,i);
    else
        printf("%c is not found in the string",c);
} // Checked


int main(){
    q5();
    return 0;
}