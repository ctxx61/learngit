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
                printf("�򲻿��ļ�");
                        exit(0);
        }
          for(f=0;f<100;f++)
		  {
			  fscanf(p,"%d",&b);
			  array[f]=b;
				}
//ð������ʼ
for(i =100-1;i>0;i=k)
{
for(j=0, k=0;j<i;j++)
{
if(array[j]>array[j+1])//�ѱȽϳ��������������ƶ�
{
m=array[j];
array[j]=array[j+1];
array[j+1]=m;
k=j;
}
}
}
//ð����������������ʾ����Ľ��
for(s=0; s<100; s++)
{
printf("%d\n",array[s]);
}
}