#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if ((you == 's' && comp == 'w') || (you == 'g' && comp == 's') || (you == 'w' && comp == 'g'))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 30)
    {
        comp = 's';
    }
    else if (number < 60)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter the 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    printf("you choose %c and comp choose %c\n", you, comp);

    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("match draw\n");
    }
    else if (result == 1)
    {
        printf("you own the game\n");
    }
    else
    {
        printf("you lost, try again\n");
    }
}