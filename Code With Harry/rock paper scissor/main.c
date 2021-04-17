#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber(int n){
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2){
    if(char1 == char2){
        return -1;
    }
    else if(char1 == 'r' && char2 == 's'){
        return 1;
    }
    else if(char1 == 's' && char2 == 'r'){
        return 0;
    }
    else if(char1 == 'p' && char2 == 'r'){
        return 1;
    }
    else if(char1 == 'r' && char2 == 'p'){
        return 0;
    }
    else if(char1 == 's' && char2 == 'p'){
        return 1;
    }
    else if(char1 == 'p' && char2 == 's'){
        return 0;
    }
}

int main(){

    int pScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the rock paper scissor game.");

    for(int i = 0; i < 3; i++){
        printf("Player 1 Turn:\n");
        printf("Choose 1 for Rock, 2 Paper and 3 for Scissor.\t");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock, 2 Paper and 3 for Scissor.\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer choose %c\n\n", compChar);

        if(greater(compChar, playerChar) == 1){
            compScore += 1;
            printf("CPU got it!\n\n");
        }
        else if(greater(compChar, playerChar) == -1){
            compScore += 1;
            pScore += 1;
            printf("No one got it!\n\n");
        }
        else{
            pScore += 1;
            printf("You got it!\n\n");
        }

    }
    if(pScore > compScore){
        printf("\n You Win!!\n");
    }
    else if(pScore < compScore){
        printf("\n You Lose!!\n");
    }
    else{
        printf("\n Draw!!\n");
    }

    return 0;
}