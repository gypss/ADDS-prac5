#include "FilterForTwoDigitPositive.h"
#include <cmath>

bool FilterForTwoDigitPositive::g(int element) {
	int digits = log10(element) + 1;

	if (element >= 0 && digits == 2) {
		return true;
	}
	else {
		return false;
	}
}