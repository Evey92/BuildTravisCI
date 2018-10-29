#pragma once
class TMath
{
public:
  TMath()= default;
  ~TMath() {};

  float suma(float num1, float num2)
  {
    return num1 + num2;
  }

  float resta(float num1, float num2)
  {
    return num1 - num2;
  }

  float multi(float num1, float num2)
  {
    return num1 * num2;
  }

  float divi(float num1, float num2)
  {
    return num1 / num2;
  }

};

