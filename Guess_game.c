#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int n,c,flag=1,score=100;
    srand(time(0));
    n=rand()%100+1;

    do
    {
        printf("Guess a number between 0-100: ");
        scanf("%d",&c);

        if (c<n)
        {
            printf("You have choosen %d please select higher value!\n ",c);
            score-=10;
            flag++;
        }
        else if (c>n)
        {
            printf("You have choosen %d please select lower value!\n ",c);
            score-=10;
            flag++;
        }
        else
        printf("Congrats you have guess it correct!\n");
    }while(c!=n);

    if (score<=0)
    {
        printf("Game Over! your score is 0 from 100 and your attempts are %d\n",flag);
    }
    else
    printf("Your score is %d from 100 and your attempts are %d\n",score,flag);
    return 0;
}
