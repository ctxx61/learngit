#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	FILE *p,*p2;
	char num[100][12];
	int i=0,m=0,k,h,l;
	char *t;
	if((p=fopen("H:\\rand100.txt","r"))==NULL)
	{printf("�޷��򿪴��ļ�.");
	exit(0);
	}
	while(fgets(num[i],10,p)!=NULL)
	printf("��ȷ˳��Ϊ��\n");
	for(i=0;i<99;i++)
	{printf("%s",num[i]);
	}
	return 0;
}
