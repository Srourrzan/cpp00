#include <iostream>
#include <string>

class Calc
{
private:
    int m_value;

public:
  Calc()
	: m_value (0)
  {}
  Calc& add(int value) { m_value += value; return *this;}
    Calc& sub(int value) { m_value -= value; return *this;}
    Calc& mult(int value) { m_value *= value; return *this;}
    int getValue() const { return m_value; }
  void reset() { m_value = 0; }
};

int main()
{
  Calc calc;
  calc.add(5).sub(3).mult(4); // returns void
    std::cout << calc.getValue() << '\n';
	calc.reset();
	std::cout << calc.getValue() << '\n';

    return 0;
}
