#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include <iomanip>

void print(int a[], int size);

bool comp_array(int a[], int size, int test[]);

int solution_search(int a[], int size, int target);

void solution_del(int a[], int& size, int target);

#endif //TESTS_H