#include "FilterOdd.h"

bool FilterOdd::g(int element) {
	if (element % 2 == 0) {
		return false;
	}
	else {
		return true;
	}
}