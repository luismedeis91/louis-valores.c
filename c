#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Compare x and y
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

Se utilizando contador "while"                          
int i = 1;
while (i <= 50)
{
    printf("hello, world\n");
    i++;
}   

forma usual;
for (int i = 0; i < 50; i++)
{
    printf("hello, world\n");
}







