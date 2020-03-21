#include "Header.h"

double* createNewArray(double* array, int& n)
{
	int pos, neg;

	pos = 0;
	neg = 0;
	int j = 0;


	for (int i = 0; i < n; i++) 
	{
		if (*(array+i) >= 0) pos++;
		else neg++;
	}


	double* arr;
	if (!(pos == neg))
	{
		if (pos > neg) {
			arr = new double[n];
			for (int i = 0; i < n; i++)
			{
				if (*(array + i) >= 0) {
					*(arr + j) = *(array + i);
					j++;
			}
			}
		}
		else 
		{
			arr = new double[n];
			for (int i = 0; i < n; i++)
			{
				if (*(array+i) < 0) {
					*(arr + j) = *(array + i);
					j++;
				}
			}
			
		}
	}
	n = j;
	return arr;
}
