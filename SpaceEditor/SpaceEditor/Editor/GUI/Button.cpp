#include "Button.h"

Button::Button(std::function<void()> aFunctionToCall)
{
}

void Button::IsPressed()
{
	myFunctionToCall();
}
