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
                printf("�򲻿��ļ�");
                        exit(0);
        }
          for(f=0;f<100;f++)
		  {
			  fscanf(p,"%d",&b);
			  array[f]=b;
				}
//��������ʼ
for(i=1;i<100;i++)//Ĭ���±�Ϊ0���Ѿ�������õģ����Դ�1��ʼ
{
t = array[i];
j=i;
while((j>0)&&(array[j-1]>t))//���ǰ����������󽻻�֮
{
m=array[j-1];
array[j-1]=array[j];
array[j]=m;
j--;//������ϼ����Ƚ�
}
}
//�����������
for(i=0;i<100;i++)
{
printf("%d\n",array[i]);
}
}
