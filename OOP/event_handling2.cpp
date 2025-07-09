#include <iostream>

using namespace std;

class Event {
public:
    virtual void trigger() = 0;
};

class MyEvent : public Event {
public:
    void trigger() override {
        cout << "MyEvent triggered!\n";
    }
};

class EventListener {
public:
    void onEvent(Event* e) {
        e->trigger();
    }
};

int main() {
    MyEvent evt;
    EventListener listener;
    listener.onEvent(&evt); // Output: MyEvent triggered!
    return 0;
}
