#include <iostream>
#include "fraction.h"

using namespace std;
using bein_cs202::Fraction;

void initializeFraction(Fraction &f, unsigned long numerator, unsigned long denominator)
{
  long m,x;
  f.set_numerator(numerator);
  f.set_denominator(denominator);
}
void findNthHarmonic(unsigned char n, Fraction &result)
{
  Fraction a, b,c;
  initializeFraction(a,1,n);
  for(int i = n-1; i> 0; i--)
    {
      initializeFraction(b,1,i);
      a = a + b;
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
      cout << harmonic.get_numerator() << "/" << harmonic.get_denominator() << endl;
     cout << endl;
    }
  else if(n>=20)
    cout << "The number you input is too large to calculate" << endl;
  return 0;
}
