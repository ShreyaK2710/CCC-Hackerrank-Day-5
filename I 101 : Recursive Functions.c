void func(int n)//modify this function so it prints numbers in reverse
{
	if (n<1) return; //this is the base case.
	printf("%d ", n);
	func(n - 1); 
}//Hint : you can change the order of statements in the function to achieve your goal.
int main()
{
	func(5);
	return 0;
}
