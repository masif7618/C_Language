#include<stdio.h>

int length(char str[]){
    int i;
    for(i=0; str[i];i++);
    return i;
} // Checked

char* reverse(char str[]) {
    char ch;
    int i, l;
    for (l = 0; str[l]; l++);
    for (i = 0; i < l / 2; i++) {
        ch = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = ch;
    }
    return str;
} // Checked

int compare(char str1[],char str2[]){
    int i;
    for(i=0; str1[i] && str2[i];i++){
        if(str1[i]!=str2[i])
            return str1[i]=str2[i];
    }
    return str1[i]-str2[i];
} // Checked

char* uppercase(char str[]){
    int i;
    for(i=0; str[i];i++){
        if(str[i] >= 'a' && str[i] <='z'){
            str[i] = str[i] -32;
        }
    }
    return str;
}

char* lowercase(char str[]){
    int i;
    for(i=0; str[i];i++){
        if(str[i] >= 'A' && str[i] <='Z'){
            str[i] = str[i] + 32;
        }
    }
    return str;
} // Checked

int main(){
    char str1[] = "Ramesh";
    char str2[] = "Ram";
    uppercase(str1);
    printf("%s\n",str1);
    lowercase(str2);
    printf("%s",str2);
    return 0;
} // Checked
