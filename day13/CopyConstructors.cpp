#include <cstdio>
using namespace std;

class testObj{
public:
    testObj(int value = 0){
        *a = value;
    }
    ~testObj(){
        delete a;
    }
    void print(){
        printf("Value of a: %i\n", *a);
    }
private:
    int* a = new int();
};

int CopyConstructors(){

    testObj test = testObj();
    test.print();
    printf("%p", &test);
}

