#include "Position.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Position go;
    go.SetNum_Steps(6);
    go.change_pos();
    go.output_pos();
    go.output_distance();
    int get = go.GetNum_Steps();
    cout<<get;
    return 0;
}