#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[] = "hello";
    int b , c;
    char *p;
    p = a;
    b = sizeof(a);
    c = strlen(a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",sizeof(p));
   
	int i;
    for(i = 0; i < strlen(a); i++)
    {
	    printf("%c\n",*(p+i));
	}
	
    return 0;	
} 
