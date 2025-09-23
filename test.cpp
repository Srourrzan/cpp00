#include <iostream>

class Fraction
{
  int m_numerator;
  int m_denominator;
  Fraction(int numerator, int denominator)
	: m_numerator(numerator), m_denominator(denominator)
  {
  }

public:
  Fraction()
	: m_numerator(0), m_denominator(1)
  {
  }
  static bool createFraction(int numerator, int denominator, Fraction &outFraction);
  void print() const;
};

bool Fraction::createFraction(int numerator, int denominator, Fraction &outFraction)
{
  if (denominator == 0)
	return false;
  outFraction = Fraction(numerator, denominator);
  return true;
}

void Fraction::print() const
{
  std::cout << m_numerator << '/' << m_denominator << '\n';
}

int main()
{
  Fraction f;

  if (Fraction::createFraction(3, 0, f))
	{
	  std::cout << "Fraction created: ";
	  f.print();
	}
  else
	{
	  std::cout << "Bad fraction\n";
	}
  return (0);
}
