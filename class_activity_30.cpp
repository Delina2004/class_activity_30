#include "TextBox.hpp"

using namespace std;

int main() {
    TextBox box1;
    box1.setValue("Hello World");
    box1.display();

    TextBox box2("Initial Text");
    box2.display();

    return 0;
}
