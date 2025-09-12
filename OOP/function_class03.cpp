#include <iostream>
#include <string>
using namespace std;

class FileEntry {
public:
    string name;

    void merge(const FileEntry& other) {
        name += "_" + other.name;
    }

    void print() const {
        cout << "File: " << name << "\n";
    }
};

int main() {
    FileEntry original;
    original.name = "audit";

    FileEntry incoming;
    incoming.name = "log";

    original.merge(incoming);
    original.print(); 
    return 0;
}
