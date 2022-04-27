#include <cstdio>
#include <math.h>
#include <iostream>

using namespace std;

class LunarLander {
public:
    double x, y, v_x, v_y, a_x, a_y, time;

    LunarLander() {
        x, y, v_x, v_y, a_x, a_y, time = 0;
    }

    void throttle_up(double amt = 1) {
        a_y += amt;
    }

    void throttle_down(double amt = 1) {
        a_y -= amt;
    }

    void rcs_left(double amt = 1) {
        a_x -= amt;
    }

    void rcs_right(double amt = 1) {
        a_x += amt;
    }

    void run(double timestep = 1) {
        time+=timestep;

        y += 0.5 * (g + a_y) * pow(time, 2) + v_y * time;
        v_y += (g + a_y) * time;

        x += 0.5 * a_x * pow(time, 2) + v_x * time;
        v_x += a_x * time;

    }

    bool flying() {
        if (y < 0)
            return false;
        return true;
    }

private:
    const double g = -1.62;

};

int main() {

    LunarLander l;

    l.v_y = 10;
    l.throttle_up(1.6);
    while (l.flying()) {
        printf("Current Metrics: \n");
        printf("Position(X,Y): (%.4f, %.4f) \n", l.x, l.y);
        printf("Velocity(V_x, V_y): (%.4f, %.4f) \n", l.v_x, l.v_y);
        printf("Acceleration(a_x, a_y): (%.4f, %.4f) \n", l.a_x, l.a_y);
        printf("Time: %.1f \n\n", l.time);

        l.run(.1);
    }

//    // Unfinished code to allow for active control during flight
//    // C++ input is insufferable
//    while(l.flying()){
//
//        printf("Current Metrics: \n");
//        printf("Position(X,Y): (%.4f, %.4f) \n", l.x, l.y);
//        printf("Velocity(V_x, V_y): (%.4f, %.4f) \n", l.v_x, l.v_y);
//        printf("Acceleration(a_x, a_y): (%.4f, %.4f) \n", l.a_x, l.a_y);
//        printf("Time: %.1f \n\n", l.time);
//
//        printf("Select control input: \n");
//        printf("    1. Increase Throttle \n");
//        printf("    2. Decrease Throttle \n");
//        printf("    3. Increase Left RCS \n");
//        printf("    4. Increase Right RCS \n");
//        printf("    5. Do Nothing \n");
//
//
//
//        l.run();
//    }

}