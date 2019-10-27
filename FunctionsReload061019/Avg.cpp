#include "FunctionsReload.h"

template<typename T>
double Avg(T Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

template<typename T>
double Avg(T Drr[ROWS][COLS])
{
	return (Sum(Drr)/(ROWS+COLS));
}


//char Avg(char Arr[ROWS][COLS])
//{
//	int Summ = 0;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			Summ += (int)Arr[i][j];
//		}
//	}
//	return((char)(Summ / (COLS + ROWS)));
//}