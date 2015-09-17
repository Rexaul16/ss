#include <iostream>
#include "assignment4.cpp"
using namespace std;
namespace bein_cs202
{
  Fraction::Fraction(long initial_x, long initial_y)
  {
    numerator = initial_x;
    denominator = initial_y;
  }

  void Fraction:: set_numerator(long x)
  {
    numerator = x;
  }
  void Fraction:: set_denominator(long x)
  {
    denominator = x;
  }
  void Fraction::reduce()
  {
    if (numerator % denominator == 0) return;
    long gcd = findGCD();
    if (gcd != 0)
      {
        numerator /= gcd;
        denominator /= gcd;
      }
  }
  long Fraction::findGCD()
  {
    long a = numerator, b = denominator, remainder = a % b;
    while (remainder != 0)
      {
        remainder = a % b;
        a = b;
        b = remainder;
      }
    return a;
  }


  void Fraction::print()
  {
    cout << numerator << "/" << denominator << endl;
  }


}

