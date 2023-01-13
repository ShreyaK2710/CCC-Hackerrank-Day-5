#include<stdio.h>
int fibonacci(int N)
{
	//base cases here
    if(N<=1) return N;
	//recursive calls here
    return fibonacci(N-1)+fibonacci(N-2);
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", fibonacci(N));
	return 0;
}
