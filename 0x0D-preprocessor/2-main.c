#include <stdio.h>

/*
*print the name of the file from which the program was compiled from,
*followed by a new line
*Return: 0 always
*/
int main(void)
{
	printf("s%\n", _FILE_);
	return (0);
}
