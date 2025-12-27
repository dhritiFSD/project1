#include<stdio.h>
int main()
{
	int mood,i,j,k;
	printf("Welcome to mood detectore ?? \n");
	printf("Select youe mood : \n");
	printf("1. HAPPY \n");
	printf("2. ANGRY \n");
	printf("3. SAD \n" );
	printf("4. CHILL \n");
	printf("5. LONLY \n");
	printf("Enter your choice: ");
	scanf("%d",&mood);
	
	switch(mood)
	{
		case 1:
			printf(" You are Happy :\n");
			for(i=0;i<=5;i++)
			{
				for(j=0;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		case 2:
			printf(" You are Angry \n");
			for(i=0;i<=5;i++)
        	{
		      for(j=0;j<=i;j++)
				{
					printf("%d",41+j);
				}
				printf("\n");
			}
			break;
		case 3:
			printf(" You are Sad \n");
			for(i=5;i>=1;i--)
			{
				for(j=1;j<=i;j++)
				{
					printf("*");
				}	
				printf("\n");
			}
			break;
		case 4:
			printf(" You are chill \n");
		    for (i = 5; i >= 1; i--)
			 {
        		for (j = 1; j <= i; j++) 
				{
            		printf("%d ", j % 2);
       			}
       			 printf("\n");
   			 }
    		break;

			default:
				printf("Invalid choice! \n");
	}
}
