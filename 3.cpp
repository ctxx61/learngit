#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
void main()
{
FILE *p;
	char array[100][12];
int i=0,j;
char t[12],m[12];
if((p=fopen("h:\\rand100.txt","r"))==NULL)
        {
                printf("打不开文件");
                        exit(0);
        }
        while((fgets(array[i++],12,p))!=NULL);
		fclose(p);
//插入排序开始
for(i=1;i<100;i++)//默认下标为0的已经是排序好的，所以从1开始
{
strcpy(t,array[i]);
j=i;
while((j>0)&&(strcmp(array[j-1],t))>0)//如果前面的数比它大交换之
{
strcpy(m,array[j-1]);
strcpy(array[j-1],array[j]);
strcpy(array[j],m);
j--;
}
}

for(i=0;i<100;i++)
{
printf("%s",array[i]);
}
}