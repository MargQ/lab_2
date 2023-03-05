#include <iostream>
#include <windows.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 100
using namespace std;

int RandomNum(int min, int max)
{
    srand(time(NULL));
                                    //случайное число - формула
    int num = min + rand() % (max - min + 1);

    return num;
}

// функция расстояния между двумя объектами
float distance(float x1, float y1, float x2, float y2, float result) 
{
   result = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
   return result;
}

void change_pos()
{
    int obj[M][M];
    int r = 5;
    int x = 0, y = 0;
    int count = 0, count1 = 0, count2 = 0;
    int dx = 0, dy = 0;
    while (count < r)
    {for (int i = 0; i < r; i++)
        {for (int j = 0; j < 2; j++)
            {if (j == 0)
                {for (dx = 0; count1 < 1; dx = RandomNum(-1, 1))
                    {count1++;
                     x = x + dx;
                    }
                    count1--;
                    obj[i][j] = x;
                }

                if (j == 1)
                {for (dy = 0; count2 < 1; dy = RandomNum(-1, 1))
                    {count2++;
                     y = y + dy;
                    }
                    obj[i][j] = y;
                }
                count2--;
            }
            count++;
        }
    }
}

//метод выводит координаты перемещения объекта
void output_pos()
{
    int obj[M][M];
    int r = 5;
    cout << "История перемещения точки:" << endl; 
    for (int i = 0; i < r; i++)
    {
        cout << "(x,y)=";

        for (int j = 0; j < 2; j++)
        {
            cout << " " << obj[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

//начинаем считать пройденное расстояние
void output_distance()
{
    int r = 5;
    int obj[M][M];
    int x1=0, x2=0, y1=0, y2=0;
    float result = 0;
    for (int i = 0; i < r - 1; i++)  
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                x1 = obj[i][j];
                x2 = obj[i + 1][j];
            }

            if (j == 1)
            {
                y1 = obj[i][j];
                y2 = obj[i + 1][j];
            }
        }
        result = result + distance(x1, y1, x2, y2, result);
    }
    cout << "Пройденное расстояние: " << result;
    cout << endl;
}

int main()
{
    setlocale (LC_ALL,"Russian");
    int obj[M][M];
    int x = 0, y = 0;
    return 0;

}