#include <iostream>
#include <iomanip>

float celsiusToFahrenheit(float c)
{

  const int freezing_point_adjustment = 32;
  const float f_diff_to_c = 1.8;

  std::cout << "Celsius: ";
  std::cin >> c;

  float c_to_f_result = (c * f_diff_to_c) + freezing_point_adjustment;
  
  std::cout << std::setprecision(1) << std::fixed;
  
  return c_to_f_result;
}

float fahrenheitToCelsius(float f)
{
  const int freezing_point_adjustment = 32;
  const float f_diff_to_c = 1.8;

  std::cout << "Fahrenheit: ";
  std::cin >> f;

  float f_to_c_result = (f - freezing_point_adjustment) / f_diff_to_c;
  
  std::cout << std::setprecision(1) << std::fixed;
  
  return f_to_c_result;
}

int main()
{

  float num;
  char opt = 'y';

  std::cout << '\n' << "Bem Vindo ao Temperature Converter" << '\n';
  std::cout << '\n';
  while (opt == 'y')
  {
    std::cout << "c -> [Celsius to Fahrenheit]\nf -> [Fahrenheit to Celsius] " << '\n';
    std::cin >> opt;

    std::cout << '\n';

    if (opt == 'C' || opt == 'c')
    {
      std::cout << celsiusToFahrenheit(num) << "F" << '\n';
    }
    
    else if(opt == 'F' || opt == 'f')
    
      std::cout << fahrenheitToCelsius(num) << "C" << '\n'; 

    else{
      std::cout << "Opção inválida" << '\n';
    }
   
    std::cout << '\n';
    std::cout << "continuar? y/n? " << '\n';
    std::cin >> opt;
    std::cout << '\n';
  }
  
  return 0;
}
