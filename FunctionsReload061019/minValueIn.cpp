#include "FunctionsReload.h"

template<typename T>
T minValueIn(T Arr[], const int n)
{
	T min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)min = Arr[i];
	}
	return min;
}

template<typename T>
T minValueIn(T Arr[ROWS][COLS])
{
	T min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min) min = Arr[i][j];
		}

	}
	return min;
}
