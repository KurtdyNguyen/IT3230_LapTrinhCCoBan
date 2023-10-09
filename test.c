#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    char buf[1024]; // use 1KiB just to be sure

    do
    {
        printf("enter a number: ");
        if (!fgets(buf, 1024, stdin))
        {
            // reading input failed, give up:
            return 1;
        }

        // have some input, convert it to integer:
        a = atoi(buf);
    } while (a == 0); // repeat until we got a valid number

    printf("You entered %d.\n", a);
}