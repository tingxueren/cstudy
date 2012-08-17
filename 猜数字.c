//      猜数字.c
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
#include"stdlib.h"
#include"time.h"
int main(void)
{
      int num,i,k;
      srand((unsigned)time(NULL));
      num=rand()% 900+100;
      i=0;
      while(1)
      {    printf("请输入数字：");
           scanf("%d",&k);
           i++;
           if(k==num)
           {
                 printf("恭喜你，猜对了\n");
                 break;
           }
           else if(k<num)
          {
                if(i<10)
                {
                       printf("猜小了，请继续\n");
                }
               else
               {
                      printf("Bye Bye\n");
                      break;
               }
          }
          else if(k>num)
          {
                if(i<10)
                {
                      printf("猜大了，请继续\n");
                }
                else
                {
                      printf("Bye Bye\n");
                      break;
                 }
          }
     }
     system("pause");
     return 0;
}

