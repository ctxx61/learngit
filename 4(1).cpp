#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
int array[10] = {1,2,11,22,33,4,23,234,4,6};
int length = sizeof(array)/sizeof(array[0]);
int k=0, s=0, i=0, j=0, m=0;
//冒泡排序开始
for(i = length-1;i>0;i=k)
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
for(s=0; s<length; s++)
{
printf("%d \n",array[s]);
}
}