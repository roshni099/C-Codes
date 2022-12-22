//This program is to check whether usename and password are correct or not
#include<stdio.h>
int main()
{
	char user;
	int password;
	printf("USERNAME:");
	scanf("%c", &user);
	printf("\nPASSWORD:");
	scanf("%d", &password);
	if (user == 'a')
	{
		if (password == 12345)
		   {
		   	printf("\nLogin Successful");
		   }
		else
		   {
		   	printf("\nWrong Password");
		   }
	}
	else
	{
		printf("\nWrong Username, Try Again");
	}
	return 0;
}
