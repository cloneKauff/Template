// Morgan Kauffer
// CIS 1202 501
// April 28, 2023

#include<iostream>

using namespace std;

template <typename T>

T half(T val) {

	T result;

	result = val / 2;

	if (*typeid(val).name() == 'i') {

		if (result * 2 != val)

		{
			result++; 
		}

	}

	return result;

}

int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	// displaying all of the half values

	cout << "The half value of " << a << " = " << half(a) << "\n";

	cout << "The half value of " << b << " = " << half(b) << "\n";

	int d = static_cast<int>(c);
	cout << "The half value of " << (c) << " = " << half(d) << "\n";

}