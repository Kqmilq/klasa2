
#ifndef UNTITLED10_KLASA_H
#define UNTITLED10_KLASA_H
#include <string>
class Triangle{
private:
    static int m_numberFigury;
    double s1;
    double s2;
    double s3;
public:
    static int numberFigury();
    Triangle();
    Triangle(const std::string& name, double a = 0, double b = 0, double c = 0 );
    ~Triangle();
    void showSides() const;
    double area() const;
    double perimeter() const;
};

void triangle (double *a,double *b,double *c);

#endif
