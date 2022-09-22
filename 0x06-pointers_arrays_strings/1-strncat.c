#include "main.h"
/**
 * *_strncat - concatenates the two strings but add inputted number of bytes
 * *@dest: String that will be appended upon
 * *@src: String to be completed at end of dest
 * *@n:integer parameter to compare inde to
 * *Return: returns new concatenated string
 * */

char *_strcat(char *dest, char *src)
{

	        int index = 0, dest_len = 0;

		        while (dest[index++])
				                dest_len++;

			        for (index = 0; src[index]; index++)
					                dest[dest_len++] = src[index];

				        return (dest);
}
