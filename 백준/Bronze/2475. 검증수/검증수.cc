#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	cout << ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;

	

	return 0;
}