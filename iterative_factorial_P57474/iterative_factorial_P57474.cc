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

int factorial (int n) {
  int resultado{1};
  for (int i = 1; i <= n; i++) {
    resultado *= i;
  }
    return resultado;
}

int main () {
  int n;
    while (std::cin >> n) {
      std::cout << factorial(n) << std::endl;
    }
}    
