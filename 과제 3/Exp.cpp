#include "Exp.h"
#include <iostream>
#include <cmath>

// 기본 생성자
Exp::Exp() : Exp(1, 1) {}

// 매개변수 하나를 받는 생성자
Exp::Exp(int b) : Exp(b, 1) {}

// 매개변수 두개를 받는 생성자
Exp::Exp(int b, int e) : base(b), exponent(e) {}

double Exp::getValue() {
	return pow(base, exponent);
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exponent;
}

bool Exp::equals(Exp exp) {
	return getValue() == exp.getValue();
}

// 소멸자
Exp::~Exp() {}
