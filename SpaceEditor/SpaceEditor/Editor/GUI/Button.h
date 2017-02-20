#pragma once
#include <functional>
#include "Sprite.h"
#include "..\Observer Pattern\Observer.h"

class Button : public Observer
{
public:
	Button(std::function<void()> aFunctionToCall);
private:
	void IsPressed();
	Sprite mySprite;
	std::function<void()> myFunctionToCall;
};
