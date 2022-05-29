#include <cstdio>
#include <iostream>
#include <memory>

using namespace std;

class Condition{
public:
    Condition(){}
    virtual ~Condition(){}
    virtual void log() = 0;
};

class Normal : public Condition{
public:
    Normal() { log(); }
    virtual ~Normal() {}
    virtual void log() { printf("Logging normal conditions ...\n"); }
};

class Error : public Condition {
public:
    Error() { log(); }
    virtual ~Error() {}
    virtual void log() { printf("Logging error!\n"); }
};

class Alarm : public Condition {
public:
    Alarm(){
        log();
        warn();
    };
    virtual ~Alarm() {}
    virtual void warn() { printf("Warning!\n"); }
    virtual void log() { printf("General alarm log\n"); }
    virtual void call() = 0;
};

class FireAlarm : public Alarm {
public:
    FireAlarm() {
        log();
    };
    virtual ~FireAlarm() {}
    virtual void call() { printf("Calling fire department!\n"); }
    virtual void log() { printf("Logging fire call\n"); }
};

int main() {
    int input;
    int okay = 1;
    unique_ptr<Condition> pCondition;
    while (okay) {
        printf("(0) Quit (1) Normal (2) Fire: ");
        cin >> input;
        okay = input;
        switch (input) {
            case 0:
                break;
            case 1:
                pCondition = make_unique<Normal>();
                break;
            case 2:
                pCondition = make_unique<FireAlarm>();
                break;
            default:
                pCondition = make_unique<Error>();
                okay = 0;
                break;
        }
    }
    return 0;
}
