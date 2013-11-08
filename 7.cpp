#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void paixu(char array[], int low, int hight)
{
int i,j,t,m;
if(low<hight)
{
i = low;
j = hight;
t = array[low];
while(i<j)
{
while(i<j && array[j]>t)//开始和后面的比较，如果后面的比他大继续，如果后面的比它小交换之
{
j--;
}
if(i<j)//在没有越界（i是从前面开始，j是从后面开始）的情况下进行交换
{
m=array[i];
array[i]=array[j];
array[j]=m;
i++;//让前面的向后移动一个继续比较
}
while(i<j && array[i]<=t)//和前面的比较，如果前面的小于等于该关键数据继续，如果大于交换之
{
i++;
}
if(i<j)
{
m=array[j];
array[j]=array[i];
array[i]=m;
j--;
}
}
array[i]=t;//第一次比较结束，把i放到中间的位置，也即在i前面都比i小，在i后面都比i大
paixu(array, low, i-1);//前面部分实现递归
paixu(array, i+1, hight);//后面部分实现递归
}
}

main()
{
	FILE *p;
	char num[100][12];
	int i=0;
	if((p=fopen("h:\\rand100.txt","r"))==NULL)
        {
                printf("打不开文件");
                        exit(0);
        }
        while((fgets(num[i++],12,p))!=NULL);
	for(i=0;i<99;i++)
	{
		printf("%s",num[i]);
	}
         paixu(num,0,100);
	return 0;
}