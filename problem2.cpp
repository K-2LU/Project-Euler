/* first a fibonacci generator */
#include <iostream>
#include <fstream>

using namespace std;

int fibo_gen();

int main()
{
	freopen("input.txt", "w", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);

	int t = fibo_gen();
	printf("%d\n", t);
}

int fibo_gen()
{
	int a, b, fib;
	int total = 0;
	a = 1; b = 1; fib = a; 
	for (int i = 0; fib < 4000000; ++i)
	{
		if(fib%2==0)
			total += fib;
		//cout << fib << endl;
		fib = a + b;
		a = b;
		b = fib;
	}
	return total;
}