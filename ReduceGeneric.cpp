#include "ReduceGeneric.h"
using namespace std;

int ReduceGeneric::reduce(vector<int> vec) {

	if (vec.size() == 1) {
		return (int)vec[0];
	}

	int res = binaryOperator(vec[0], vec[1]);

	vec.erase(vec.begin());
	vec[0] = res;
	return reduce(vec);
}