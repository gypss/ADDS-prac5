#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
using namespace std;

int main(void) {

	vector<int> vec = { 1,2,-3,4, -5 };
	MapTriple mT;
	MapSquare mS;
	MapAbsoluteValue mA;

	cout << "Beginning vector: ";
	for (int i = 0; i < (int)vec.size(); i++) {
		cout << vec[i]<< " ";
	}
	cout << endl;

	vector<int> tripleVec = mT.map(vec);
	vector<int> squareVec = mS.map(vec);
	vector<int> absoluteVec = mA.map(vec);

	cout << "Trippled vector: ";
	for (int i = 0; i < (int)vec.size(); i++) {
	cout << tripleVec[i] << " ";
	}
	cout << endl;

	cout << "Squared vector: ";
	for (int i = 0; i < (int)squareVec.size(); i++) {
		cout << squareVec[i] << " ";
	}
	cout << endl;

	cout << "Absolute vector: ";
	for (int i = 0; i < (int)absoluteVec.size(); i++) {
		cout << absoluteVec[i] << " ";
	}
	cout << endl;
}