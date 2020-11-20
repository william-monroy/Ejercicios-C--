#include <iostream>
using namespace std;

class Coord
{
private:
    int x;
    int y;

public:
    Coord();
    Coord(int x, int y);
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    void print();
};

Coord::Coord()
{
    this->x = 0;
    this->y = 0;
}

Coord::Coord(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Coord::getX()
{
    return this->x;
}
void Coord::setX(int x)
{
    this->x = x;
}

int Coord::getY()
{
    return this->y;
}
void Coord::setY(int y)
{
    this->y = y;
}

void Coord::print()
{
    cout << "(" << this->x << "," << this->y << ")";
}