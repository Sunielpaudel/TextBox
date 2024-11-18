#include "textBox.hpp"

void TextBox::setValue(std::string newValue) {
	value = newValue;
}

std::string TextBox::getValue() {
	return value;
}