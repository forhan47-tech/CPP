#include <iostream>
using namespace std;

class IMedia {
public:
    virtual void play() = 0;
    virtual ~IMedia() {}
};

class Song : public IMedia {
public:
    void play() override { cout << "Playing Song 🎵" << endl; }
};

class Video : public IMedia {
public:
    void play() override { cout << "Playing Video 🎬" << endl; }
};

int main() {
    IMedia* playlist[2];
    playlist[0] = new Song();
    playlist[1] = new Video();

    for (int i = 0; i < 2; ++i) {
        playlist[i]->play();
        delete playlist[i];
    }

    return 0;
}
