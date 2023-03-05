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
public:
    int _x, _y, _x1, _x2, _y1, _y2;
    int _obj[M][M];
    int _r;

public:
    Position() //конструктор
    {
        _x = 0; _y = 0;
        _x1 = 0; _x2 = 0;
        _y1 = 0; _y2 = 0;
        _r = 5;
    }

	int RandomNum(int min, int max);
	float distance(float x1, float y1, float x2, float y2, float result);
	void change_pos();
	void output_pos();
	void output_distance();
};