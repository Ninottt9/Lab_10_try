#ifndef POINT_H
#define POINT_H
#include<iostream>

class Point
{
private:
    std :: string _city;
    double _x;
    double _y;
    int _id;

    Point(double x, double y) : Point{"Punkt X", x, y} {}
public:
    static int number;


    Point() : Point{0, 0} {}
    Point(std :: string city, double x, double y);

    /**
        copying constructor
        @param class Vector2D dereference for copying
    */
    Point(const Point &);

    /**
        moving constructor
        @param class Vector2D double dereference for moving
    */
    Point(const Point &&);

    /**
        destructor
    */
    ~Point();

    /**
        function that prints x and y coordinates of a vector
        @param the text to be printed first
    */

    static Point setPoint(double x, double y);
    static Point setContrary(double x, double y);
    //Point(std :: string city) : Point{double x, double y}, _city{city} {}
    //~Point();

    void fullPrint() const;
    void changeName(std :: string new_name);
    Point newMoved(std :: string new_name, double x, double y);
};

inline int Point :: number {0};

inline Point :: Point(std :: string city, double x, double y)
    : _city{city}, _x{x}, _y{y}, _id{++number} {}

inline Point Point :: setPoint(double x, double y)
{ return Point(x,y); }

inline Point Point :: setContrary(double x, double y)
{ return Point(-x,-y); }

inline void Point :: changeName(std :: string new_name)
{ _city = new_name; }

inline Point Point :: newMoved(std :: string new_name, double x, double y)
{
    return Point(new_name, x, y);
}

inline Point :: ~Point()
{
    --number;
}

#endif