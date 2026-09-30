#include <iostream>
using namespace std;

#define PI 3.14159

// Circle
float area(float r)
{
    return PI * r * r;
}

// Square
int area(int side)
{
    return side * side;
}

// Rectangle
int area(int l, int b)
{
    return l * b;
}

// Triangle
float area(float base, float height)
{
    return 0.5 * base * height;
}

// Cylinder (Surface Area)
float area(float r, float h, int type)
{
    return 2 * PI * r * (h + r);
}

// Sphere (Surface Area)
double area(double r)
{
    return 4 * PI * r * r;
}

// Cuboid (Surface Area)
int area(int l, int b, int h)
{
    return 2 * (l * b + b * h + h * l);
}

// Ellipse
double area(double a, double b)
{
    return PI * a * b;
}

int main()
{
    int choice;
    cout << "Choose a shape to calculate area:\n";
    cout << "1. Area of Circle\n2. Area of Square\n3. Area of Rectangle\n4. Area of Triangle\n";
    cout << "5. Surface Area of Cylinder\n6. Surface Area of Sphere\n";
    cout << "7. Surface Area of Cuboid\n8. Area of Ellipse\n";
    cout << "Enter your choice (1-8): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of Circle = " << area(r) << endl;
        break;
    }
    case 2:
    {
        int s;
        cout << "Enter side: ";
        cin >> s;
        cout << "Area of Square = " << area(s) << endl;
        break;
    }
    case 3:
    {
        int l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area of Rectangle = " << area(l, b) << endl;
        break;
    }
    case 4:
    {
        float base, h;
        cout << "Enter base and height: ";
        cin >> base >> h;
        cout << "Area of Triangle = " << area(base, h) << endl;
        break;
    }
    case 5:
    {
        float r, h;
        cout << "Enter radius and height: ";
        cin >> r >> h;
        cout << "Surface Area of Cylinder = " << area(r, h, 1) << endl;
        break;
    }
    case 6:
    {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Surface Area of Sphere = " << area(r) << endl;
        break;
    }
    case 7:
    {
        int l, b, h;
        cout << "Enter length, breadth and height: ";
        cin >> l >> b >> h;
        cout << "Surface Area of Cuboid = " << area(l, b, h) << endl;
        break;
    }
    case 8:
    {
        double a, b;
        cout << "Enter semi-major axis and semi-minor axis: ";
        cin >> a >> b;
        cout << "Area of Ellipse = " << area(a, b) << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}