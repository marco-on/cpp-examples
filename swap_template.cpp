//University of California Santa Cruz. C++ for C programmers, Part A. Ira Pohl. 1.10. min 15#include <stdio.h>
#include <iostream>
#include <complex>
 
using namespace std;

template <class TEST>
inline void swapo(TEST& d, TEST& e)
{
	TEST temp = d;
	d = e;
	e = temp;
}

int main (void)
{
	int m = 5, n = 10;
	double x = 5.3, y = 10.6;
	complex<double> r(2.4,3.5), s(3.4,6.7);
	
	cout << "inputs: " << m << " , " << n << endl;
	swapo(m, n); // passing the variables by reference
	cout << "outputs: " << m << " , " << n << endl;
	cout << "double inputs: " << x << " , " << y << endl;
	swapo(x, y);
	cout << "double outputs: " << x << " , " << y << endl;
	cout << "complex inputs: " << r << " , " << s << endl;
	swapo(r, s);
	cout << "complex outputs: " << r << " , " << s << endl;
	return 0;
}