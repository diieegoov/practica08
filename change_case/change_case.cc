 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file change_case.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Nov 03 2023    
   * @brief The program tranforms the lowercase in Capital and the Cpital in lowercase
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>
#include <string>
#include <cctype>
#include "change_case.h"

std::string GetWord (char* argv[]) {
  std::string word = argv[1];
  return word;
}

std::string Change(std::string word) { 
  for (char& caracter : word) {
    if (std::islower(caracter)) {
      caracter = std::toupper(caracter);
    } 
    else {
     if (std::isupper(caracter)) {
       caracter = std::tolower(caracter);
     }
    }
  }
  return word;
}

void PrintWord(std::string new_word) {
  std::cout << new_word << std::endl;
}

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  std::string word = GetWord(argv);
  std::string new_word = Change(word);
  PrintWord(new_word);
  return 0;
}
