#include <string>

#include "foo.hpp"

std::string foo(int x) {

	if (x > 0) {
		return std::string("positive");
	}
	else if (x < 0) {
		return std::string("negative");
	}
	else {
		return std::string("zero");
	}

}

