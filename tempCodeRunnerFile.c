if(n==0){
		return n;
	}
	int fibN=fib(n-1)+fib(n-2);
	printf("%d",fibN);
	return fibN;