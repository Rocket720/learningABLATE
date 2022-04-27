#include <iostream>
using namespace std;

// Prints the memory sizes of several primitives
// Also cool thing I learned: In CLion, use Alt + Shift to make multiple cursors and edit multiple lines at once

int main(){
    cout << "| Data Type | Memory Size (bytes) | \n";

    cout << "|   int     |\t\t" << sizeof(int) << "\t  |" << endl;

    cout << "|   double  |\t\t" << sizeof(double) << "\t  |" << endl;

    cout << "|   long    |\t\t" << sizeof(long) << "\t  |" << endl;

    cout << "|   float   |\t\t" << sizeof(float) << "\t  |" << endl;

    cout << "|   bool    |\t\t" << sizeof(bool) << "\t  |" << endl;

    cout << "|   char    |\t\t" << sizeof(char) << "\t  |" << endl;
}