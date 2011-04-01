/*
 * stat.cpp
 *
 *  Created on: 2011-3-30
 *      Author: Administrator
 */


/***************generated_label_train.txt******/
/*
int main()
{
	int usr_B_num = 0;
	char usr_A[15] = {'\n'};
	char usr_B[15] = {'\n'};
	char round[15] = {'\n'};
	char action[15] = {'\n'};
	char usr_A_old[15] = {' '};
	char usr_B_old[15] = {' '};
	while(scanf("%s %s %s %s",usr_A,usr_B,round,action)!=EOF)
	{
		if(strcmp(usr_A,usr_A_old))
		{
			printf("%s",usr_A);
			strcpy(usr_A_old,usr_A);
			printf("%s",usr_A);
			if(strcmp(usr_B_old," "))
				printf(" %d",usr_B_num);
			strcpy(usr_B_old," ");
			printf("%s",usr_A);
			usr_B_num = 0;
		}
		else if(!strcmp(usr_B,usr_B_old))
		{
			if(strcmp(action,"msg"))
				usr_B_num = 2;
			else if(strcmp(action,"click"))
				usr_B_num = 1;
		}
		else
		{
			printf(" %d",usr_B_num);
			strcpy(usr_B_old," ");
			usr_B_num = 0;
		}
	}
	return 0;
}*/
int main()
{
	int usr_B_num = 0;
	char usr_A[15] = {'\n'};
	char usr_B[15] = {'\n'};
	char round[15] = {'\n'};
	char action[15] = {'\n'};
	char usr_A_old[15] = {' '};
	char usr_B_old[15] = {' '};
	while(scanf("%s %s %s %s",usr_A,usr_B,round,action)!=EOF)
	{
		if(strcmp(usr_A,usr_A_old)||strcmp(usr_B,usr_B_old))
		{
			if(strcmp(usr_B_old," "))
				printf("%s %s %d\n",usr_A_old,usr_B_old,usr_B_num);
			strcpy(usr_A_old,usr_A);
			strcpy(usr_B_old,usr_B);
			usr_B_num = 1;
		}
		else
		{
			if(!strcmp(action,"rec"))
				usr_B_num++;
		}
	}
	printf("%s %s %d\n",usr_A_old,usr_B_old,usr_B_num);
	return 0;
}
