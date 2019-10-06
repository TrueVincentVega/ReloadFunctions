#include<iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;
//Прототипы функций - Functions declaration
void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(char Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(char Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[], const int n);
void Sort(double Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int  Sum(int Arr[], const int n);
double  Sum(double Arr[], const int n);
int  Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);


double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n);
//double  Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);

int  minValueIn(int Arr[], const int n);
double  minValueIn(double Arr[], const int n);

int  maxValueIn(int Arr[], const int n);
double  maxValueIn(double Arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	cout << "**************************************Functions (Функции)*************************************" << endl;
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
	const int SIZE = 8;
	char Crr[SIZE];
	FillRand(Crr, SIZE);
	Print(Crr, SIZE);
	////////////////////////////////////////////////////////////////////////////////////////////
	cout << "*********************************************************************************************" << endl;
	cout << "Двухмерные массивы" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	int Drr[ROWS][COLS] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	Print(Drr, ROWS, COLS);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "Сумма элементов массива: " << Sum(Drr, ROWS, COLS) << endl;
	//cout << "Среднее арифметическое массива : " << Avg(Drr, ROWS, COLS) << endl;

}
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
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
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

////////////////////////////////////////////////////////////////////////////////////////////////////
void Print(int Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(double Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(char Arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{

}

//реализация функий
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

///////////////////////////////////////////////////////////////////////////////
double Avg(int Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}

double Avg(double Arr[], const int n)
{
	return Sum(Arr, n) / n;
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
/////////////////////////////////////////////////////////////////////////////
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