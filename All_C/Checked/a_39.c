#include<stdio.h>
#include<string.h>

int length(char str[]){
    int i;
    for(i=0;str[i];i++);
    return i;
}

void sort(char str[]){
    int r,i,n;
    char ch;
    n=strlen(str); 
    for(r=1;r<n;r++){
        for(i=0;i<n-r-1;i++){
            if(str[i] > str[i+1]){
                ch = str[i];
                str[i] = str[i+1];
                str[i+1] = ch; 
            }
        }
    }
}

void countFreq(char str[]){
    char temp[100],count;
    strcpy(temp,str);
    sort(temp);
    for(int i=0,count=1;temp[i];i++){
        if(temp[i]==temp[i+1])
            count++;
        else{
            printf("%c %d\n",temp[i],count);
            count=1;
        }
    }
} // Checked

int findWord(char str[],char word[]){
    int wordLength = strlen(word);
    int j,i;
    for(i=0;i<strlen(str)-wordLength;i++){
        for(j=0;j<wordLength;j++){
            if(str[i+j]!=word[j])
                break;
        }
        if(j==wordLength)
            return i;
    }
    return -1;
} // Checked

char* capitalize(char str[]){
    int i;
    if(str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    for(i=1;str[i];i++){
        if(str[i-1] == ' '){
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
    return str;
} // Checked

char* trim(char str[])
{
    char temp[200];
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
            break;
    }
    if(str[i]!='\0')
        strcpy(temp,str+i);
    for(i=0;temp[i];i++);
    i--;
    while(temp[i]==' ')
        i--;
    temp[i+1]='\0';
    strcpy(str,temp);
    return str;
}

int countWords(char str[]){
    int i,count=0;
    trim(str);
    for(i=0;str[i];i++){
        if(str[i] == ' ')
            count++;
    }
    return count+1;
}

char* nameAccronym(char str[]){
    char temp[50];
    int i,n,j=1,k=0;
    n=countWords(str);
    if(str[0] >= 'a' && str[0] <= 'z'){
        temp[0] = str[0]-32;
    }
    else{
        temp[0] = str[0];
    }
    for(i=1;str[i];i++){
        if(str[i-1] == ' '){
            j++;
            if(j==n){
                k++;
                temp[k] = ' ';
                k++;
                if(str[i] >= 'a' && str[i] <= 'z'){
                    temp[k] = str[i]-32;
                }
                else
                    temp[k] = str[i];
                for(k++,i++;str[i];i++,k++){
                    temp[k] = str[i];
                }
                temp[k] = '\0';
            }
            else{
                k++;
                temp[k] = ' ';
                k++;
                if(str[i] >= 'a' && str[i] <= 'z'){
                    temp[k] = str[i]-32;
                }
                else{
                    temp[k] = str[i];
                }
            }
        }
    }
    strcpy(str,temp);
    return str;
} // Checked

void reverse(char str[]){
    int strlength = length(str);
    int j=strlength-1;
    for(int i=0; i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

char* concatenate(char str[],char str2[]){
    int i,j;
    for(i=0;str[i];i++);
    for(j=0;str2[j];j++,i++)
        str[i] = str2[j];
    str[i] = '\0';
    return str;
} // Checked

int main(){
    char str[50] = "mohd asif";
    char str2[] = " Khan";
    // printf("Enter a string : ");
    // fgets(str,50,stdin);
    // fflush;
    // printf("Enter a word : ");
    // fgets(word,10,stdin);
    printf("%s",concatenate(str,str2));
    return 0;
}

