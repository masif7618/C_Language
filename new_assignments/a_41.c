#include<stdio.h>
#include<string.h>

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
} 

void p1(char str[]){
    int i,k=0,y=0,x;
    char temp[10],s2[10][20];
    trim(str);
    for(i=0;str[i];i++){
        if(str[i] != ' '){
            temp[k] =str[i];
            k++;
        }
        else{
            if(temp[k-1] == 's' || temp[k-1] == 'S'){
                for(x=0;x<temp[x];x++){
                    s2[y][x] = temp[x];
                }
                s2[y][x] = '\0';
                y++;
            }
            memset(temp, 0, sizeof(temp));
            k=0;
        }
    }
    if(temp[k-2] == 's' || temp[k-2] == 'S'){
                for(x=0;x<temp[x];x++){
                    s2[y][x] = temp[x];
                }
                s2[y][x] = '\0';
    }
    for(int i=0;i<=y;i++){
        printf("%s\n",s2[i]);
    }
}

void p2(char str[])
 
int main(){
    char str[50];
    printf("Enter a string : ");
    fgets(str,50,stdin);
    p1(str);
    return 0;
}