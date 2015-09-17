#ifndef BEIN_CS202_FRACTION_H
#define BEIN_CS202_FRACTION_H
#include <iostream>

namespace bein_cs202
{

  class Fraction
  {
  public:
    // CONSTRUCTOR                                                                                    
    Fraction(long initial_x = 0, long initial_y = 1);
    // MODIFICATION MEMBER FUNCTIONS                                                                  
    void set_numerator(long x);
    void set_denominator(long x);
    void reduce();
    long findGCD();

    // CONSTANT MEMBER FUNCTIONS                                                                      
    long get_numerator()const{return numerator;}
    long get_denominator()const{return denominator;}
    void print();
    // FRIEND FUNCTIONS                                                                               
    friend std::istream& operator >>(std::istream& ins, Fraction& target);

  private:
    long numerator, denominator;

  };

  Fraction operator +(const Fraction& f1, const Fraction& f2);
  Fraction operator -(const Fraction& f1, const Fraction&f2);
  Fraction operator *(const Fraction& f1, const Fraction&f2);
  Fraction operator /(const Fraction& f1, const Fraction&f2);
  bool operator ==(const Fraction& f1, const Fraction& f2);
  bool operator !=(const Fraction& f1, const Fraction& f2);
  std::ostream& operator <<(std::ostream& outs, const Fraction& source);
}

#endif


