#include <stdio.h>
int main()
{
	int i = 1, sum =0,sumofcubes = 0;
	
	while(i <= 20)
	{
		sum+=i;
		sumofcubes += i*i*i;
		printf("%d\t%d\n", i, i*i*i);
		i++;
	}
	
	printf("\n sum of numbers: %d\n", sum);
	printf("sum of squares : %d\n", sumofcubes );

	return 0;
}