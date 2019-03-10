#pragma once
#include<SFML/Graphics.hpp>

class Player : public sf::Drawable
{
public:
	Player(const sf::Vector2f &texturecoord,const std::string &texturepos);
	void jump(sf::Vector2f &position);
	void update();
private:
	sf::Sprite sprite;
	sf::Vector2f texturecoord;
	sf::Vector2f position;
	sf::Texture texture;
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};