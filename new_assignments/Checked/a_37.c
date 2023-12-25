#include<stdio.h>

int countVowels(char str[]){
    int count=0,i,k;
    char v[] = "aeiouAEIOU";
    for(i=0;str[i];i++){
        for(k=0;v[k];k++){
            if(str[i]==v[k]){
                count++;
                break;
            }
        }
    }
    return count;
} // Checked

int findCharacter(char str[],char c){
    for(int i=0;str[i];i++){
        if(str[i] == c){
            return i;
        }
    }
    return -1;
} // Checked

int findCharacterBetweenIndices(char str[], char ch, int start, int end){
    int i;
    for(i=start; str[i] && i<end; i++){
        if(str[i]==ch)
            return i;
    }
    return -1;
} // Checked

void swapCharacters(char str[], int firstIndex, int secondIndex){
    char ch;
    ch = str[firstIndex];
    str[firstIndex] = str[secondIndex];
    str[secondIndex] = ch;
} // Checked

int isAlphaNumeric(char str[]){
    int alphabet=0,digit=0;
    for(int i=0;str[i];i++){
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
            alphabet = 1;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digit = 1;
        }
    }
    if(alphabet && digit)
        return 1;
    else  
        return 0;
} // Checked

int main(){
    char str[50],c;
    int start,end;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    // printf("Enter a character : ");
    // fflush(stdin);
    // scanf("%c",&c);
    printf("%d",isAlphaNumeric(str));
    return 0;
}