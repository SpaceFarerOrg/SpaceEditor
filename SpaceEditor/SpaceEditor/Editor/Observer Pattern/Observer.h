#pragma once
#include "Events.h"

class Observer
{
public:
	virtual void Notify(EditorEvent aEvent);
	virtual void Notify(EditorEvent aEvent, int aValue);
	virtual void Notify(EditorEvent aEvent, float aX, float aY);
};