#include "Header.h"

double* input(int& n, TextBox^ T) 
{
	if((n = T->Lines->Length) == 0)
	{
		MessageBox::Show("Error", "Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);

		T->Focus();
		return 0;
	}
	n = T->Lines->Length;
	double* arr = new double[n];
	for (int i = 0; i < n; i++) 
	{
		*(arr + i) = Convert::ToDouble(T->Lines[i]);
	}
	return arr;
}

void output(double* arr, int n, ListBox^ l)
{
	l -> Items->Clear();
	if (n == 0) l->Items->Add("Массив пуст");
	else 
	{
		for (int i = 0; i < n; i++)
		{
			l->Items->Add(arr[i].ToString());
		}
	}
}