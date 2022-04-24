#include "MapGeneric.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> MapGeneric::map(vector<int> vect){

	int length = vect.size();

	if (length == 1) {
		vect[0] = f(vect[0]);
		return vect;
	}

	int tail = vect[length - 1];

	vect.pop_back();
	vector<int> mappedVec = map(vect);
	mappedVec.push_back(f(tail));
	return mappedVec;
	

}

