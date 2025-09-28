#include <iostream>
#include <ctime>

class Test
{
  int _j;

public:
  static int _i;
  Test(int j);
  int getID() const;
  int getJ() const;
};

Test::Test(int j): _j(j) {}

int Test::getID() const
{
  return (_i);
}

int Test::getJ() const
{
  return (_j);
}

int main()
{
  int Test::_i = 3;
  Test t(2);

  std::cout << "t.j = " << t.getJ() << '\n';
  std::cout << Test::_i << '\n';
  return (0);
}
