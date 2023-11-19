#pragma once

// Базовый класс для геометрических фигур
class Shape
{
public:
    enum Type {
        LINE,
        SQUARE,
        CUBE,
        CIRCLE,
        CYLINDER
    };

    Shape(Type type);
    virtual ~Shape() = default;

    Type getType() const { return type; }

    // Методы для трансформаций
    virtual void shift(int m, int n, int k) = 0;
    virtual void scaleX(int a) = 0;
    virtual void scaleY(int d) = 0;
    virtual void scaleZ(int e) = 0;
    virtual void scale(int s) = 0;

protected:
    Type type;
    double square;
    double volume;
    double height;
    double radius;
    int x[8];
    int y[8];
    int z[8];
};

// Класс для линии
class Line : public Shape
{
public:
    Line(int x1, int y1, int x2, int y2);

    // Реализация методов трансформации
    void shift(int m, int n, int k) override;
    void scaleX(int a) override;
    void scaleY(int d) override;
    void scaleZ(int e) override;
    void scale(int s) override;

private:
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
};

// Класс для квадрата
class Square : public Shape
{
public:
    Square(int x1, int y1);

    // Реализация методов трансформации
    void shift(int m, int n, int k) override;
    void scaleX(int a) override;
    void scaleY(int d) override;
    void scaleZ(int e) override;
    void scale(int s) override;

private:
    int x[4], y[4];
};

// Класс для куба
class Cube : public Shape
{
public:
    Cube(int x1, int y1, int z1);

    // Реализация методов трансформации
    void shift(int m, int n, int k) override;
    void scaleX(int a) override;
    void scaleY(int d) override;
    void scaleZ(int e) override;
    void scale(int s) override;

private:
    int x[8], y[8], z[8];
};
