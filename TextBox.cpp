#include "TextBox.hpp"

using namespace std;


TextBox::TextBox() : value("") {}

TextBox::TextBox(const string& initialValue) : value(initialValue) {}

// Setter method
void TextBox::setValue(const string& newValue) {
    value = newValue;
}

// Getter method
string TextBox::getValue() const {
    return value;
}

// Display method
void TextBox::display() const {
    cout << "Text: " << value << endl;
}
