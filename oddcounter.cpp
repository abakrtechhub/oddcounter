#include <iostream>

using namespace std;

int main()
{
	int i, x, a, b, c;
	c = 2;
	b = 3;
		for (i=1; i<=20; i++)
	{
		a = c*i;
		x = b-a;
		cout << x << endl;
		x, a = 0;
		b += 4;
	}	
	return 0;
}
