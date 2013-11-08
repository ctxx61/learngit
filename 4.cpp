#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        FILE *p;
        char num[100][12];
        int i=0,j;
		int h,k,m=0;
        char t[12];
        if((p=fopen("h:\\rand100.txt","r"))==NULL)
        {
                printf("打不开该文件。");
                        exit(0);
        }
        while((fgets(num[i++],12,p))!=NULL);
                for(h=99;h>0;h=k)
        {
                for(k=0;i<h;i++)
        {j=i+1;
                if((strcmp(num[i],num[j]))>0)
                {
                strcpy(t,num[i]);
                strcpy(num[i],num[j]);
                strcpy(num[j],t);
                k=i;
                }
        }
        }
        for(i=0;i<100;i++)
        {
                printf("%s",num[i]);
        }
        return 0;
}