#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *p;
	char num[100][10];
	int i,h,k,m;
	char *t;
	if((p=fopen("h:\\rand100.txt","r"))==NULL)
	{
		printf("打不开文件。");
			exit(0);
	}
	while((fgets(num[i],10,p))!=NULL)
	{
		for(h=99;h>0;h=k)
	{
		for(k=0;m<h;m++)
	{
		if(strcmp(num[i],num[i+1])>0)    //冒泡开始
		{
		strcpy(t,num[i]);
		strcpy(num[i],num[i+1]);
		strcpy(num[i+1],t);
		k=m;
		i++;
		}
	}
	}
	}
	for(i=0;i<100;i++)
	{
		printf("%s",num[i]);
	}
	return 0;
}
