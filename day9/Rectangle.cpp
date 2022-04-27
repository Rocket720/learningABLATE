#include <cstdio>
#include "Point.h"

class Rectangle{
public:
    Rectangle(int x1, int y1, int x2, int y2){
        A = Point(x1, y1);
        B = Point(x1, y2);
        C = Point(x2, y1);
        D = Point(x2, y2);
    }
    const Point getA(){
        return A;
    }
    void setA(Point a) {
        A = a;
    }
    const Point getB(){
        return B;
    }
    void setB(Point b) {
        B = b;
    }
    const Point getC(){
        return C;
    }
    void setC(Point c) {
        C = c;
    }
    const Point getD(){
        return D;
    }
    void setD(Point d) {
        D = d;
    }

    int getArea(){
        int length = D.getX() - A.getX();
        int width = D.getY() - A.getY();
        return length * width;
    }

    int getPerimeter(){
        int length = D.getX() - A.getX();
        int width = D.getY() - A.getY();
        return 2*length + 2*width;
    }

    bool isSquare(){
        int length = D.getX() - A.getX();
        int width = D.getY() - A.getY();

        return length == width;
    }

private:
    Point A, B, C, D;

};

int main(){
    Rectangle r = Rectangle(0,0,8,4);
    printf("Area = %i\n", r.getArea());
    printf("Perimeter = %i\n", r.getPerimeter());
    printf("Shape is %sa Square", r.isSquare() ? "" : "not ");
}