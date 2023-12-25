#include<stdio.h>
#include<string.h>

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

void f1(char str[]){
    int no_of_words,i,j;
    char temp[100][20],s[20][20];
    no_of_words=splitToStrings(str,temp,strlen(str));
    for(i=0,j=0;i<no_of_words;i++){
        if(temp[i][strlen(temp[i])-1] == 's'){
            strcpy(s[j],temp[i]);
            j++;
        }
    }
    for(i=0;i<j;i++){
        printf("\n%s",s[i]);
    }
} // Checked

char maxFreCharacter(char str[][20], int n){
    char freq[256] = {0},ch;
    int i,j,max;
    for(i=0;i<n;i++){
        for(j=0;str[i][j];j++){
            freq[str[i][j]]++;
        }
    }
    max=freq[0];
    ch=0;
    for(i=1;i<256;i++){
        if(max<freq[i]){
            max=freq[i];
            ch=i;
        }
    }
    return ch;
} // Checked
 
int isAnagram(char s1[], char s2[]){
    char freq_s1[256] = {0},freq_s2[256] = {0};
    int i;
    for(i=0;s1[i];i++){
        freq_s1[s1[i]]++;
    }
    for(i=0;s2[i];i++){
        freq_s2[s2[i]]++;
    }
    for(i=0;i<256;i++){
        if(freq_s1[i]!=freq_s2[i])
            return 0;
    }
    return 1;
} // Checked

void f4(char str[]){
    int no_of_words,i,j;
    char temp[100][20],s[20][20];
    no_of_words=splitToStrings(str,temp,strlen(str));
    for(i=0,j=0;i<no_of_words;i++){
        if(temp[i][0] == 'a'){
            strcpy(s[j],temp[i]);
            j++;
        }
    }
    for(i=0;i<j;i++){
        printf("\n%s",s[i]);
    }
} // Checked

int countGmail(char str[][20], int n){
    int i,j,k=0,count=0;
    char text[] = "@gmail.com";
    for(i=0;i<n;i++){
        for(k=0,j=strlen(str[i])-10;str[i][j];j++,k++){
            if(text[k]!=str[i][j]){
                break;
            }    
        }
        if(!text[k])
            count++;
    }
    return count;
} // Checked

int main(){
    char str[][20] = {"Ana@gmail.com","abuzar@gmail.com","Teat@twitter.com","Khan@gmail.com","lov@gmail.com","asif@chetu.com","ali@gmail.com","Hina@yahoo.com","sarik@gmail.com","test@google.in"};
    // printf("Enter a string : ");
    // fgets(str,300,stdin);
    printf("\n%d",countGmail(str,10));
    return 0;
}

