#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>

class TextBox {
private:
	std::string value;

public:
	void setValue(std::string newValue);
		std::string getValue();

};

#endif TEXTBOX_HPP