
#include <stdlib.h>
#include <stdio.h>

void foo(int array1[], int array2[],int temp[])
{
	int a;
	for (a = 0;a <= 10;a++)
	{
		temp[a] = array1[a];
		array1[a] = array2[a];
		array2[a] = temp[a];
	}
}


void main()
{
	int a,b;
	int owo[10] = { 1, 6, 3, 4, 1, 0, 1, 8, 0, 0 };
	int ay[10] = { 2, 6, 4, 5, 1, 3, 8, 6, 10, 0 };
	int pregat[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	printf("before...\n");

	for (a = 0;a < 10;a++)
	{
		printf("%d ", owo[a]);
	}

	printf("\n");

	for (a = 0;a < 10;a++)
	{
		printf("%d ", ay[a]);
	}

	printf("\nafter...\n");

	foo(owo,ay,pregat);

	for (a = 0;a < 10;a++)
	{
		printf("%d ", owo[a]);
	}

	printf("\n");

	for (a = 0;a < 10;a++)
	{
		printf("%d ", ay[a]);
	}

	printf("\n");

	for (a = 0;a < 10;a++)
	{
		if (ay[a] == owo[a])
			printf(" this number is the same in both arrays ---> %d\n", ay[a]);
		else
			printf(" this numbers are diffrent in both arrays ---> %d %d\n",owo[a], ay[a]);
		
	}
	
	

}