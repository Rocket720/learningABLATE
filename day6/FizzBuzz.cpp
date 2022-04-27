#include <iostream>

using namespace std;

// Completes the infamous Fizz-Buzz activity by brute force
// At this point I should have just switch to Comp Sci

int main(){
    int max;
    cout << "What number do you want to go up to?\t";
    cin >> max;
    string answer[max];
    for(short i = 1; i <= max; i++){
        if(i%3==0)
            answer[i-1] += "Fizz";
        if(i%5==0)
            answer[i-1] += "Buzz";
        if(! (i%3==0 || i%5==0))
            answer[i-1] += to_string(i);
    }

    for(string s: answer){
        cout << s << ", ";
    }

}