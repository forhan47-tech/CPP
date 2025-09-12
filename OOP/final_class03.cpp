#include <iostream>
using namespace std;

class Processor {
public:
    virtual void execute() {
        cout << "Executing base logic" << endl;
    }

    virtual void compile() final {
        cout << "Compilation done" << endl;
    }
};

class Compiler : public Processor {
public:
    void execute() override {
        cout << "Executing derived logic" << endl;
    }

    // void compile() override {}  // ❌ Error: cannot override final method
};

int main() {
    Compiler c;
    
    c.execute();
    c.compile();
    return 0;
}
