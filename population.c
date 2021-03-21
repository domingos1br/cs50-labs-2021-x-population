#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
      int x,y,n,q,d;

      do

        {
           x = get_int("What´s the start size ? \n");
        }

      while (x<9);

    // TODO: Prompt for end size

      do

        {
           y = get_int("What´s the end size ? \n");
        }

      while (y<x);

    // TODO: Calculate number of years until we reach threshold

      for (n=0;x<y;n++)

      {
        q=x/3;
        d=x/4;
        x=x+q-d;
      }

    // TODO: Print number of years

     {
         printf("Years :%i\n", n);
     }

}