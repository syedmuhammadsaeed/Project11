#include<iostream>
using namespace std;
double power(double X, double Y) {
	double output = 1.0;
	for (int i = 0; i < Y; ++i) {
		output *= X;
	}
	return output;
}
 
double nterm(int n) {
	return 1.0 / power(n, n);

}

double  calculatesum(int term) {
	double sum = 0.0;
	cout << fixed;
	for (int i = 1; i <= term; ++i) {
		double term = nterm(i);
		sum += term;
		cout << "1/" << i << "^" << i << "=" << term << endl;
	}
	return sum;
}

int main() {
	int term;

	cout << "enter the value for nth term:";
	cin >> term;

	double sum = calculatesum(term);

	cout << "The sum of series to" << term << "trem is" << sum << endl;
	return 0;

}

