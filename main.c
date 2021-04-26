#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dest, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fd, const void *buf, size_t count);
ssize_t		ft_read(int fd, void *buf, size_t count);
char		*ft_strdup(const char *s);

int main()
{
	char *s[10];
	char d[10][2500];
	char ft_d[10][2500];
	int len;
	int ft_len;
	int i = 0;
		
	s[0] = "";
	s[1] = "A";
	s[2] = "Hello world.";
	s[3] = "abcdefghijklmnopqrstuvwxyz";
	s[4] = "1234567890";
	s[5] = "			       					";
	s[6] = "		??@!*^&^*(*&*^()*^**&^$*&^&^)))_+_+__#/+|}{/$#@(&^(&^^* 		";
	s[7] = "Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.Pellentesque sollicitudin egestas nunc, in lobortis nibh feugiat eu.";
	while (i < 8)
	{
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("str1: |%s|\n", s[i]);
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");


		printf("===================(FT_)STRLEN===================\n");		
		printf("strlen:         %ld\nft_strlen:      %ld\n", strlen(s[i]), ft_strlen(s[i]));


		printf("===================(FT_)STRCPY===================\n");		
		printf("strcpy:        |%s|\nft_strcpy:     |%s|\n", strcpy(d[i], s[i]), ft_strcpy(ft_d[i], s[i]));	


		printf("===================(FT_)STRDUP===================\n");		
		printf("strdup:        |%s|\nft_strdup:     |%s|\n", strdup(s[i]), ft_strdup(s[i]));


		printf("===================(FT_)STRCMP===================\n");		
		printf("strcmp:        %d\nft_strcmp:     %d\n", strcmp(d[i], ft_d[i]), ft_strcmp(d[i], ft_d[i]));
		i++;
	}
	printf(":::::::::::::::::::::::::::::::::::::::::::::::::\n");
	char *str1 = "";
	char *str2 = "";
	printf("str1: |%s|\nstr2: |%s|\n", str1, str2);
	printf("strcmp:    %d\nft_strcmp: %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "1234567890";
	str2 = "";
	printf("str1: |%s|\nstr2: |%s|\n", str1, str2);
	printf("strcmp:    %d\nft_strcmp: %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "";
	str2 = "1234567890";
	printf("str1: |%s|\nstr2: |%s|\n", str1, str2);
	printf("strcmp:    %d\nft_strcmp: %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "zabcdefghijklmnopqrstuvwyxz";
	str2 = "987654321";
	printf("str1: |%s|\nstr2: |%s|\n", str1, str2);
	printf("strcmp:    %d\nft_strcmp: %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "987654321";
	str2 = "zabcdefghijklmnopqrstuvwyxz";
	printf("str1: |%s|\nstr2: |%s|\n", str1, str2);
	printf("strcmp:    %d\nft_strcmp: %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	printf(":::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");

	printf("===================(FT_)WRITE===================\n");		
	printf("INVALID FD\n");
	errno = 0;
	printf("write:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, write(5, "test\n", 6));
	errno = 0;
	printf("ft_write:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, ft_write(5, "test\n", 6));
	printf("\n");
	printf("INVALID STR\n");
	errno = 0;
	printf("write:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, write(1, NULL, 6));
	errno = 0;
	printf("ft_write:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, ft_write(1, NULL, 6));
	printf("\n");
	printf("WORKING FD\n");
	write(1, "write:         |", 17);
	len = write(1, s[7], strlen(s[7]));
	write(1, "|\n", 2);
	write(1, "ft_write:      |", 17);
	ft_len = ft_write(1, s[7], strlen(s[7]));
	write(1, "|\n", 2);
	printf("write:         %d\nft_write:      %d\n", len, ft_len);		

	printf("===================(FT_)READ===================\n");		
	char *buf = calloc(340, 1);
	char *ft_buf = calloc(340, 1);
	int fd;
	int ft_fd;
	fd = open("main.c", O_RDONLY);
	ft_fd = open("main.c", O_RDONLY);
	printf("INVALID FD\n");
	errno = 0;
	printf("read:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, read(5, "test\n", 6));
	errno = 0;
	printf("ft_read:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, ft_read(5, "test\n", 6));
	printf("\n");
	printf("INVALID BUFF\n");
	errno = 0;
	printf("read:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, read(fd, NULL, 6));
	errno = 0;
	printf("ft_read:\n   streerror - %s\n   errno - %d\n   ret - %zd\n", strerror(errno), errno, ft_read(fd, NULL, 6));
	printf("\n");
	printf("WORKING FD\n\n");
	printf("read:\n---------------\n%s\n---------------\nret: %zd\n===============\n", buf, read(fd, buf, 200));
	printf("ft_read:\n---------------\n%s\n---------------\nret: %zd\n", ft_buf, read(ft_fd, ft_buf, 200));
}
