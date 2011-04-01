/*
 * sign.c
 *
 *  Created on: 2011-3-23
 *      Author: Administrator
 */


#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iostream>


/***********sort_train.txt***************/
using namespace std;
int main()
{

	char usr_A[15] = "\n";
	char usr_B[15] = "\n";
	char word[15] = {'\n'};
	char line[100];
	char round[10] = {'\n'};
	string usr_A_str;
	string usr_B_str;
	string round_str;
	gets(line);
	while(scanf("%s %s %s %s",usr_A,usr_B,round,word)!=EOF)
	{
		usr_A_str = usr_A;
		usr_B_str = usr_B;
		round_str = round;
		if(usr_A_str == string("164276"))
			continue;
		int i = 6-usr_A_str.length();
		for(;i>=1;i--)
			usr_A_str = "0"+usr_A_str;
		i = 6-usr_B_str.length();
		for(;i>=1;i--)
			usr_B_str = "0"+usr_B_str;
		i = 5 - round_str.length();
		for(;i>=1;i--)
			round_str = "0"+round_str;
			cout<<usr_B_str<<" "<<usr_A_str<<" "<<round_str<<" "<<word<<endl;
	}
}

