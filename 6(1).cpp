#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *p;
	int f=0,b;
	int array[100];
    int i,j,k,t,m;
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
for(i=100/2;i>0;i=i/2)//控制增量
{
for(j=i;j<100;j++)//下面的就是直插排序
{
t = array[j];
for(k=j-i;(k>=0 && t<array[k]);k=k-i)
{
m = array[k+i];
array[k+i]=array[k];
array[k]=m;
}
array[k+i]=t;
}
}
for(i=0;i<100;i++)
{
printf("%d\n",array[i]);
}
}