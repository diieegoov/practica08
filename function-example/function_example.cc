 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file function_example.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Nov 03 2023    
   * @brief The programs does a mathematical operation
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>
#include <math.h>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program does a mathematical operation guided by a formula." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wwrong number of parameters." << std::endl;
    std::cout << "The number of parameters that should been inputed is 3." << std::endl;
    return false;
  }
  return true;
}

float GetNumber1(char* argv[]) {
  float number_1 = std::stoi(argv[1]);
  return number_1;
}
  
float GetNumber2(char* argv[]) {
  float number_2 = std::stoi(argv[2]);
  return number_2;
}

float GetNumber3(char* argv[]) {
  float number_3 = std::stoi(argv[3]);
  return number_3;
}

float MathOperation(float number_1, float number_2, float number_3) {
  float numerador = sqrt((2 * number_3) - 4);
  float denominador = ((number_1 * number_1) - (number_2 * number_2));
  float result = numerador / denominador;
  return result;
}

void PrintResult(float result) {
  std::cout << result << std::endl;
}

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 4)) {
    return 1;
  }
  float number_1 = GetNumber1(argv);
  float number_2 = GetNumber2(argv);
  float number_3 = GetNumber3(argv);
  float result = MathOperation(number_1, number_2, number_3);
  PrintResult(result);
 
  return 0;
}






