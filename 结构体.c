#include<stdio.h>
struct student //����ṹ��
{
 char name[20];
 char id[20];
 int  english;
 int  chinese;
 int  math;
 int  science; 
}stu[100];

void load()   //�����ݴӴ��̶����ڴ�
{
int i;
FILE *fp;
if((fp=fopen(student,"r"))==null)
   {
     printf("cannot open file\n");
	 exit(0);   
    }
for(i=0;i<100;i++) 
 fread(&str[i],sizeof(struct student),1,fp);
 fclose(fp);
 return ;
 }
 
 void show()//���򲢴�ӡ������
 {
 struct student *p[100],*temp;
 int i,j;
 for(i=o;i<100;i++)
   p[i]=&str[i];
   //*p[i]=str[i]
 for(i=0;i<100;i++)
 {
   for(j=i+1;j<100;j++)
   {
     if((str[i].english+str[i].chinese+str[i].math+str[i].science)<(str[j].english+str[j].chinese+str[j].math+str[j].science))
	 {temp=p[i];p[i]=p[j];p[j]=temp}
   }
 }
 for(i=o;i<100;i++)
 printf("%-20s%-20s%-5d%-5d%-5d%-5d",��*p[i]��.name,��*p[i]��.id,��*p[i]��.english,��*p[i]��.chinese,��*p[i]��.math,��*p[i]��.science);
 return ; 
 }
 int main()
 {
    load();
	show();
	system("pause");
	return 0; 
 }