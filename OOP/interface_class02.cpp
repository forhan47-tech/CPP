#include <iostream>
using namespace std;

class Readable {
public:
    virtual void read() = 0;
};

class Writable {
public:
    virtual void write() = 0;
};

class FileManager : public Readable, public Writable {
public:
    void read() override {
        cout << "Reading from file..." << endl;
    }

    void write() override {
        cout << "Writing to file..." << endl;
    }
};

int main() {
    FileManager fm;
    fm.read();
    fm.write();
    return 0;
}
