#include<stdio.h>
long long int factorial(long long int N)
{
	//complete this function
	//base case here
    if(N==0) return 1;
    return N*factorial(N-1);

	//recursive call here


}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%lld", factorial(N));
	return 0;
}
