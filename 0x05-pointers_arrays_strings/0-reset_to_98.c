#include "main.h"

#include <stdio.h>



/**

 * main - check the code 

 *

 * Return: Always 0.

 */

int main(void)

{

    int n;
    int *p;

    n = 98;
    *p = &n;

    printf("n=%p\n", n);

    reset_to_98(&n);

    printf("n=%p\n", n);

    return (0);

}
