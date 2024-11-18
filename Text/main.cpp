#include<iostream>
#include "TextBox.hpp"

int main() {
	TextBox textBox;
	textBox.setValue("Hello, Worlsd!");
	std::cout << "TextBox value: " << textBox.getValue() << std::endl;

	return 0;
}