#include "Point.h"

Point :: Point(const Point & point)
    : _city{point._city}, _x{point._x}, _y{point._y}, _id{point._id}
{
    ++number;
    std :: cout << "--- Kopiujemy " << _id << ". " << _city << "\n";
}

Point :: Point(const Point && point)
    : _city{std :: move (point._city)},
      _x{std :: move (point._x)}, 
      _y{std :: move (point._y)},
      _id{std :: move (point._id)}
{
    ++number;
    std :: cout << "--- Przenosimy " << _id << ". " << _city << "\n";
}

void Point :: fullPrint() const
{
    std :: cout << number << ". " << _city << " (" << _x << "," << _y <<")\n";
}