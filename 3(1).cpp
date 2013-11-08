#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *p;
	int f=0,b;
	int array[100];
    int i,j,t,m;
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
//插入排序开始
for(i=1;i<100;i++)//默认下标为0的已经是排序好的，所以从1开始
{
t = array[i];
j=i;
while((j>0)&&(array[j-1]>t))//如果前面的数比它大交换之
{
m=array[j-1];
array[j-1]=array[j];
array[j]=m;
j--;//交换完毕继续比较
}
}
//插入排序结束
for(i=0;i<100;i++)
{
printf("%d\n",array[i]);
}
}
