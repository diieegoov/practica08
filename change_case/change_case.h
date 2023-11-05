/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * @author Diego Vegas Acosta alu0101651361@ull.edu.es
 * @date Nov 03 2023
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program transforms the lowercase letters in Capital ones and the Capital in lowercase." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wwrong number of parameters." << std::endl;
    std::cout << "The number of parameters that should been inputed is 3." << std::endl;
    return false;
  }
  return true;
}
