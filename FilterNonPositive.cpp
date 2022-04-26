#include "FilterGeneric.h"
#include "FilterNonPositive.h"

bool FilterNonPositive::g(int element) {
	if (element < 0) {
		return true;
	}
	else {
		return false;
	}

}