#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *p;
	int i=0,b;
	if((p=fopen("h:\\Rand100.txt","r"))==NULL)
        {
                printf("打不开文件");
                        exit(0);
        }
          for(i=0;i<100;i++)
		  {
			  fscanf(p,"%d",&b);
				printf("%d\n",b);
				}
	return 0;
		}