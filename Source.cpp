#include <SFML/Graphics.hpp>
#include"Player.h"
int main()
{
	Player player(sf::Vector2f(0,100),"images/RoflanChelik.png");
	sf::RenderWindow window(sf::VideoMode(200, 200), "Emeran poshli v mainkraft");
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(player);
		window.display();
	}
	return 0;
}