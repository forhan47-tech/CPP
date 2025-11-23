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

void renameEntry(FileEntry& entry, const string& newName) {
    entry.name = newName;  // modifies original
}

int main() {
    FileEntry entry;
    entry.name = "module.cpp";

    entry.print();
    renameEntry(entry, "module_renamed.cpp");
    entry.print();

    return 0;
}
