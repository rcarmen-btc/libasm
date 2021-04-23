#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *, char *);

int main()
{
	char *d = "abcdefjhifdafadad";
	char *a = malloc(sizeof(char) * 10);
	char *b = "123456789";
	a[0] = 0;
	printf("%s\n", a);
	char *ret =	ft_strcpy(a, b);
	printf("%s\n", a);
	printf("%s - %s\n", a, ret);
}
