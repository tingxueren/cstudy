//      my 字符串.c
//      
//      Copyright 2011 mars <mars@mars-pc>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.


#include <stdio.h>
#include <string.h>
#include <math.h>
int FindAndSum(char *str)
{
	int i,j,k,len,sum,a[10000];
	len=strlen(str);
	for(i=0,j=0,sum=0;i<len;i++)
	{
		if(str[i]>='0'&&str[i]<='9') //逐个读入数字
		{
			a[j]=str[i]-'0';
			j++;
			if(!(str[i+1]>='0'&&str[i+1]<='9'))//一个完整数字读入，准备求a[0]到a[j-1]所组成的数字
			{
				for(k=0;k<j;k++)//加权求和
				{
				   sum += (int)(a[k]*pow(10,j-k-1));
				   
	             }
				 j=0; //j移到数组开头，准备重新读数
	        }
				
		}
		
	}
	
	return sum;
}
	
	
	

int main(int argc, char **argv)
{
	char str[10000];       
       gets(str);
       printf("%d\n",FindAndSum(str));
       return 0;
	
}

