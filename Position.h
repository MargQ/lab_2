#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Position.h"
#include <iostream>
#include <windows.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 100
using namespace std;

class Position
{
private:
    int _x, _y, _x1, _x2, _y1, _y2;
    int _obj[M][M];
    int  _num_steps; //отвечает за кол-во рандомных перемещений объекта

public:
    Position(); //конструктор
	
	void SetNum_Steps(int value);
	int GetNum_Steps();
	int RandomNum(int min, int max);
	float distance(float x1, float y1, float x2, float y2, float result);
	void change_pos();
	void output_pos();
	void output_distance();
};