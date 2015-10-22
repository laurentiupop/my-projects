#include <string.h>
#include <stdio.h>

int main()
{
	char s[15] = "MomeuMarius";
	char d[5] = "1234";
	char c[5] = "1234";

	strcpy(d, s);
//ft_strcpy(c,s);
	printf("%s\n%s\n",d,c);
	return (0);
}
