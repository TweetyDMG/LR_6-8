#include <stdio.h>
#include <locale.h>
#include <math.h> 

int in()
{
    setlocale(LC_CTYPE, "RUS");
 
    for (int i = 1; i <= 10; i++) 
    {
        putchar('-');
    }
    puts("");

    for (int i = 1; i <= 5; i++)
    {
        puts("|"); 
    }


    for (int i = 1; i <= 10; i++)
    {
        putchar('-');
    }
    puts("");
}