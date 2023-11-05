 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file random_numbers.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program gives a random number between the interval of the two numbers that enters in input
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>
#include <cstdlib>
#include <string>


void PrintProgramPurpose() {
  std::cout << "The program gives a random number between the interval of the two numbers that enters in input." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wwrong number of parameters." << std::endl;
    std::cout << "The number of parameters that should been inputed is 2." << std::endl;
    return false;
  }
  return true;
}

int GetNum1 (char* argv[]) {
  int numero_1 = std::stoi(argv[1]);
  return numero_1;
}

int GetNum2 (char* argv[]) {
  int numero_2 = std::stoi(argv[2]);
  return numero_2;
}

int ChooseRandom(int numero_1, int numero_2) {
  int numero_random = std::rand() % numero_2 + numero_1;
  /** 
    * Es una selección semialeatoria, por lo que el número escogido en este
    * intervalo de dos números será aleatorio, pero al ejecutar el programa de
    * nuevo, será siempre el mismo número aleatorio el que aparezca
    */
  return numero_random;
}

void PrintResult(int numero_random) {
  std::cout << numero_random << std::endl;
}

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
      return 1;
      }
  int numero_1 = GetNum1(argv);
  int numero_2 = GetNum2(argv);
  int numero_random = ChooseRandom(numero_1, numero_2);
  PrintResult(numero_random);

  return 0;
}
