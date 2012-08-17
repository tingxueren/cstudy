#include <stdio.h>

int main(void)
{
	char a[4][3][2] = {{{'a','b'}, {'c', 'd'}, {'e','f'}},
	                   {{'g','h'}, {'i', 'j'}, {'k','l'}},
	                   {{'m','n'}, {'o', 'p'}, {'q','r'}},
	                   {{'s','t'}, {'u', 'v'}, {'w','x'}}};
	char (*pa)[2] = &a[1][0];
	char (*ppa)[3][2] =&a[2];
	//char p = *(*(*(pa+1)+2)+1);
	//printf("%c\n", p);
	char q = *(ppa+1)[2][1]; 
	printf("%u\n", q);
	for (int i=0; i<3; i++)
	{ for (int j=0; j<2; j++)
	   printf("%c\n",(*ppa)[i][j]);                   
	}
}
