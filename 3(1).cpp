#include <stdio.h>
void main()
{
int array[] = {9,43,567,1,45,23,123,54,234,987};
int length = sizeof(array)/sizeof(array[0]);
int i,j,t,m;
//��������ʼ
for(i=1;i<length;i++)//Ĭ���±�Ϊ0���Ѿ�������õģ����Դ�1��ʼ
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
for(i=0;i<length;i++)
{
printf("%d \n",array[i]);
}
}