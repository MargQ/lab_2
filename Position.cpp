#include "Position.h"

//случайное число - формула
int Position::RandomNum(int min, int max)
{
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}

// метод для нахождения расстояния между двумя объектами
float Position::distance(float x1, float y1, float x2, float y2, float result)
{
    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return result;
}

//метод для рандомного перемещения объекта
void Position::change_pos()
{
    int count = 0, count1 = 0, count2 = 0;
    int dx = 0, dy = 0;
    while (count < _r)
    {for (int i = 0; i < _r; i++)
        {for (int j = 0; j < 2; j++)
            {if (j == 0)
                {for (dx = 0; count1 < 1; dx = RandomNum(-1, 1))
                    {count1++;
                     _x = _x + dx;
                    }
                    count1--;
                    _obj[i][j] = _x;
                }

                if (j == 1)
                {for (dy = 0; count2 < 1; dy = RandomNum(-1, 1))
                    {count2++;
                     _y = _y + dy;
                    }
                    _obj[i][j] = _y;
                }
                count2--;
            }
            count++;
        }
    }
}

//метод выводит координаты перемещения оьъекта
void Position::output_pos()
{
    cout << "История перемещения точки:" << endl; 
    for (int i = 0; i < _r; i++)
    {
        cout << "(x,y)=";

        for (int j = 0; j < 2; j++)
        {
            cout << " " << _obj[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

//начинаем считать пройденное расстояние
void Position::output_distance()
{
    float result = 0;
    for (int i = 0; i < _r - 1; i++)  
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                _x1 = _obj[i][j];
                _x2 = _obj[i + 1][j];
            }

            if (j == 1)
            {
                _y1 = _obj[i][j];
                _y2 = _obj[i + 1][j];
            }
        }
        result = result + distance(_x1, _y1, _x2, _y2, result);
    }
    cout << "Пройденное расстояние: " << result;
    cout << endl;
}