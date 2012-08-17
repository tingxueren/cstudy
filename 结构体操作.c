#include"iostream"
#include"algorithm"
#include"fstream"
using namespace std;
int num;
struct student
{
       char name[20];
       char id[20];
       int english;
       int chinese;
       int math;
       int science;
       int score;
}stu[65];
bool cmp(const student& a, const student& b)
{
      if(a.score!=b.score)
           return a.score>b.score;
}
void load()         // 将数据从磁盘读到内存
{
      fstream in;
      num=0;
      in.open("d:\\student.txt",ios::in);
      while(in>>stu[num].name>>stu[num].id>>stu[num].chinese>>stu[num].math>>stu[num].english>>stu[num].science)
     {
           num++;
     }
      return ;
}
void show()
{
      int j;
      for(j=0;j<num;j++)
            stu[j].score=stu[j].english+stu[j].chinese+stu[j].math+stu[j].science;
      sort(stu,stu+num,cmp);
      for(j=0;j<num;j++)
            printf("%-10s %-10s % 4d % 4d % 4d % 4d\n",stu[j].name,stu[j].id,stu[j].english,stu[j].chinese,stu[j].math,stu[j].science);
     //fstream out;
    //out.open("f:\\student.txt",ios::out);
    //for(j=0;j<num;j++)
           //out<<stu[j].name<<"   "<<stu[j].id<<"   "<<stu[j].chinese<<"   "<<stu[j].math<<"   "<<stu[j].english<<"   "<<stu[j].science<<endl;   
     return ;
}
int main(void)
{
     load();
     show();
     system("pause");
     return 0;
}