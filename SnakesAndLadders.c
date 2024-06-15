#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int player1 = 0,player2 = 0,dice1,dice2,a=0,b=0,i=0;
    char per1[100];
    char per2[100];
    printf("Rules\n1.You Need To Roll a 1 to unlock your token\n2.You Need to Get to 100 before your opponent to win\n3.Best OF Luck\n\n");
    printf("Enter Name Of Player 1: ");
    gets(per1);
    printf("Enter Name Of Player 2: ");
    gets(per2);
    while(free){
        srand(time(0));
        if(a == 0 && b == 0){
            i++;
            dice1 = rand()% 6 + 1;
            printf("%s press Any key to roll the dice: ",per1);
            fflush(stdin);
            getchar();
            if(dice1 == 1){
                printf("Congrats %s!!You Have unlocked your token\n",per1);
                a = 1;
            }
            else if(dice1!=1){
                printf("%s you rolled a %d",per1,dice1);
                printf("\n%s you will have to wait for your next turn\n",per1);
            }
            if (i > 15)
            {
                a = 1;
            }
            
            dice2 = rand()%6 + 1;
            printf("%s press Any key to roll the dice: ",per2);
            fflush(stdin);
            getchar();
            if(dice2 == 1){
                printf("Congrats %s!!You Have unlocked your token\n",per2);
                b = 1;
            }
            if (i > 15)
            {
                b = 1;
            }
            else if(dice2!=1){
                printf("%s you rolled a %d",per2,dice2);
                printf("\n%s you will have to wait for your next turn\n",per2);
            }
        }
        else if(a == 1 && b==0){
            i++;
            dice1 = rand()%6 + 1;
            printf("%s press Any key to roll the dice: ",per1);
            fflush(stdin);
            getchar();
            printf("%s you rolled a %d\n",per1,dice1);
            player1+=dice1;
            if (player1>100)
            {
                printf("Try to get a %d or less\n",player1-100);
            }
            else if(player1<100){
                printf("You are at %d\n",player1);
            }
            else if(player1 == 100){
                printf("\nCongrats %s!!!! You Won The Game\n",per1);
                break;
            }
            if(player1 == 25){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player1-20);
                player1 -= 20;
            }
            else if(player1 == 37){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player1-34);
                player1 -=34;
            }
            else if(player1 == 47){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player1-28);
                player1 -=28;
            }
            else if(player1 == 65){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player1-13);
                player1 -=13;
            }
            else if(player1 == 87){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player1-30);
                player1 -=30;
            }
            else if(player1 == 91){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player1-30);
                player1 -=30;
            }
            else if(player1 == 99){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player1-19);
                player1 -=19;
            }
            else if(player1 == 4){
                printf("Wow You found a Ladder\n");
                player1+=30;
                printf("You went Upto %d\n",player1);
            }
            else if(player1 == 6){
                printf("Wow You found a Ladder\n");
                player1+=21;
                printf("You went Upto %d\n",player1);
            }
            else if(player1 == 20){
                printf("Wow You found a Ladder\n");
                player1+=50;
                printf("You went Upto %d\n",player1);
            }
            else if(player1 == 36){
                printf("Wow You found a Ladder\n");
                player1+=19;
                printf("You went Upto %d\n",player1);
            }
            else if(player1 == 63){
                printf("Wow You found a Ladder\n");
                player1+=32;
                printf("You went Upto %d\n",player1);
            }
            else if(player1 == 68){
                printf("Wow You found a Ladder\n");
                player1+=30;
                printf("You went Upto %d\n",player1);
            }
            dice2 = rand()% 6 + 1;
            printf("%s press Any key to roll the dice: ",per2);
            fflush(stdin);
            getchar();
            if(dice2 == 1){
                printf("Congrats %s!!You Have unlocked your token\n",per2);
                b = 1;
            }
            else if(dice2!=1){
                printf("%s you rolled a %d",per2,dice2);
                printf("\n%s you will have to wait for your next turn\n",per2);
            }
            if (i > 15)
            {
                b = 1;
            }
        }
        else if(a == 0 && b == 1){
            i++;
            dice1 = rand()% 6 + 1;
            printf("%s press Any key to roll the dice: ",per1);
            fflush(stdin);
            getchar();
            if(dice1 == 1){
                printf("\nCongrats %s!!You Have unlocked your token\n",per1);
                a = 1;
            }
            else if(dice1!=1){
                printf("%s you rolled a %d",per1,dice1);
                printf("\n%s you will have to wait for your next turn\n",per1);
            }
            if (i > 15)
            {
                a = 1;
            }
            dice2 = rand()%6 + 1;
            printf("%s press Any key to roll the dice: ",per2);
            fflush(stdin);
            getchar();
            printf("%s you rolled a %d\n",per2,dice2);
            player2+=dice2;
            if (player2>100)
            {
                printf("Try to get a %d or less\n",player2-100);
                player2-=dice2;
            }
            else if(player2<100){
                printf("You are at %d\n",player2);
            }
            else if(player2 == 100){
                printf("\nCongrats %s!!!! You Won The Game\n",per2);
                break;
            }
            if(player2 == 25){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-20);
                player2 -= 20;
            }
            else if(player2 == 37){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-34);
                player2 -=34;
            }
            else if(player2 == 47){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-28);
                player2 -=28;
            }
            else if(player2 == 65){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-13);
                player2 -=13;
            }
            else if(player2 == 87){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-30);
                player2 -=30;
            }
            else if(player2 == 91){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-30);
                player2 -=30;
            }
            else if(player2 == 99){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-19);
                player2 -=19;
            }
            else if(player2 == 4){
                printf("Wow You found a Ladder\n");
                player2+=30;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 6){
                printf("Wow You found a Ladder\n");
                player2+=21;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 20){
                printf("Wow You found a Ladder\n");
                player2+=50;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 36){
                printf("Wow You found a Ladder\n");
                player2+=19;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 63){
                printf("Wow You found a Ladder\n");
                player2+=32;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 68){
                printf("Wow You found a Ladder\n");
                player2+=30;
                printf("You went Upto %d\n",player2);
            }
        }
        else if(a == 1 && b == 1){
            dice1 = rand()%6 + 1;
            printf("%s press Any key to roll the dice: ",per1);
            fflush(stdin);
            getchar();
            printf("%s you rolled a %d\n",per1,dice1);
            player1+=dice1;
            if (player1>100)
            {
                printf("Try to get a %d or less\n",player1-100);
                player1-=dice1;
            }
            else if(player1<100){
                printf("You are at %d\n",player1);
            }
            else if(player1 == 100){
                printf("\nCongrats %s!!!! You Won The Game\n",per1);
                break;
            }
            if(player1 == 25){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now",player1-20,"\n");
                player1 -= 20;
            }
            else if(player1 == 37){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now",player1-34,"\n");
                player1 -=34;
            }
            else if(player1 == 47){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now",player1-28,"\n");
                player1 -=28;
            }
            else if(player1 == 65){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now",player1-13,"\n");
                player1 -=13;
            }
            else if(player1 == 87){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now",player1-30,"\n");
                player1 -=30;
            }
            else if(player1 == 91){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now",player1-30,"\n");
                player1 -=30;
            }
            else if(player1 == 99){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now",player1-19,"\n");
                player1 -=19;
            }
            else if(player1 == 4){
                printf("Wow You found a Ladder\n");
                player1+=30;
                printf("You went Upto %d",player1,"\n");
            }
            else if(player1 == 6){
                printf("Wow You found a Ladder\n");
                player1+=21;
                printf("You went Upto %d",player1,"\n");
            }
            else if(player1 == 20){
                printf("Wow You found a Ladder\n");
                player1+=50;
                printf("You went Upto %d",player1,"\n");
            }
            else if(player1 == 36){
                printf("Wow You found a Ladder\n");
                player1+=19;
                printf("You went Upto %d",player1,"\n");
            }
            else if(player1 == 63){
                printf("Wow You found a Ladder\n");
                player1+=32;
                printf("You went Upto %d",player1,"\n");
            }
            else if(player1 == 68){
                printf("Wow You found a Ladder\n");
                player1+=30;
                printf("You went Upto %d",player1,"\n");
            }
            dice2 = rand()%6 + 1;
            printf("%s press Any key to roll the dice: ",per2);
            fflush(stdin);
            getchar();
            printf("%s you rolled a %d\n",per2,dice2);
            player2+=dice2;
            if (player2>100)
            {
                printf("Try to get a %d or less\n",player2-100);
                player2-=dice2;
            }
            else if(player2<100){
                printf("You are at %d\n",player2);
            }
            else if(player2 == 100){
                printf("Congrats %s!!!! You Won The Game\n",per2);
                break;
            }
            if(player2 == 25){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-20);
                player2 -= 20;
            }
            else if(player2 == 37){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-34);
                player2 -=34;
            }
            else if(player2 == 47){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-28);
                player2 -=28;
            }
            else if(player2 == 65){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-13);
                player2 -=13;
            }
            else if(player2 == 87){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-30);
                player2 -=30;
            }
            else if(player2 == 91){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-30);
                player2 -=30;
            }
            else if(player2 == 99){
                printf("Oh noo a snake bit you!!\n");
                printf("You went back to %d now\n",player2-19);
                player2 -=19;
            }
            else if(player2 == 4){
                printf("Wow You found a Ladder\n");
                player2+=30;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 6){
                printf("Wow You found a Ladder\n");
                player2+=21;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 20){
                printf("Wow You found a Ladder\n");
                player2+=50;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 36){
                printf("Wow You found a Ladder\n");
                player2+=19;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 63){
                printf("Wow You found a Ladder\n");
                player2+=32;
                printf("You went Upto %d\n",player2);
            }
            else if(player2 == 68){
                printf("Wow You found a Ladder\n");
                player2+=30;
                printf("You went Upto %d\n",player2);
            }
        }
    }
    return 0; 
}