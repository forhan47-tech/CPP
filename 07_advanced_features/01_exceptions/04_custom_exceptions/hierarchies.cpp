#include <iostream>
#include <exception>
using namespace std;

class AppException : public exception {
public:
    const char* what() const noexcept override {
        return "Application exception!";
    }
};

class NetworkException : public AppException {
public:
    const char* what() const noexcept override {
        return "Network error occurred!";
    }
};

class DatabaseException : public AppException {
public:
    const char* what() const noexcept override {
        return "Database error occurred!";
    }
};

int main() {
    try {
        throw DatabaseException();
    } catch (AppException &e) {
        cout << "Caught: " << e.what() << endl;
    }
}
