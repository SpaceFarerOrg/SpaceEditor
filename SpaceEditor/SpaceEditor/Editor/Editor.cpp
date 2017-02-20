#include "Editor.h"

void Editor::Init()
{
	myMenuWindow.create(sf::VideoMode(200, 800), "Space Editor", sf::Style::Resize);
	mySpaceWindow.create(sf::VideoMode(800, 800), "Space Editor", sf::Style::Resize);

	int menuX = (sf::VideoMode::getDesktopMode().width / 2) - myMenuWindow.getSize().x - (mySpaceWindow.getSize().x / 2);
	int menuY = (sf::VideoMode::getDesktopMode().height / 2) - (myMenuWindow.getSize().y / 2);
	myMenuWindow.setPosition({ menuX, menuY });

	
}

void Editor::Update()
{
}

void Editor::Render()
{
	myMenuWindow.clear();
	mySpaceWindow.clear();

	myMenuWindow.display();
	mySpaceWindow.display();
}
