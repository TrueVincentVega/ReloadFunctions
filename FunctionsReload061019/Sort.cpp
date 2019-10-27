#include "FunctionsReload.h"

template<typename T>
void Sort(T Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

//Моя сортировка
template<typename T>
void Sort(T Arr[ROWS][COLS])
{
	//Сортировка:
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (Arr[x][y] < Arr[i][j])
					{
						int temp = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = temp;
					}
				}
			}
		}

	}
}

//Сортировка на лекции
/*void Sort(int Arr[ROWS][COLS])
{
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = x; i < ROWS; i++)
			{
				//int j;
				//(i == x) ? j = y + 1 : j = 0; //тернарный оператор
				for (int j = (i == x) ? j = y + 1 : j = 0; j < COLS; j++)
				{
					if (Arr[x][y] > Arr[i][j])
					{
						Exchange(Arr[x][y], Arr[i][j]);
					}
				}
			}
		}
	}
}*/