//This program is to count the number of 'a' present in all the names using array of pointers.
#include<stdio.h>
int main()
{
	char *p_228[5];
	char a_228[]= "yudhister", b_228[]= "bhim", c_228[]= "arjun", d_228[]= "nakul", e_228[]= "sahdev";
	int i_228, j_228, co=0;
	p_228[0]=a_228;
	p_228[1]=b_228;
	p_228[2]=c_228;
	p_228[3]=d_228;
	p_228[4]=e_228;
	for (i_228=0;i_228<5;i_228++)
	{
		for (j_228=0;p_228[i_228][j_228];j_228++)
		{
			if (p_228[i_228][j_228] == 'a')
			co++;
		}
	}
	printf("\nTotal no. of a is %d", co);
	return 0;
}
