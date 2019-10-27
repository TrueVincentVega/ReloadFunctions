#include "FunctionsReload.h"

int  Sum(int Arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

double  Sum(double Arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}

int  Sum(int Arr[ROWS][COLS])
{
	int Sum = 0;
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

double Sum(double Arr[ROWS][COLS])
{
	double Res = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Res += Arr[i][j];
		}
	}
	return(Res);
}

string Sum(char Arr[ROWS][COLS])
{
	string Res = "";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Res += Arr[i][j];
		}
	}
	return(Res);
}