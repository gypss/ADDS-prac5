#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <vector>

class ReduceGeneric {
public:
	int reduce(std::vector<int> vec);
private:
	virtual int binaryOperator(int a, int b) = 0;
};

#endif