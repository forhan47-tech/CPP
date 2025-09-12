#include <iostream>
#include <string>
using namespace std;

class FileEntry {
public:
    string name;

    void print() const {
        cout << "File: " << name << "\n";
    }
};

void showEntry(FileEntry entry) {
    entry.print();  // works on a copy
}

int main() {
    FileEntry entry;
    entry.name = "audit_log.cpp";

    showEntry(entry);
    return 0;
}
