#pragma once
#include<iostream>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;
const int ROWS = 4;
const int COLS = 5;

/*Прототипы функций (Functions declaration)*/
void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(char Arr[], const int n);
void FillRand(int Arr[ROWS][COLS]);
void FillRand(double Arr[ROWS][COLS]);
void FillRand(char Arr[ROWS][COLS]);

template<typename T>void Print(T Arr[], const int n);
template<typename T>void Print(T Arr[ROWS][COLS]);

template<typename T>void Sort(T Arr[], const int n);
template<typename T>void Sort(T Arr[ROWS][COLS]);

template<typename T>T Sum(T Arr[], const int n);
template<typename T>T Sum(T Arr[ROWS][COLS]);
//string Sum(char Arr[ROWS][COLS]);

template<typename T>double Avg(T Arr[], const int n);
template<typename T>double Avg(T Arr[ROWS][COLS]);
//char Avg(char Arr[ROWS][COLS]);

template<typename T>T minValueIn(T Arr[], const int n);
template<typename T>T minValueIn(T Arr[ROWS][COLS]);

template<typename T>T  maxValueIn(T Arr[], const int n);
template<typename T>T maxValueIn(T Arr[ROWS][COLS]);