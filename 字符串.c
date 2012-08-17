//      字符串.c
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


#include"stdio.h"
#include"string.h"
int FindAndSum(char *str)      // 求和函数
{
       int sum,len,i,j,k,a[10000],temp,t;
       len=strlen(str);
       for(i=0,j=0,sum=0;i<len;i++)
       {
              if(str[i]>='0' && str[i]<='9')
              {
                   a[j++]=str[i]-'0';
                   if(i==len-1)
                   {
                         for(k=0;k<j;k++)
                         {
                               temp=1;
                                for(t=1;t<=j-1-k;t++)   // 求权相加
                                        temp*=10;
                                sum+=a[k]*temp;
                          }
                         j=0;
                   }
              }
              else
              {
                     if(i-1>=0 && str[i-1]>='0' && str[i-1]<='9')
                     {
                           for(k=0;k<j;k++)
                           {
                                  temp=1;
                                  for(t=1;t<=j-1-k;t++)  // 求权相加
                                         temp*=10;
                                  sum+=a[k]*temp;
                           }
                           j=0;
                    }
              }
        }
        return sum;
}
int main(void)
{
       char str[10000];       
       str[10000]=gets(str);
       printf("%d\n",FindAndSum(str));
       return 0;
}
