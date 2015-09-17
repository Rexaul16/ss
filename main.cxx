include <iostream>
#include "fraction.h"

using namespace std;
using bein_cs202::Fraction;

void crossMultiply(Fraction a, Fraction b, Fraction &result)
{
  long m,x;

  result.set_numerator(a.get_numerator() * b.get_denominator() + a.get_denominator() * b.get_numerator());

  result.set_denominator((a.get_denominator() * b.get_denominator()));

}

void initializeFraction(Fraction &f, unsigned long numerator, unsigned long denominator)
{
  long m,x;

  f.set_numerator(numerator);
  f.set_denominator(denominator);
}

void findNthHarmonic(unsigned char n, Fraction &result)
{
  Fraction a, b;
  initializeFraction(a,1,1);
  initializeFraction(b,1,2);
  for(int i = 2; i<= n; i++)
    {
      b.set_denominator(i);
      crossMultiply(a,b,a);
    }
  result.set_denominator(a.get_denominator());
  result.set_numerator(a.get_numerator());
}

int main()
{
  int n;
  Fraction harmonic;
  cin >> n;
  if(n<=19)
    {
      findNthHarmonic(n,harmonic);
      harmonic.reduce();
      harmonic.print();
      cout << endl;
    }
  else if(n>=20)
    cout << "The number you input is too large to calculate" << endl;
      return 0;
}
