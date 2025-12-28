#include<stdio.h>
int main()
{
	int i,rollnum,physics,chemistry,math;
	float per,sum,total;
	printf("Enter Your Roll number: ");
	scanf("%d",&rollnum);
	printf("Enter your score of PCM out of 100 : \n");
	scanf("%d %d %d",&physics, &chemistry, &math);
	sum=physics+chemistry+math;
	total=300.00;
	per=sum/total*100;
	printf("Your percentage : %f ",per);
}
