#include <iostream>
#include "klasa.h"
#include "math.h"

using namespace std;
//" \u200B\u200B
int Triangle::m_numberFigury = 0;
Triangle ::Triangle() {
    m_name = "???";
    s1 = 0;
    s2 = 0;
}
Triangle::Triangle(const std::string &name, double a, double b, double c) {
    m_name = name;
    s1 = a;
    s2 = b;
    s3 = c;
    m_numberFigury++;
}
Triangle::~Triangle(){
    m_numberFigury--;
}
void Triangle::showSides() const {
    cout << "Pierwszy = " << s1 << " Drogi = " << s2 << " Trzeci = "<< s3 << endl;
}

double Triangle::area() const {
    double s;
    s = (s1 + s2 + s3) / 2;
    double p;
    p = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    return p;

}
double Triangle::perimeter() const {
    double Ob;
    Ob = s1 + s2 + s3;
    return Ob;

}
int Triangle::numberFigury() {
    return m_numberFigury;
}


void triangle (double *a,double *b,double *c ){
    cout << "Trojkat" << endl;
    cout << "Pierwszy bok trojkatu =  ";
    cin >> * a;
    cout << endl;
    cout << "Drugi bok trojkatu =  ";
    cin >> * b;
    cout << endl;
    cout << "STrzeci bok tr =  ";
    cin >> * c;
    cout << endl;
}

