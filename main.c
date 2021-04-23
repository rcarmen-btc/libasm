#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *a = malloc(sizeof(char) * 10);
	char *b = "123456789";
	ft_strcpy(a, b);
}