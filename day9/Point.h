#ifndef CODINGABLATE_POINT_H
#define CODINGABLATE_POINT_H
class Point{
public:
    Point(int newX = 0, int newY = 0){
        x = newX;
        y = newY;
    }
    void setX(int newX){ x = newX;}
    void setY(int newY){ y = newY;}
    const int getX() const { return x;}
    const int getY() const { return y;}

private:
    int x, y;
};
#endif // ! CODINGABLATE_POINT_H
