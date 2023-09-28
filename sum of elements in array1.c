#include<stdio.h>
main()
{
	int i,sum;
	sum=0;
	int arr[6];
	printf("Enter the elements of array:-\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The Elements are:-\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("The Sum of the elements in array = ");
	 for (i=0;i<5;i++)
	 {
	 	sum += arr[i];
	 }
	printf("%d",sum);
	
}
