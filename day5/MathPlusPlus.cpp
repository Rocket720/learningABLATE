#include <iostream>

using namespace std;

// Implements a few extra math functions using methods
// In C++, an octopus is made by nailing extra legs onto a dog.

double fToC(double f ){
    return (f-32) * 5/9;
}
double cToF(double c){
    return ((9.0/5.0) * c) + 32;
}

double average(double x, double y){
    return (x+y)/2;
}
double average(int x, int y){
    return average(double(x), double(y));
}
double average(int x, double y){
    return average(double(x), double(y));
}
double average(double x, int y){
    return average(double(x), double(y));
}

int main(){
    cout << fToC(212.0) << endl;
    cout << cToF(35) << endl;
    cout << average(10, 51) << endl;
    cout << average(5, 8.5) << endl;
}