#include "FilterGeneric.h"
#include <vector>
using namespace std;


vector<int> FilterGeneric::filter(vector<int> vect) {
    
	int length = vect.size();
	vector<int> EmptyVec;

	if (length == 1) {
		if (g(vect[0])) {
			return vect;
		}
		else {
			return EmptyVec;
		}
	}

	vect.pop_back();
	vector<int> filteredVec = filter(vect);

	if (g(vect[length-1])) {

		vector<int> element = { vect[length - 1] };
		filteredVec.insert(filteredVec.end(), element.begin(), element.end());
	}
	else {
		filteredVec.insert(filteredVec.end(), EmptyVec.begin(), EmptyVec.end());
	}

	return filteredVec;
	
}