#include "Position.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Position go;
    go.change_pos();
    go.output_pos();
    go.output_distance();
    return 0;
}