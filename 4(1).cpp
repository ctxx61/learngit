#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	
FILE *p;
	int f=0,b;
	int array[100];
	int k=0, s=0, i=0, j=0, m=0;
	if((p=fopen("h:\\Rand100.txt","r"))==NULL)
        {
                printf("打不开文件");
                        exit(0);
        }
          for(f=0;f<100;f++)
		  {
			  fscanf(p,"%d",&b);
			  array[f]=b;
				}
//冒泡排序开始
for(i =100-1;i>0;i=k)
{
for(j=0, k=0;j<i;j++)
{
if(array[j]>array[j+1])//把比较出来大的数据向后移动
{
m=array[j];
array[j]=array[j+1];
array[j+1]=m;
k=j;
}
}
}
//冒泡排序结束，输出显示排序的结果
for(s=0; s<100; s++)
{
printf("%d\n",array[s]);
}
}