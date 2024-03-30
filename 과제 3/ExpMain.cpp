#include <iostream>
#include "Exp.h"

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	std::cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << std::endl;
	std::cout << "Base of a: " << a.getBase() << ", " << "Exponent of a " << a.getExp() << std::endl;

	if (a.equals(b))
		std::cout << "same value" << std::endl;
	else
		std::cout << "not same value" << std::endl;
}
