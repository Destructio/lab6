#pragma once
using namespace System;
using namespace System::Windows::Forms;

#include <cmath>
#include <vector>

double* createNewArray(double*, int&);
void output(double*,int , ListBox^);
double* input(int& n, TextBox^ T);