#include "FunctionsReload.h"

int  minValueIn(int Arr[], const int n)
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}

double  minValueIn(double Arr[], const int n)
{
	double min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}

int minValueIn(int Arr[ROWS][COLS])
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}

	}
	return min;
}

double minValueIn(double Arr[ROWS][COLS])
{
	double min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}

	}
	return min;
}

char minValueIn(char Arr[ROWS][COLS])
{
	char min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}
	}
	return min;
}