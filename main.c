#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

# define STRLEN(x)			printf("`%s` = %d (%d)\n", x, (int)ft_strlen(x), (int)strlen(x));
# define STRCMP(a, b)		printf("`%s`:`%s` = %d (%d)\n", a, b, ft_strcmp(a, b), strcmp(a, b));
# define WRITE(s, x)		printf("^%ld (`%s`:%ld)\n", ft_write(STDOUT_FILENO, s, x), s, x);
# define READ(b, x)			r = ft_read(STDIN_FILENO, buffer, x); printf("`%s`:%ld\n", buffer, r);
# define DUP(s)				tmp = ft_strdup(s); printf("`%s` (`%s`)\n", tmp, s); free(tmp); tmp = NULL;

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dest, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t		ft_read(int fd, void *buf, size_t count);

int main()
{
	char *s = NULL;
	char *s0 = "";
	char *s1 = "1";
	char *s2 = "1234567890";
	char *s3 = "abcdiefghijklmopqrstuvxywz";
	char *s4 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. In varius libero sed justo elementum cursus. Quisque dictum pellentesque est eu facilisis. Nunc vel mi leo. Vestibulum vel augue quis lectus laoreet gravida dapibus sit amet metus. Cras finibus vitae sem id consectetur. Donec quis nisl cursus, vehicula nunc sit amet, finibus erat. Duis scelerisque pellentesque neque id egestas. Donec malesuada, neque in rhoncus aliquam, nulla dolor posuere tortor, et sagittis ante eros sed est. Nam lobortis eros non mi maximus, non bibendum urna sollicitudin. Integer cursus finibus est, ac hendrerit lectus blandit eu. Nullam nunc enim, elementum a maximus interdum, posuere ac nibh. Vivamus suscipit viverra convallis. Donec tristique nunc ut nibh hendrerit imperdiet. Quisque ut porta lorem, ultrices pellentesque nibh.";
	int n0 = 0;
	int n1 = 10;

	size_t		i;
	long	r;
	char	buffer[100];
	char	*tmp;
	char	*tmp2;

	r = ft_write(1, s, 3);
	printf("%ld\n", r);
	r = write(1, s, 3);
	printf("%ld\n", r);
	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;


	// printf("--strlen\n");
	// STRLEN("")
	// STRLEN("toto")
	// STRLEN("totototo")
	// STRLEN("0123456789abcdef")
	// STRLEN("42")
	// STRLEN("1")
	// printf("-done\n");

	// printf("\n--strcmp\n");
	// STRCMP("", "")
	// STRCMP("toto", "toto")
	// STRCMP("", "toto")
	// STRCMP("toto", "")
	// STRCMP("toto", "totobar")
	// printf("`%s`:`%s` = %d\n", "TOTO", NULL, ft_strcmp("TOTO", NULL));
	// printf("`%s`:`%s` = %d\n", NULL, "TOTO", ft_strcmp(NULL, "TOTO"));
	// printf("`%s`:`%s` = %d\n", NULL, NULL, ft_strcmp(NULL, NULL));
	// printf("-done\n");

	// printf("\n--strcpy\n");
	// printf("`%s` (`toto`)\n", ft_strcpy(buffer, "toto"));
	// printf("`%s` (empty)\n", ft_strcpy(buffer, ""));
	// printf("`%s` (`long message`)\n", ft_strcpy(buffer, "long message"));
	// printf("-done\n");

	// printf("\n--write\n");
	// WRITE("toto", 4L)
	// WRITE("totototo", 4L)
	// WRITE("totototo", 8L)
	// WRITE("toto", 2L)
	// printf("-done\n");

	// printf("\n--read (Makefile)\n");
	// READ(buffer, 50)
	// READ(buffer, 25)
	// READ(buffer, 4)
	// READ(buffer, 26)
	// READ(buffer, 14)
	// READ(buffer, 0)
	// printf("-done\n");

	// printf("\n--ft_strdup\n");
	// tmp2 = ft_strdup("toto");
	// DUP(tmp2)
	// free(tmp2);
	// DUP("totobar")
	// DUP("long message")
	// DUP("")
	// DUP(NULL)
	// printf("-done\n");

	
}
