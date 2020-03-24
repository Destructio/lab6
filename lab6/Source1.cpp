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

	double* newArr;
	if (!(pos == neg))
	{
		if (pos > neg) {
			newArr = new double[n];
			for (int i = 0; i < n; i++)
			{
				if (*(array + i) >= 0) {
					*(newArr + j) = *(array + i);
					j++;
			}
			}
		}
		else 
		{
			newArr = new double[n];
			for (int i = 0; i < n; i++)
			{
				if (*(array+i) < 0) {
					*(newArr + j) = *(array + i);
					j++;
				}
			}	
		}
	}
	n = j;
	return newArr;
}
