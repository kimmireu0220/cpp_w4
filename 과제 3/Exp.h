#ifndef EXP_H
#define EXP_H

class Exp {
private:
    int base;
    int exponent;

public:
    Exp();
    Exp(int b);
    Exp(int b, int e);
    double getValue();
    int getBase();
    int getExp();
    bool equals(Exp a);
    ~Exp();
};

#endif // EXP_H
