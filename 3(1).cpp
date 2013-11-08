#include <stdio.h>
void main()
{
int array[] = {9,43,567,1,45,23,123,54,234,987};
int length = sizeof(array)/sizeof(array[0]);
int i,j,t,m;
//插入排序开始
for(i=1;i<length;i++)//默认下标为0的已经是排序好的，所以从1开始
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
for(i=0;i<length;i++)
{
printf("%d \n",array[i]);
}
}