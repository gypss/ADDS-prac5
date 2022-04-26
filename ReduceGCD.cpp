#include "ReduceGCD.h"
using namespace std;

int ReduceGCD::binaryOperator(int a, int b) {
	if (a == 0 || b == 0) {
		return 0;
	}

	if (a == b) {
		return a;
	}

	if (a < b) {
		return binaryOperator(a, b - a);
	}
	else
		return binaryOperator(a - b, a);

}