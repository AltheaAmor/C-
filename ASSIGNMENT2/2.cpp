#include<stdio.h>
#include<math.h>

main()
{
	int a, b;
	// a value
	// b result
	printf("      Base 2     \n");
	printf(" Power     Result\n \n");
	for(a = 0; a <= 10; a++){
		b = pow(2, a );
		printf("%3d     %7d\n", a , b);
	}
	return 0;
}
