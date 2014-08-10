#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			case sf::Event::TextEntered:
				std::cout << "Text has been entered" << std::endl;

				if ( event.text.unicode == 65 )
				{
					std::cout << "Captial A has been clicked" << std::endl;
				}

				break;

			}
		}

		window.clear( );

		window.display( );
	}
}