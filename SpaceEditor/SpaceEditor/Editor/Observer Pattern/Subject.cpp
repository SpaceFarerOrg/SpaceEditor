#include "Subject.h"

void Subject::AttatchObserver(Observer * aObserver)
{
	myObservers.push_back(aObserver);
}

void Subject::NotifyObservers(EditorEvent aEvent)
{
	for (unsigned int index = 0; index < myObservers.size(); ++index)
	{
		myObservers[index]->Notify(aEvent);
	}
}

void Subject::NotifyObservers(EditorEvent aEvent, int aValue)
{
	for (unsigned int index = 0; index < myObservers.size(); ++index)
	{
		myObservers[index]->Notify(aEvent, aValue);
	}
}

void Subject::NotifyObservers(EditorEvent aEvent, float aX, float aY)
{
	for (unsigned int index = 0; index < myObservers.size(); ++index)
	{
		myObservers[index]->Notify(aEvent, aX, aY);
	}
}
