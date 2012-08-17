#include <stdio.h>

char *shrink_space(char *dest, const char *src, size_t n)
{
	size_t i,j;
	j = 0;

	for (i = 0; i < n && src[i] != '\0'; ){
		//while (src[i] == ' ' && src[i+1] == ' ')
		//	i++;
		//dest[j++] = src[i++];
		if (src[i] == '\t' || src[i] == '\n' || src[i] == '\r'){
			dest[j++] == ' ';
			i++;
		}
		else
			dest[j++] = src[i++];
	}
	//for (; j < n; j++)
	//	dest[j] = '\n';

	return dest;
}	

int main(void)
{
	char dest[1000];
	char str[] = "This Content	 hoho		is	 ok";
	printf("%s\n", str);
	printf("%s\n",shrink_space(dest, str, 1000));
	return 0;
}	
