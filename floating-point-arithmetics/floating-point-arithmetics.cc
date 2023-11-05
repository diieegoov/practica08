/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Nov 7, 2022
 * @brief Shows floating point arithmetics
 *
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://stackoverflow.com/a/17341/12791643
 */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program compares two numbers and say if the are equals." << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wwrong number of parameters." << std::endl;
    std::cout << "The number of parameters that should been inputed is 2." << std::endl;
    return false;
  }
  return true;
}

double GetNum1(char *argv[]) {
  double number1 = std::stoi(argv[1]);
  return number1;
}

double GetNum2(char *argv[]) {
  double number2 = std::stoi(argv[2]);
  return number2;
}

bool AreEqual(const double number1, const double number2, const double epsilon) {
  if (number1 < number2) {
    if ((number2 - number1) < epsilon) {
      return 1;
    }
    else {
      return 0;
    }
  }
  else {
    if ((number1 - number2) < epsilon) {
      return 1;
    }
    return 0;
  }
}

void PrintResult(bool resultado) {
  if (resultado == 0) {
    std::cout << "NOT EQUALS" << std::endl;
  }
  else {
    std::cout << "EQUALS" << std::endl;
  }
}

int main(const int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  }
  double number1 = GetNum1(argv);
  double number2 = GetNum2(argv);
  const double epsilon = 1e-7;
  bool resultado = AreEqual(number1, number2, epsilon);
  PrintResult(resultado);

  return 0;
}
