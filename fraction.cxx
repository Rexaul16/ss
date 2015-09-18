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
    while (b != 0)
      {
        remainder = a % b;
        a = b;
        b = remainder;
      }
    return a;
  }
  istream& operator >>(istream& ins, Fraction& target)
  {
    ins >> target.numerator >> target.denominator;
    return ins;
  }
  Fraction operator +(const Fraction& f1, const Fraction& f2)
  {
    long num_sum, denom_sum;
    num_sum = (f1.get_numerator()*f2.get_denominator() + f1.get_denominator()*f2.get_numerator());
    denom_sum = (f1.get_denominator() * f2.get_denominator());
    Fraction sum(num_sum,denom_sum);
    return sum;
}
  Fraction operator *(const Fraction& f1, const Fraction& f2)
  {
    long num_times, denom_times;
    num_times = f1.get_numerator() * f2.get_numerator();
    denom_times = f1.get_denominator() * f2.get_denominator();
    Fraction times(num_times,denom_times);
    return times;
  }
  Fraction operator /(const Fraction& f1, const Fraction& f2)
  {
    long num_divide, denom_divide;
    num_divide = f1.get_numerator() * f2.get_denominator();
    denom_divide = f1.get_denominator() * f2.get_numerator();
    Fraction divide(num_divide, denom_divide);
    return divide;
  }
  bool operator ==(const Fraction& f1, const Fraction& f2)
  {
    long f;
    f = (f1 == f2);
    return f;
  }
  bool operator !=(const Fraction& f1, const Fraction& f2)
  {
    long f;
 }
  ostream& operator <<(ostream& outs, const Fraction& source)
  {
    outs << source.get_numerator() << " " << source.get_denominator();
    return outs;
  }
}


