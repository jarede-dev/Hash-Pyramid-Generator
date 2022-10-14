#include <stdio.h>

int left_pyramid (int height);
int right_pyramid (int height);
int full_pyramid (int height);
int inverted_pyramid (int height);

int main (void)
{

    int input = 0;
    int height  = 0;

    printf("Generate a Pyramid:\n\n1: Left Pyramid\n2: Right Pyramid\n3: Full Pyramid\n4: Inverted Pyramid\n\nEnter pyramid number: ");
    scanf("%i", &input);

    if(input == 1)
    {
        left_pyramid(height);
    }

    else if(input == 2)
    {
        right_pyramid (height);
    }

    else if(input == 3)
    {
        full_pyramid (height);
    }

    else if(input == 4)
    {
        inverted_pyramid (height);
    }

    else
    {
        printf("Follow the instructions!\n");
    }

    return  0;

}

int left_pyramid (int height)
{
    int i, j, k = 0;
        
        printf("Enter Height: ");
        scanf("%i", &height);

        for(i = 1; i <=height; i++)
        {
            
            for(j = i; j < height; j++)
            {
                printf(" ");
            }

            for(k = 1; k <=i; k++)
            {
                printf("%i", k);
            }

            printf("\n");

        }

        return 0;

}

int right_pyramid (int height)
{
    printf("Enter Height: ");
    scanf("%i", &height);
        
        for(int i = 1; i <= height; i++)
        {

            for(int j = 1; j <= i; j++)
            {
                printf("%i", j);
            }

            printf("\n");

        }

        return 0;
}

int full_pyramid (int height)
{
    int i, j, k = 0;

        printf("Enter Height: ");
        scanf("%i", &height);
        
        for(i = 1; i <= height; i++)
        {
            for(j = 1; j <= height - i; j++)
            {
                printf("  ");
            }

            for(k = 1; k <= (2 * i - 1); k++)
            {
                printf("# ");
            }

            printf("\n");

        }

        return 0;

}

int inverted_pyramid (int height)
{
    int i, j, k = 0;

        printf("Enter Height: ");
        scanf("%i", &height);
        
        for(int i = 1; i <= height; i++)
        {

            for(j = 1; j < i; j++)
            {
                printf(" ");
            }

            for(j = 1; j <= (height * 2 - (2 * i -1)); j++)
            {
                printf("#");
            }

            printf("\n");
        }

        return 0;

}