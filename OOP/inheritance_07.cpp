#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) { 
        name = n; 
    }
};

class Student : public Person {
protected:
    int roll;
public:
    void setRoll(int r) { 
        roll = r; 
    }
};

class Graduate : public Student {
private:
    string degree;
public:
    void setDegree(string d) { 
        degree = d; 
    }

    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << ", Degree: " << degree << endl;
    }
};

int main() {
    Graduate g;

    g.setName("Naimuddin");
    g.setRoll(101);
    g.setDegree("BSc in CSE");

    g.display();
    return 0;
}
