#include "FunctionsReload.h"

template<typename T>
T  maxValueIn(T Arr[], const int n)
{
	T max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)max = Arr[i];
	}
	return max;
}

template<typename T>
T maxValueIn(T Arr[ROWS][COLS])
{
	T max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max) max = Arr[i][j];
		}

	}
	return max;
}