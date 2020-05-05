#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height, space, hash;

    do
    {
        //Prompt user for a height from 1-8
        height = get_int("Height: ");
    }
    // Define all the things that are not within scope
    while (height < 0 | height > 9);  //Loop until height equals a number from 1-8

    int max = height; // Make a new variable equal to the user input before any math is done
/* ^^^^^^^^^^^^^^^^^^^ This is important to seperate because we have are using (height)
                        in the print loop to calculate the spaces then subtracting 1
                        If we still used it to count the print_loop AND do height-- in the loop
                        we will finish before we intend to
Like so:
Height: 8
       #    height value:8    print loop value:0
      ##    height value:7    print loop value:1
     ###    height value:6    print loop value:2
    ####    height value:5    print loop value:3
    By this next loop height = 4 and print_loop = 4 so we stop
*/

    // Loop that triggers the spaces, hashes, new lines, and ticks down a counter (height) used in spaces
    for (int print_loop = 0; print_loop < max; print_loop++) // Starting at 0, count up by 1 each loop until we get to the user input
    {
        // Loop that triggers a single space
        for (space = height - 1; space > 0; space--) // Starting at the user inpt -1, count down to 0
            {
                printf(" ");
            }
        // Loop that triggers a single hash.
        for (hash = print_loop; hash >= 0; hash--)  // Starting at whatever value (print_loop), count backwards to but include 0
            {
                printf("#");
            }
        // I added this line so we can monitor the variables in each line
        printf("    height value:%i    print loop value:%i    max value:%i", height, print_loop, max);
        // Prints a new line
        printf("\n");
        // Ticks down the original user input
        height--;
    }   // end of the print_loop Above here is looped
        //Below here happens when print loop is done

    printf("Hope this helps!\n");
}