#define _USE_MATH_DEFINES
#include "shape.h"
#include <cmath>

// Конструктор для базового класса Shape
Shape::Shape(Type type) : type(type), square(0.0), volume(0.0), height(0.0), radius(0.0)
{
    // Инициализируем все параметры значением по умолчанию
    for (int i = 0; i < 8; i++) {
        x[i] = 0;
        y[i] = 0;
        z[i] = 0;
    }
}

// Реализация методов для трансформаций вынесена в производные классы.

// Конструктор для линии
Line::Line(int x1, int y1, int x2, int y2) : Shape(LINE)
{
    x[0] = x1; y[0] = y1;
    x[1] = x2; y[1] = y2;
}

void Line::shift(int m, int n, int k) {  }
void Line::scaleX(int a) {  }
void Line::scaleY(int d) {  }
void Line::scaleZ(int e) { }
void Line::scale(int s) {  }

// Конструктор для квадрата
Square::Square(int x1, int y1) : Shape(SQUARE)
{
    x[0] = x1; y[0] = y1;
    x[1] = x1; y[1] = y1;
    x[2] = x1; y[2] = y1;
    x[3] = x1; y[3] = y1;
}

void Square::shift(int m, int n, int k) { }
void Square::scaleX(int a) {  }
void Square::scaleY(int d) {  }
void Square::scaleZ(int e) {}
void Square::scale(int s) {}

// Конструктор для куба
Cube::Cube(int x1, int y1, int z1) : Shape(CUBE)
{
    x[0] = x1; y[0] = y1; z[0] = z1;
    x[1] = x1; y[1] = y1; z[1] = z1;
    x[2] = x1; y[2] = y1; z[2] = z1;
    x[3] = x1; y[3] = y1; z[3] = z1;
    x[4] = x1; y[4] = y1; z[4] = z1;
    x[5] = x1; y[5] = y1; z[5] = z1;
    x[6] = x1; y[6] = y1; z[6] = z1;
    x[7] = x1; y[7] = y1; z[7] = z1;
}

void Cube::shift(int m, int n, int k) {  }
void Cube::scaleX(int a) { }
void Cube::scaleY(int d) {  }
void Cube::scaleZ(int e) {  }
void Cube::scale(int s) {  }
