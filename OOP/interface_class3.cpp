#include <iostream>
using namespace std;

class IReadable {
public:
    virtual void read() = 0;
};

class IWritable {
public:
    virtual void write() = 0;
};

class FileManager : public IReadable, public IWritable {
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
