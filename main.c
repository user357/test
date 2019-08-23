#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float input = 0;

	if(argc <= 1)
	{
		printf("%s start\n",argv[0]);
	}
	else
	{
		input = atof(argv[1]);
	}

	printf("start = %.2f \n",input);
	return 0;
}
