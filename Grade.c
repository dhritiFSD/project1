#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("Enter your score");
	scanf("%d",&score);
	grade=(score>=90)?'A':
		(score>=80)?'B':
		(score>=70)?'C':
		(score>=60)?'D':
		(score>=50)?'E':'F'	;
		printf("%c \n ",grade);
		switch(grade){
			case 'A':
				printf("Excilent work");
				break;
			case 'B':
				printf("Good");
				break;
			case 'C':
				printf("Average");
				break;
			case 'D':
				printf("Poor");
				break;
			case 'E':
				printf("very poor");
				break;
			case 'F':
				printf("Fail");
				break;	
		}
		if (grade!='F')
		{
			printf("\n You are ready for next level \n ");
		}
		else
		{
			printf(" \n Try again \n");
		}
		
		
			
}
