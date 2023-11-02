#include "main.h"


/**
* string_nconcat - a function that concatenates two strings.
*
* @s1: first char
* @s2: secound char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
   unsigned int x, y, z;
   char *s;


   if (s1 == NULL)
   {
       x = 0;
   }
   else
   {
       for (x = 0; s1[x]; ++x)
           ;
   }
   if (s2 == NULL)
   {
       y = 0;
   }
   else
   {
       for (y = 0; s2[y]; ++y)
           ;
   }
   if (y > n)
       y = n;
   s = malloc(sizeof(char) * (x + y + 1));
   if (s == NULL)
       return (NULL);
   for (z = 0; z < x; z++)
       s[z] = s1[z];
   for (z = 0; z < y; z++)
       s[z + x] = s2[z];
   s[x + y] = '\0';
   return (s);
}


== == == == = 2-calloc.c ====


#include "main.h"


/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
*
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
*
* Return: pointer to the allocated memory.
*/
void * _calloc(unsigned int nmemb, unsigned int size)
{
   char *a;
   unsigned int b;


   if (nmemb == 0 || size == 0)
       return (NULL);
   a = malloc(nmemb * size);
   if (a == NULL)
       return (NULL);
   for (b = 0; b < (nmemb * size); b++)
       a[b] = 0;
   return (a);
}

