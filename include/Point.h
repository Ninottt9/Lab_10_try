#ifndef POINT_H
#define POINT_H
#include<iostream>

class Point
{
private:
    double _x;
    double _y;
    std :: string _city;

    Point(double x, double y) : Point{"", x, y} {}
public:
    Point() : Point{0, 0} {}
    Point(std :: string city, double x, double y);

    static Point setPoint(double x, double y);
    static Point setContrary(double x, double y);
    //Point(std :: string city) : Point{double x, double y}, _city{city} {}
    //~Point();

    void fullPrint() const;

    static int number;
};

int Point :: number {0};

inline Point :: Point(std :: string city, double x, double y)
    :   _x{x}, _y{y}, _city{city} { ++number; }

inline Point Point :: setPoint(double x, double y)
{ return Point(x,y); }

inline Point Point :: setContrary(double x, double y)
{ return Point(-x,-y); }

#endif