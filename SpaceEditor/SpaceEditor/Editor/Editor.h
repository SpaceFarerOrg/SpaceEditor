#pragma once
#include "SFML\Graphics\RenderWindow.hpp"

class Editor
{
public:
	Editor() = default;
	void Init();
	void Update();
	void Render();
private:
	sf::RenderWindow myMenuWindow;
	sf::RenderWindow mySpaceWindow;
};