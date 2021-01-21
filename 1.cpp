#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
	
	int total = 0;

	for (int i = 2; i < 1000; ++i)
		if(i%3==0 || i%5==0)
			total += i;
	cout << total << endl;
}