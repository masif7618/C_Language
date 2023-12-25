#include<stdio.h>

void length(){
   int l;
   char str[50];
   printf("Enter a string : ");
   fgets(str,50,stdin);
   for(l=0;str[l];l++);
   str[l-1] = '\0';
   printf("Length is %d",l-1);
} // Checked

void q2(){
    char str[50],c;
    int count=0,i;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    printf("Enter a character : ");
    fflush(stdin);
    scanf("%c",&c);
    for(int i=0; str[i];i++){
        if(str[i] == c){
            count++;
        }
    }
    printf("%c occurs %d times in the string",c,count);
}  // Checked

void q3(){
    char str[50],v[]="aeiouAEIOU";
    int count=0,i,k;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    for(int i=0; str[i]; i++){
        for(k=0;v[k];k++){
            if(str[i] == v[k]){
                count++;
                break;
            }
        }
    }
    printf("Vowel count is",count);
} // Checked

void q4(){
    char str[50],c=' ';
    int count=0,i;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    for(int i=0; str[i];i++){
        if(str[i] == c){
            count++;
        }
    }
    printf("Count of space is %d",count);
} // Checked 

void q5(){
    char str[20];
    int count=0,i;
    printf("Enter a string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    for(int i=0; str[i]; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s",str);
} // Checked

int main(){
    q5();
    return 0;
}