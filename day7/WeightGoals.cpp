#include <iostream>
using namespace std;

int main(){

    short weight, target, time;

    cout << "Enter your current weight:";
    cin >> weight;
    cout << "Enter your target weight:";
    cin >> target;
    cout << "How many days will you take to meet your target: ";
    cin >> time;

    long slope = (target-weight)/time;
    long program[time];
    for(long i = 0; i < time; i++)
        program[int(i)] = i*slope + weight;

    cout << "\nDay # \tWeight" << endl;
    for(int d = 0; d < time; d++)
        cout << "Day " << d+1 << " - " << program[d] << endl;

}