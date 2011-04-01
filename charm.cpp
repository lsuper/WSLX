#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iostream>
int click[1000000] = {0};
int msg[1000000] = {0};
int rec[1000000] = {0};
int preclick[1000000] = {0};
int main()
{
	int usr_A=0,usr_B,old_A=-1,round;
	char action[10];
	int *pre_click = new int[1000000];
	int click = 0;
while(scanf("%d %d %d %s",&usr_A,&usr_B,&round,action)!=EOF)
{
	if(usr_A!=old_A)
	{
		delete pre_click;
		click = 0;
		pre_click = new int[1000000];
	}
	if(!strcmp(action,"rec"))
	{
		rec[usr_B]++;
		pre_click[usr_B]++;
	}
	if(!strcmp(action,"click"))
	{
		click++;
		click[usr_B]++;
		preclick[usr_B]+= (int)pow(0.5,click-1)*pre_click[usr_B];
	}
	if(!strcmp(action,"msg"))
		msg[usr_B]++;

}
printf("usr rec click msg");
for(int i = 0;i<1000000;i++)
{
	printf("%d   %d   %d   %d",i,rec[i],click[i],msg[i]);
}
	return 0;

}