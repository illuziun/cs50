#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int height, s, h;

    //Prompt user for a height from 1-8
    do
    {
        height = get_int("Height: ");
    }

    //Loop until height equals a number from 1-8
    while (height < 1 || height > 8);

    int width = height;

    //
    for (int c = 0; c < width; c++)

    {
        //Print a space that is one less than height
        for (s = height - 1; s > 0; s--)
            {
                printf(" ");
            }
        //Print a hash that is
        for (h = c; h >= 0; h--)
            {
                printf("#");
            }
        printf("\n");
        height--;
    }
}
