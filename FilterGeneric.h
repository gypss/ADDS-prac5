#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric {
public:
    std::vector<int> filter(std::vector<int> vect);

private:
    virtual bool g(int element) = 0;
};


#endif