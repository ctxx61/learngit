#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
FILE *p;
	char num[100][12];
	int i,j,k;
	char m[12];
	char t[12];
	if((p=fopen("h:\\rand100.txt","r"))==NULL)
	{
		printf("�򲻿��ļ���");
			exit(0);
	}
	while((fgets(num[i++],12,p))!=NULL)
	{
for(i=100/2;i>0;i=i/2)          //��������
{
for(j=i;j<100;j++)     //����ľ���ֱ������
{
strcpy(t,num[j]);
for(k=j-i;(k>=0 && t<num[k]);k=k-i)
{
strcpy(m,num[k+i]);
strcpy(num[k+i],num[k]);
strcpy(num[k],m);
}
strcpy(num[k+i],t);
}
}
for(i=0;i<100;i++)
{
printf("%s",num[i]);
}
	}
}