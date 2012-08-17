#include<stdio.h>
int Partition(int a[],int low,int high)
{
  int pivotkey = a[low];
  while(low<high)
	    {
	        if(low<high && a[high]>=pivotkey) --high;
	        a[low]=a[high];
	        if(low<high && a[low]<=pivotkey) ++low;
		    a[high]=a[low];
		       }
    a[low]=pivotkey;
      return low;
}
 
void Quick_Sort(int a[],int low,int high)
{
  if(low<high) 
	    {
		int poisition;    
	        poisition = Partition(a,low,high);
	        Quick_Sort(a,low,poisition-1);
	        Quick_Sort(a,poisition+1,high);
	      }
}
 
int main()
{
  int i;	
  int a[4]={45,56,23,5};
  Quick_Sort(a,0,3);
  for(i = 0; i <= 3; i++){
  	printf("%d\t",a[i]);
  }

  return 0;
}

