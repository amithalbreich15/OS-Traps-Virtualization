//
// Created by yuval on 3/18/2023.
//
#include "osm.h"
#include <sys/time.h>
#include <cmath>

#define UNROLL_FACTOR 10

double osm_operation_time(unsigned int iterations){
  if (iterations <= 0){
    return -1;
  }
  double sum = 0;
  unsigned int remainder = iterations % UNROLL_FACTOR;
  if (remainder != 0){
    iterations += UNROLL_FACTOR - remainder;
  }
  for (unsigned int i=0; i<iterations / UNROLL_FACTOR; i++){
    timeval tim{};
    timeval tim1{};
    int a = 0;
    gettimeofday (&tim, nullptr);
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    a = 1 + 1;
    gettimeofday (&tim1, nullptr);
    double nanos_before = tim.tv_sec*pow(10, 9) + tim.tv_usec*pow(10, 3);
    double nanos_after = tim1.tv_sec*pow(10, 9) + tim1.tv_usec*pow(10, 3);
    double diff = nanos_after - nanos_before;
    sum += diff;
  }
  sum /= iterations;
  return sum;
}

void empty_func(){}

double osm_function_time(unsigned int iterations){
  if (iterations <= 0){
    return -1;
  }
  double sum = 0;
  unsigned int remainder = iterations % UNROLL_FACTOR;
  if (remainder != 0){
    iterations += UNROLL_FACTOR - remainder;
  }
  for (unsigned int i=0; i<iterations / UNROLL_FACTOR; i++){
    timeval tim{};
    timeval tim1{};
    gettimeofday (&tim, nullptr);
    empty_func();
    empty_func();
    empty_func();
    empty_func();
    empty_func();
    empty_func();
    empty_func();
    empty_func();
    empty_func();
    empty_func();
    gettimeofday (&tim1, nullptr);
    double nanos_before = tim.tv_sec*pow(10, 9) + tim.tv_usec*pow(10, 3);
    double nanos_after = tim1.tv_sec*pow(10, 9) + tim1.tv_usec*pow(10, 3);
    double diff = nanos_after - nanos_before;
    sum += diff;
  }
  sum /= iterations;
  return sum;
}

double osm_syscall_time(unsigned int iterations){
  if (iterations <= 0){
    return -1;
  }
  double sum = 0;
  unsigned int remainder = iterations % UNROLL_FACTOR;
  if (remainder != 0){
    iterations += UNROLL_FACTOR - remainder;
  }
  for (unsigned int i=0; i<iterations / UNROLL_FACTOR; i++){
    timeval tim{};
    timeval tim1{};
    gettimeofday (&tim, nullptr);
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    OSM_NULLSYSCALL;
    gettimeofday (&tim1, nullptr);
    double nanos_before = tim.tv_sec*pow(10, 9) + tim.tv_usec*pow(10, 3);
    double nanos_after = tim1.tv_sec*pow(10, 9) + tim1.tv_usec*pow(10, 3);
    double diff = nanos_after - nanos_before;
    sum += diff;
  }
  sum /= iterations;
  return sum;
}
