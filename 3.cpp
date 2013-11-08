#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert_sort(char arr[],int size)

{
 int i,j;
	 char temp;
 
for(i=1;i<size;i++)
 
{
  temp=arr[i];
  
for(j=i-1;j>=0 && temp<arr[j];j--)
  
{
   arr[j+1]=arr[j];
  }
  arr[j+1]=temp;
 }

for(i=0;i<size;i++)
 
{
  printf("%s ",arr[i]);
 }
}

main()
{
	FILE *p;
	char num[100];
	int i=0;
	if((p=fopen("H:\\rand100.txt","r"))==NULL)
	{printf("无法打开此文件.");
	exit(0);
	}
	fgets(num,12,p);
    insert_sort(num,100);
	return 0;
}