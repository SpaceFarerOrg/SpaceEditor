#include "Sprite.h"
#include "SFML\System\String.hpp"
#include "SFML\Graphics\RenderWindow.hpp"

Sprite::Sprite(const sf::String & aTexturePath)
{
	myTexture.loadFromFile("Sprites/" + aTexturePath);
	mySprite.setTexture(myTexture);
}

void Sprite::Render(sf::RenderWindow & aRenderWindow)
{
	aRenderWindow.draw(mySprite);
}
