#include "FunctionsReload.h"

double Avg(int Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

double Avg(double Arr[], const int n)
{
	return Sum(Arr, n) / n;
}

double Avg(int Drr[ROWS][COLS])
{
	return (Sum(Drr, ROWS, COLS) / (ROWS + COLS));
}

double Avg(double Arr[ROWS][COLS])
{
	return (Sum(Arr) / (ROWS + COLS));
}

char Avg(char Arr[ROWS][COLS])
{
	int Summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Summ += (int)Arr[i][j];
		}
	}
	return((char)(Summ / (COLS + ROWS)));
}