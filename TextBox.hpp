#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>
#include <iostream>

using namespace std;

class TextBox {
private:
    string value;

public:
    TextBox();                          
    explicit TextBox(const string& initialValue); // Constructor with argument

    void setValue(const string& newValue); // Setter method
    string getValue() const;               // Getter method
    void display() const;                  // Display method
};

#endif
