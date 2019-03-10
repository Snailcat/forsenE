#include "Player.h"

Player::Player(const sf::Vector2f &position,const std::string &texturepos)
{
	this->position = position;
	texture.loadFromFile(texturepos);
	sprite.setTexture(texture);
	sprite.setPosition(position);
}
void Player::jump(sf::Vector2f &position)
{
	for (int i = 0; i < 10; i++)
		position.y + i;
	for (int i = 0; i < 10; i++)
		position.y - i;
}
void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(sprite);
}