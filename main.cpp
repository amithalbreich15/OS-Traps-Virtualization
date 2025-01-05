//
// Created by yuval on 3/20/2023.
//
#include <iostream>
#include "osm.h"

#define ITERATIONS 10000000

int main(){
  std::cout << "Arithmetic Operation time:" << std::endl;
  std::cout << osm_operation_time(ITERATIONS) << std::endl;
  std::cout << "Function Call time:" << std::endl;
  std::cout << osm_function_time(ITERATIONS) << std::endl;
  std::cout << "Trap time:" << std::endl;
  std::cout << osm_syscall_time(ITERATIONS) << std::endl;
}