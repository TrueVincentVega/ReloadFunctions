#include<iostream>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;
const int ROWS = 4;
const int COLS = 5;

//Прототипы функций - Functions declaration
//FillRand
void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(char Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS]);
void FillRand(char Arr[ROWS][COLS]);

//Print
template<typename T>
void Print(T Arr[], const int n);

template<typename T>
void Print(T Arr[ROWS][COLS]);
//Sort
void Sort(int Arr[], const int n);
void Sort(double Arr[], const int n);
void Sort(char Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double Arr[ROWS][COLS]);
void Sort(char Arr[ROWS][COLS]);

//Sum
int  Sum(int Arr[], const int n);
double  Sum(double Arr[], const int n);
int  Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double Arr[ROWS][COLS]);
string Sum(char Arr[ROWS][COLS]);

//Avg
double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n);
double Avg(int Arr[ROWS][COLS]);
double Avg(double Arr[ROWS][COLS]);
char Avg(char Arr[ROWS][COLS]);

//minValueIn
int  minValueIn(int Arr[], const int n);
double  minValueIn(double Arr[], const int n);
int minValueIn(int Arr[ROWS][COLS]);
double minValueIn(double Arr[ROWS][COLS]);
char minValueIn(char Arr[ROWS][COLS]);

//maxValueIn
int  maxValueIn(int Arr[], const int n);
double  maxValueIn(double Arr[], const int n);
int maxValueIn(int Arr[ROWS][COLS]);
double maxValueIn(double Arr[ROWS][COLS]);
char maxValueIn(char Arr[ROWS][COLS]);


void main()
{
	setlocale(LC_ALL, "Russian"); //set russian lang in locale
	cout << "**************************************FUNCTIONS IN C++ (ФУНКЦИИ В C++)*************************************" << endl;
	cout << "ОДНОМЕРНЫЕ МАССИВЫ:" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\Int" << endl;
	const int n = 5;
	int Arr[n];
	cout << "*********************************************************************************************" << endl;
	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "Сумма элементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, n) << endl;

	//////////////////////////////////////////////////////////////
	cout << "\t\t\Double" << endl;
	const int m = 10;
	double Brr[m];
	cout << "*********************************************************************************************" << endl;
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "Сумма элементов массива: " << Sum(Brr, m) << endl;
	cout << "Среднее арифметическое : " << Avg(Brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Brr, m) << endl;
	/////////////////////////////////////////////////////////////////////////////////////////
	cout << "*********************************************************************************************" << endl;
	cout << "\t\t\Char" << endl;
	const int SIZE = 10;
	char Crr[SIZE];
	FillRand(Crr, SIZE);
	Print(Crr, SIZE);
	Print(Crr, SIZE);
	Print(Crr, SIZE);
	////////////////////////////////////////////////////////////////////////////////////////////
	cout << "*********************************************************************************************" << endl;
	cout << "ДВУХМЕРНЫЕ МАССИВЫ:" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\INT" << endl;
	int Drr[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	Print(Drr);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	FillRand(Drr, ROWS, COLS);
	Print(Drr);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "Сумма элементов массива: " << Sum(Drr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое массива : " << Avg(Drr) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Drr) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Drr) << endl;

	////////////////////////////////////////////////////////////////////////////
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\DOUBLE" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	double Frr[ROWS][COLS];
	FillRand(Frr);
	Print(Frr);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	Sort(Frr);
	Print(Frr);
	cout << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "Сумма элементов массива: " << Sum(Frr) << endl;
	cout << "Среднее арифметическое массива " << Avg(Frr) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Frr) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Frr) << endl;

	//////////////////////////////////////////////////////////////
//	cout << "---------------------------------------------------------------------------------------------" << endl;
//	cout << "\t\t\CHAR" << endl;
//	cout << "---------------------------------------------------------------------------------------------" << endl;
//	char Grr[ROWS][COLS];
//	FillRand(Grr);
//	Print(Grr);
//	cout << "---------------------------------------------------------------------------------------------" << endl;
//	Sort(Grr);
//	Print(Grr);
//	cout << "---------------------------------------------------------------------------------------------" << endl;
//	cout << "Сумма элементов массива: " << Sum(Grr) << endl;
//	cout << "Среднее арифметическое массива: " << Avg(Grr) << endl;
//	cout << "Минимальное значение в массиве: " << minValueIn(Grr) << endl;
//	cout << "Максимальное значение в массиве: " << maxValueIn(Grr) << endl;
//	cout << "*********************************************************************************************" << endl;
//	cout << "\t\t\tДА ПРИБУДЕТ С ВАМИ СИЛА!!!" << endl;
}

//реализация функий
///////////////////////////////////////////////////////////////////////////////////////////////////
void FillRand(int Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void FillRand(double Arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}

void FillRand(char Arr[], const int n)
{
	//Заполнение массива случайными символами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand();
	}
}


void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;

		}
	}
}

void FillRand(double Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 10000;
			Arr[i][j] /= 100;
		}
	}
}

void FillRand(char Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 255;
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T>
void Print(T Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void Print(T Arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
void Sort(int Arr[], const int n)
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

void Sort(double Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

void Sort(char Arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				char buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}

//Моя сортировка
void Sort(int Arr[ROWS][COLS])
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

void Sort(double Arr[ROWS][COLS])
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
						double buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}
	}
}

void Sort(char Arr[ROWS][COLS])
{
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
						double buffer = Arr[x][y];
						Arr[x][y] = Arr[i][j];
						Arr[i][j] = buffer;
					}
				}
			}
		}
	}
}

///////////////////////////////////////////////////////////
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

int  Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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

///////////////////////////////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////
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