#include <iostream>
using namespace std;

class Media {
public:
    virtual void play() = 0;
    virtual ~Media() {}
};

class Song : public Media {
public:
    void play() override {
        cout << "Playing song..." << endl;
    }
};

class Video : public Media {
public:
    void play() override {
        cout << "Playing video..." << endl;
    }
};

int main() {
    Media* playlist[2];
    
    playlist[0] = new Song();
    playlist[1] = new Video();

    for (int i = 0; i < 2; ++i) {
        playlist[i]->play();
        delete playlist[i];
    }
    return 0;
}
