/**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file triangle_area.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program calculates the area of a triangle which sides enters in
   * input
   * @bug There are no known bugs
   * @see https://jutge.org/problems/
   */

#include <iostream>
#include <string>
#include <math.h>

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

double GetSide1(char *argv[]) {
  double side1 = std::stoi(argv[1]);
  return side1;
}

double GetSide2(char *argv[]) {
  double side2 = std::stoi(argv[2]);
  return side2;
}

double GetSide3(char *argv[]) {
  double side3 = std::stoi(argv[3]);
  return side3;
}

bool IsAValidTriangle(double side1, double side2, double side3) {
  if ((side1 + side2 < side3) || (side1 + side3 < side2) || (side2 + side3 < side1)) {
    return 0;
  }
  else {
    return 1;
  }
}

void PrintNoValid() {
  std::cout << "Not a valid Triangle" << std::endl;
}

double CalculateArea(double side1, double side2, double side3) {
  double semiperimetro = (side1 + side2 + side3) / 2;
  double area = sqrt(semiperimetro * (semiperimetro - side1) * (semiperimetro - side2) * (semiperimetro - side3));
  return area;
}

void PrintResult(double area) {
  std::cout << area << std::endl;
}

int main(const int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 4)) {
    return 1;
  }
  double side1 = GetSide1(argv);
  double side2 = GetSide2(argv);
  double side3 = GetSide3(argv);
  if (!IsAValidTriangle(side1, side2, side3)) {
    PrintNoValid();
  }
  double area = CalculateArea(side1, side2, side3);
  PrintResult(area);

  return 0;
}
