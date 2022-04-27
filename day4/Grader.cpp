#include <iostream>

using namespace std;

// Evaluates students grades and calculates class performance
// Listen, listen, a C+ isn't even that bad...

int main() {

    short A = 90, B = 80, C = 70, D = 65;

    unsigned short students[] = {71, 57, 85, 82, 51, 87, 96, 80, 75, 68};
    short num_students = sizeof(students)/sizeof(students[0]);
    short num_A = 0, num_B = 0, num_C = 0, num_D = 0, num_F = 0;
    for(short i : students){
        if(i >= A)
            num_A++;
        else if(i>=B)
            num_B++;
        else if(i>=C)
            num_C++;
        else if(i>=D)
            num_D++;
        else
            num_F++;
    }

    cout << "Score Distribution: \n" << "\tA - " << num_A << "\n\tB - " << num_B << "\n\tC - " << num_C << "\n\tD - " << num_D << "\n\tF - " << num_F << "\n";
    cout << "Out of " << num_students << " students, " << (float(num_students-num_F)/float(num_students)) * 100 << "% passed \n";
    cout << "Only " << num_F << " students will be executed...\n";

}