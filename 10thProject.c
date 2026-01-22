#include<stdio.h>
struct player
 {
char player_team[20];
char player_name[30];
int player_age;
int player_number;
 };
 int main(){
    struct player group[4];
    for(int i=0;i<4;i++){
        printf("For player %d\n",i+1);
        printf("Enter player team:");
        fgets(group[i].player_team, sizeof(group[i].player_team), stdin);
        printf("Enter player name:");
        fgets(group[i].player_name, sizeof(group[i].player_name), stdin);
        printf("Enter player age:");
        scanf("%d", &group[i].player_age);
        printf("Enter player number:");
        scanf("%d", &group[i].player_number);
        getchar();
    }
    int sumk1=0;
    int *p;
    for(int v=0;v<4;v++){
        sumk1= sumk1+group[v].player_age;
        p= &v;
    }
    int average1=sumk1/(*p);
    printf("The age on Average is %d", average1);
    return 0;
 }
