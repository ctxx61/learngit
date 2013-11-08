#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *p;
	char num[100][12],temp[12];
	int i;
	if((p=fopen("h:\\rand100.txt","r"))==NULL)
        {
                printf("打不开文件");
                        exit(0);
        }
        while((fgets(num[i++],14,p))!=NULL);
				for(i=0;i<100;i++)
				{
				printf("%s",num[i]);
				}
	return 0;
		}