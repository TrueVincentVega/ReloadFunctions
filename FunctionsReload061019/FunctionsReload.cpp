#include<iostream>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;
const int ROWS = 4;
const int COLS = 5;

#define INT_ARR1
#define DOUBLE_ARR1
#define CHAR_ARR1
#define INT_ARR2
#define DOUBLE_ARR2
#define CHAR_ARR2

//��������� ������� - Functions declaration
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
template<typename T>
void Sort(T Arr[], const int n);

template<typename T>
void Sort(T Arr[ROWS][COLS]);


//Sum
int  Sum(int Arr[], const int n);
double  Sum(double Arr[], const int n);
int  Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double Arr[ROWS][COLS]);
string Sum(char Arr[ROWS][COLS]);

//Avg
template<typename T>
double Avg(T Arr[], const int n);

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
	cout << "**************************************FUNCTIONS IN C++ (������� � C++)*************************************" << endl;
	cout << "���������� �������:" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	
#if defined INT_ARR1
	cout << "\t\t\Int" << endl;
	const int n = 5;
	int Arr[n];
	cout << "*********************************************************************************************" << endl;
	FillRand(Arr, n);
	Print(Arr, n);
	Sort(Arr, n);
	Print(Arr, n);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� : " << Avg(Arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Arr, n) << endl;
#endif

#if defined DOUBLE_ARR1
	cout << "\t\t\Double" << endl;
	const int m = 10;
	double Brr[m];
	cout << "*********************************************************************************************" << endl;
	FillRand(Brr, m);
	Print(Brr, m);
	Sort(Brr, m);
	Print(Brr, m);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "����� ��������� �������: " << Sum(Brr, m) << endl;
	cout << "������� �������������� : " << Avg(Brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Brr, m) << endl;
#endif

#if defined CHAR_ARR1
	cout << "*********************************************************************************************" << endl;
	cout << "\t\t\Char" << endl;
	const int SIZE = 10;
	char Crr[SIZE];
	FillRand(Crr, SIZE);
	Print(Crr, SIZE);
	Print(Crr, SIZE);
	Print(Crr, SIZE);
#endif
	
	cout << "*********************************************************************************************" << endl;
	cout << "���������� �������:" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	
#if defined INT_ARR2
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
	cout << "����� ��������� �������: " << Sum(Drr, ROWS, COLS) << endl;
	cout << "������� �������������� ������� : " << Avg(Drr) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Drr) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Drr) << endl;
#endif

#if defined DOUBLE_ARR2
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
	cout << "����� ��������� �������: " << Sum(Frr) << endl;
	cout << "������� �������������� ������� " << Avg(Frr) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Frr) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Frr) << endl;
#endif
	
#if defined CHAR_ARR2
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\CHAR" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	char Grr[ROWS][COLS];
	FillRand(Grr);
	Print(Grr);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	Sort(Grr);
	Print(Grr);
	cout << "---------------------------------------------------------------------------------------------" << endl;
	cout << "����� ��������� �������: " << Sum(Grr) << endl;
	cout << "������� �������������� �������: " << Avg(Grr) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Grr) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Grr) << endl;
#endif

	cout << "*********************************************************************************************" << endl;
	cout << "\t\t\t�� �������� � ���� ����!!!" << endl;
}

//���������� ������
void FillRand(int Arr[], const int n)
{
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void FillRand(double Arr[], const int n)
{
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}

void FillRand(char Arr[], const int n)
{
	//���������� ������� ���������� ���������:
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
	//����� ������� �� �����:
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
template<typename T>
void Sort(T Arr[], const int n)
{
	//����������:
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

//��� ����������
template<typename T>
void Sort(T Arr[ROWS][COLS])
{
	//����������:
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

//���������� �� ������
/*void Sort(int Arr[ROWS][COLS])
{
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLS; y++)
		{
			for (int i = x; i < ROWS; i++)
			{
				//int j;
				//(i == x) ? j = y + 1 : j = 0; //��������� ��������
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
template<typename T>
double Avg(T Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
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