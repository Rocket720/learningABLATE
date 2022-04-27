#include <iostream>

using namespace std;

// Score Sheet for Superbowl 2022
// The Buffalo Bills were robbed

int main(){
    enum score{
        TOUCHDOWN = 6,
        FIELD_GOAL = 3,
        POST_TD = 1,
        SAFETY = 2
    };

    score LAR_scoresheet[] = {TOUCHDOWN, POST_TD, TOUCHDOWN, FIELD_GOAL, TOUCHDOWN, POST_TD};
    score CB_scoresheet[] = {FIELD_GOAL, TOUCHDOWN, POST_TD, TOUCHDOWN, POST_TD, FIELD_GOAL};

    int LAR_finalscore = 0;
    for(score i : LAR_scoresheet){
        LAR_finalscore += i;
    }
    cout << "The LA Rams scored a total of " << LAR_finalscore << " points \n";

    int CB_finalscore = 0;
    for(score i : CB_scoresheet){
        CB_finalscore += i;
    }
    cout << "The Cincinnati Bengals scored a total of " << CB_finalscore << " points \n";

    if(CB_finalscore > LAR_finalscore){cout << "Cincinatti Bengals Won!";}
    else{cout << "LA Rams won!";}
}