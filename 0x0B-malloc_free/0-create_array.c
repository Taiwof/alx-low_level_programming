#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: number of characters
* @c: initial array character
* Description: create array of size and assign char
* Return: pointer to array, NULL is fail
*/

char *create_array(unsigned int size, char c)
{
char *arr;
int i = 0;

if (size <= 0) /* validate size input */
return (NULL);
arr = malloc(sizeof(char) * size); /* allocate memory */

if (arr == NULL) /* validate memory */
return (NULL);

while (i < (int)size) /* set array values to char c */
{
*(arr + i) = c;
i++;
}
*(arr + i) = '\0';

return (arr);
}
