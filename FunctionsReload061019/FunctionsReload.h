#pragma once
#include<iostream>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;
const int ROWS = 4;
const int COLS = 5;

/*Прототипы функций (Functions declaration)*/
//FillRand
void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(char Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS]);
void FillRand(char Arr[ROWS][COLS]);

//Print
void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(char Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS]);
void Print(char Arr[ROWS][COLS]);

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