#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class FileHandler {
public:
    virtual void read() = 0;                      // Pure virtual function
    virtual void write(const string&) = 0;        // Pure virtual function
    virtual ~FileHandler() {}                     // Virtual destructor
};

// Concrete class implementing the abstract interface
class TextFile : public FileHandler {
public:
    void read() override {
        cout << "Reading from .txt file..." << endl;
    }

    void write(const string& data) override {
        cout << "Writing to .txt file: " << data << endl;
    }
};

int main() {
    FileHandler* file = new TextFile();   // Pointer to base → abstraction

    file->read();                         // Calls TextFile::read()
    file->write("NAIMUDDIN loves C++!");  // Calls TextFile::write()

    delete file;                          // Cleanup
    return 0;
}
