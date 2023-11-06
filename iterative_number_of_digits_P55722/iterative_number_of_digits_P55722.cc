 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica
   * @file P57548.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Nov      
   * @brief The program sums two numbers
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>

int number_of_digits(int n) {
  int c{0};
  while (n >= 10) {
    n /= 10; 
    c++;
  }   
  return c+1;
}

int main () {
  int numeros;
  while (std::cin >> numeros) {
    std::cout << number_of_digits(numeros) << std::endl;
  }

  return 0;
}
