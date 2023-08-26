#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int number = rand()%100 + 1;
    int guess ;
    int  nguess = 1;

    do
    {
        printf("Enter your Guess number: ");
        scanf("%d", &guess);

        if(guess>number){
            printf("Too big!\n");
        }else if(guess<number){
            printf("Too low\n");
        }else{
            printf("You guessed %d in %d guesses", number, nguess);
        }
        nguess++;
    } while (guess!=number);
    
}