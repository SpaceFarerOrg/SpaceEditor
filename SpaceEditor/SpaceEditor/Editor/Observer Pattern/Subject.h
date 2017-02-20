#pragma once
#include "Observer.h"
#include "Events.h"
#include <vector>

class Subject
{
public:
	virtual void AttatchObserver(Observer* aObserver);
protected:
	virtual void NotifyObservers(EditorEvent aEvent);
	virtual void NotifyObservers(EditorEvent aEvent, int aValue);
	virtual void NotifyObservers(EditorEvent aEvent, float aX, float aY);
private:
	std::vector<Observer*> myObservers;
};