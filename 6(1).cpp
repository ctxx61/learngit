#include <stdio.h>
void main()
{
int array[] = {1,445,754,77,35,123,754,876,54,3};
int length = sizeof(array)/sizeof(array[0]);
int i,j,k,t,m;
for(i=length/2;i>0;i=i/2)//控制增量
{
for(j=i;j<length;j++)//下面的就是直插排序
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
for(i=0;i<length;i++)
{
printf("%d \n",array[i]);
}
}