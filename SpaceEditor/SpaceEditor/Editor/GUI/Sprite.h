#pragma once
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>

namespace sf
{
	class RenderWindow;
	class String;
}

class Sprite
{
public:
	Sprite() = default;
	Sprite(const sf::String& aTexturePath);
	void Render(sf::RenderWindow& aRenderWindow);
protected:
	sf::Sprite mySprite;
private:
	sf::Texture myTexture;
};