#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
	char s[15] = "MomeuMarius";
	char d[5] = "1234";
	char c[5] = "1234";

	strncpy(d, s, 5);
	ft_strncpy(c,s,5);
	printf("%s\n%s\n",d,c);
	return (0);
}
