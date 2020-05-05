#include <stdio.h>
#include <cs50.h>
#include <math.h>

void quarters(void);
void dimes(void);
void nickels(void);
void pennies(void);


float change;
int cents, loop_counter;

int total_coins = 0;


int main(void)
{
    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);

    cents = round(change * 100);

    for (loop_counter = 0; loop_counter < 1; loop_counter++)
    {
        quarters();
        dimes();
        nickels();
        pennies();

    }
    printf("%i\n", total_coins);

}

void quarters(void)
{
    for (int q = 0; cents >= 25; q++)
    {
        cents = (cents - 25);
        total_coins++;
    }
}

void dimes(void)
{
    for (int d = 0; cents >= 10; d++)
    {
        cents = (cents - 10);
        total_coins++;
    }
}

void nickels(void)
{
    for (int n = 0; cents >= 5; n++)
    {
        cents = (cents - 5);
        total_coins++;
    }
}

void pennies(void)
{
    for (int p = 0; cents >= 1; p++)
    {
        cents = (cents - 1);
        total_coins++;
    }
}