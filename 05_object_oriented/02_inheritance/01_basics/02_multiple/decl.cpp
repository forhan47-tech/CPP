#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teaching students..." << endl;
    }
};

class Researcher {
public:
    void research() {
        cout << "Doing research..." << endl;
    }
};

class Professor : public Teacher, public Researcher {
public:
    void role() {
        cout << "I am a Professor." << endl;
    }
};

int main() {
    Professor p;
    p.role();
    p.teach();
    p.research();
    return 0;
}
