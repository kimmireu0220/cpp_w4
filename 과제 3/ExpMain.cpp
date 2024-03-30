#include <iostream>
#include "Exp.h"

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	std::cout << "value of a: " << a.getValue() << ", value of b: " << b.getValue() << ", value of c: " << c.getValue() << std::endl;
	std::cout << "a의 베이스: " << a.getBase() << ", " << "a의 지수 " << a.getExp() << std::endl;

	if (a.equals(b))
		std::cout << "same value" << std::endl;
	else
		std::cout << "not same value" << std::endl;
}
