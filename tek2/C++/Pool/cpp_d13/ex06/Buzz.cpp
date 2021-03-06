/*
** Buzz.cpp for cpp_d09 in /home/gogo/rendu/tek2/cpp_d13/ex02/Buzz.cpp
**
** Made by Gauthier CLER
** Login   <gauthier.cler@epitech.eu>
**
** Started on  Mon Jan 16 11:08:18 2017 Gauthier CLER
** Last update Mon Jan 16 11:08:18 2017 Gauthier CLER
*/


#include <iostream>
#include "Buzz.h"

Buzz::Buzz(std::string name, std::string ascii) : Toy(BUZZ, name, ascii) {

}

Buzz::~Buzz() {

}

bool Buzz::speak(const std::string &statement) {
  std::cout << "BUZZ: ";
  return Toy::speak(statement);
}

bool Buzz::speak_es(const std::string &statement) {
  std::cout << "BUZZ: ";
  std::cout << this->getName() << " senorita \"" << statement << "\" senorita" << std::endl;
  return true;
}
