#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric {
public:
	std::vector<int> map(std::vector<int> vect);

private:
	virtual int f(int element) = 0;

};

#endif