#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
int array[10] = {1,2,11,22,33,4,23,234,4,6};
int length = sizeof(array)/sizeof(array[0]);
int k=0, s=0, i=0, j=0, m=0;
//ð������ʼ
for(i = length-1;i>0;i=k)
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
for(s=0; s<length; s++)
{
printf("%d \n",array[s]);
}
}