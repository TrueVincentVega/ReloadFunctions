#include "FunctionsReload.h"

int  maxValueIn(int Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}

double  maxValueIn(double Arr[], const int n)
{
	double max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}

int maxValueIn(int Arr[ROWS][COLS])
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}

	}
	return max;
}

double maxValueIn(double Arr[ROWS][COLS])
{
	double max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}
	}
	return max;
}

char maxValueIn(char Arr[ROWS][COLS])
{
	char
		max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}
	}
	return max;
}