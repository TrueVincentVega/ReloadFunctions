#include "FunctionsReload.h"

template<typename T>
T Sum(T Arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

template<typename T>
T Sum(T Arr[ROWS][COLS])
{
	T Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += Arr[i][j];
		}
		cout << endl;
	}
	return Sum;
}


//string Sum(char Arr[ROWS][COLS])
//{
//	string Res = "";
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			Res += Arr[i][j];
//		}
//	}
//	return(Res);
//}