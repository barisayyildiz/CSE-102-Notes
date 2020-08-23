#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int *ptr;
	ptr = (int *)malloc(10 * sizeof(int));

	if(ptr != NULL)
	{
		printf("Memory allocated successfully...\n");
	}


	//fill the array
	for(int i=0; i<10; i++)
	{
		ptr[i] = i*3;
	}



	//print the array
	for(int i=0; i<10; i++)
	{
		printf("%d\n", ptr[i]);
	}


	return 0;

}