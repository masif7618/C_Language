#include<stdio.h>
void input(int rows, int columns, int arr[rows][columns]){
    printf("Enter 9 numbers : ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void display(int rows, int columns, int arr[rows][columns]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void q1(){
    int a[3][3],b[3][3],c[3][3];
    input(3,3,a);
    input(3,3,b);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    display(3,3,c);
} // Checked

void q2(){
    int a[3][3],b[3][3],c[3][3],sum=0;
    input(3,3,a);
    input(3,3,b);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum=0;
            for(int k=0; k<3; k++)
                sum = sum + a[i][k] * b[k][j];
            c[i][j] = sum;
        }
    }
    display(3,3,c);
} // Checked

void q3(){
    int a[3][3];
    input(3,3,a);
    int temp;
    for(int i=0,j=1,k=1; k<=3;k++){
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            if(j-i==1)
                j++;
            else  
                i++;
    }
    display(3,3,a);
} // Checked

void update_score_board(int p1, int p2, int result, int score_board[][4]){
    score_board[p1][p2] = result;
    score_board[p2][p1] = 2-result;
}

int get_player_score(int player,int score_board[][4]){
    int sum = 0;
    for(int i=0;i<=3;i++){
        sum = sum + score_board[player][i];
    }
    return sum;
}

int find_winner(int score_board[][4]){
    int player,score=0,winner,s1=0;
    player = 0;
    score = get_player_score(player,score_board);
    winner = player;
    for(++player;player<=3;player++){
        s1 = get_player_score(player,score_board);
        if(score < s1){
            winner = score;
            score = s1;
        }
    }
    return winner;
}

void sort(int a[],int n, int player_index[]){
    int r,t,i;
    for(r=1;r<=n-1;r++){
        for(i=0;i<=n-r-1;i++){
            if(a[i] < a[i+1]){
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
                t = player_index[i];
                player_index[i] = player_index[i+1];
                player_index[i+1] = t;
            }
        }
    }
}

void show_rank(int score_board[][4]){
    int player_score[4],scores[4],player_index[4];
    for(int i=0;i<=3;i++){
        player_score[i] = get_player_score(i,score_board);
        scores[i] = player_score[i];
        player_index[i] = i;
    }
    sort(scores,4,player_index);
    for(int i=0;i<=3;i++){
        printf("%d) %d - Score %d\n",i+1,player_index[i],scores[i]);
    }
}

void display_score_board(int score_board[][4]){
    printf("\nScore Board\n");
    int i,j;
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            printf("%d ",score_board[i][j]);
        }
        printf("\n");
    }
}

void p4(){
    int score_board[4][4] = {0};
    update_score_board(0,1,2,score_board);
    update_score_board(0,2,1,score_board);
    update_score_board(0,3,2,score_board);
    update_score_board(1,2,1,score_board);
    update_score_board(1,3,0,score_board);
    update_score_board(2,3,0,score_board);
    show_rank(score_board);
    // display(4,4,score_board);
    // printf("\n");
    // display_score_board(score_board);

}

int main(){
    p4();
    return 0;
}
