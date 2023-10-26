#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class TwoDimensionaleShape
{
public:
    virtual double getArea() { return 6.9; }
    virtual double getPerimeter() { return 4.5; }
    void shapeDetails() {}
};

class Triangle : public TwoDimensionaleShape
{
private:
    int no_of_sides;
    string type;
    double a, b, c;
    string color;

public:
    Triangle(double _a, double _b, double _c, string col)
    {
        type = "Triangle";
        a = _a;
        b = _b;
        c = _c;
        no_of_sides = 3;
        color = col;
    }
    void shapeDetails()
    {
        cout << "No of sides: " << no_of_sides << endl;
        cout << "Type: " << type << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter= " << getPerimeter() << endl;
        cout << "Colour: " << color << endl;
    }
    double getArea()
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double getPerimeter()
    {
        return a + b + c;
    }
};

class Rectangle : public TwoDimensionaleShape
{
private:
    int no_of_sides;
    string type;
    double l, b;
    string color;

public:
    Rectangle(double _l, double _b, string col)
    {
        type = "Rectangle";
        l = _l;
        b = _b;
        no_of_sides = 4;
        color = col;
    }
    void shapeDetails()
    {
        cout << "No of sides: " << no_of_sides << endl;
        cout << "Type: " << type << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter= " << getPerimeter() << endl;
        cout << "Colour: " << color << endl;
    }
    double getArea()
    {
        return l * b;
    }
    double getPerimeter()
    {
        return 2 * (l + b);
    }
};

class Square : public TwoDimensionaleShape
{
private:
    int no_of_sides;
    string type;
    double a;
    string color;

public:
    Square(double _a, string col)
    {
        type = "Square";
        a = _a;
        no_of_sides = 4;
        color = col;
    }
    void shapeDetails()
    {
        cout << "No of sides: " << no_of_sides << endl;
        cout << "Type: " << type << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter= " << getPerimeter() << endl;
        cout << "Colour: " << color << endl;
    }
    double getArea()
    {
        return a * a;
    }
    double getPerimeter()
    {
        return 4 * a;
    }
};

class Hexagon : public TwoDimensionaleShape
{
private:
    int no_of_sides;
    string type;
    double a;
    string color;

public:
    Hexagon(double _a, string col)
    {
        type = "Hexagon";
        a = _a;
        no_of_sides = 6;
        color = col;
    }
    void shapeDetails()
    {
        cout << "No of sides: " << no_of_sides << endl;
        cout << "Type: " << type << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter= " << getPerimeter() << endl;
        cout << "Colour: " << color << endl;
    }
    double getArea()
    {
        return (3.0 / 2.0) * sqrt(3.0) * pow(a, 2);
    }
    double getPerimeter()
    {
        return 6 * a;
    }
};

void sortShapePerimeter(TwoDimensionaleShape **tds, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tds[i]->getPerimeter() < tds[j]->getPerimeter())
            {
                TwoDimensionaleShape *temp = tds[i];
                tds[i] = tds[j];
                tds[j] = temp;
            }
        }
    }
}
int main()
{
    TwoDimensionaleShape *tds[10];
    tds[0] = new Triangle(3, 4, 5, "Blue");
    tds[1] = new Rectangle(2, 7, "Red");
    tds[2] = new Square(8, "Yellow");
    tds[3] = new Hexagon(9, "Green");
    tds[4] = new Triangle(5, 12, 13, "Violet");
    tds[5] = new Square(2, "Magenta");

    for (int i = 0; i < 6; i++)
    {
        tds[i]->shapeDetails();

        cout << endl
             << endl;
    }

    sortShapePerimeter(tds, 6);
    cout << "Sorted: " << endl;
    for (int i = 0; i < 6; i++)
    {
        tds[i]->shapeDetails();

        cout << endl
             << endl;
    }

    return 0;
}