/********ÄæĞòÊä³ö***********/
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
int main()
{
	char line[100] ;
	char usr_A[15] = {' '};
	char old_A[15] = {' '};
	int num_B = 0;
	int i = 0;
	gets(line);
	while(scanf("%s",usr_A)!=EOF)
	{
		if(!strcmp(old_A," "))
			strcpy(old_A,usr_A);
		if(strcmp(usr_A,old_A)!=0)
			{
				for(i = num_B;i>=1;i--)
				{
					if(i!=1)
					printf("%d ",i);
					else
					printf("%d",i);
				}
				printf("\n");
				num_B = 1;
				strcpy(old_A,usr_A);
			}
		else
			num_B++;
		gets(line);
	}
	for(i = num_B;i>=1;i--)
	{
		if(i!=1)
			printf("%d ",i);
		else
			printf("%d",i);
	}
return 0;
}