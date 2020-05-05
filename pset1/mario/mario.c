#include <stdio.h>
#include <cs50.h>

void spaces(void);
void hashes(void);

int height, width, c, s, h;

int main(void)

{
    //Prompt user for a height from 1-8
    do
    {
        height = get_int("Height: ");
    }

    //Loop until height equals a number from 1-8
    while (height < 1 || height > 8);
    
    width = height;


    //Loop counter that repeats until spaces and hashes fill rows equal to height
    for (c = 0; c < width; c++)

    {
        //Print a number of spaces equal to width - 1
        spaces();
        
        //Print a number of hashes equal to width + 1
        hashes();
        printf("\n");
        height--;
    }
}

void spaces(void)
{
    for (s = height - 1; s > 0; s--)
    {
        printf(" ");
    }
}

void hashes(void)
{
    for (h = c; h >= 0; h--)
    {
        printf("#");
    }
}