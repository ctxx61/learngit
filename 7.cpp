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
while(i<j && array[j]>t)//��ʼ�ͺ���ıȽϣ��������ı�����������������ı���С����֮
{
j--;
}
if(i<j)//��û��Խ�磨i�Ǵ�ǰ�濪ʼ��j�ǴӺ��濪ʼ��������½��н���
{
m=array[i];
array[i]=array[j];
array[j]=m;
i++;//��ǰ�������ƶ�һ�������Ƚ�
}
while(i<j && array[i]<=t)//��ǰ��ıȽϣ����ǰ���С�ڵ��ڸùؼ����ݼ�����������ڽ���֮
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
array[i]=t;//��һ�αȽϽ�������i�ŵ��м��λ�ã�Ҳ����iǰ�涼��iС����i���涼��i��
paixu(array, low, i-1);//ǰ�沿��ʵ�ֵݹ�
paixu(array, i+1, hight);//���沿��ʵ�ֵݹ�
}
}

main()
{
	FILE *p;
	char num[100][12];
	int i=0;
	if((p=fopen("h:\\rand100.txt","r"))==NULL)
        {
                printf("�򲻿��ļ�");
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