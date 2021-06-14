#include "Rect.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Text.hpp>

using namespace sf;

GameObject Objects[1000000];

rect Test(50,50,100,100);

RectangleShape test;

CircleShape TEst;

RectangleShape Rectangles[100000];

int main()
{
	Test.Refesh();
	std::cout << Test.getShape().getPosition().x << std::endl << Test.getShape().getPosition().y << std::endl << Test.getShape().getScale().x << std::endl << Test.getShape().getScale().y << std::endl << Test.getShape().getFillColor();
	TEst.setRadius(100);
	TEst.setPosition(300, 300);
	TEst.setFillColor(Color::Cyan);
	test.setFillColor(Color::Blue);
	test.setScale(200, 200);
	test.setPosition(500, 200);


	sf::RectangleShape Rectangle(sf::Vector2f(400, 200));

	Rectangle.setPosition(200, 200);



	RenderWindow window(VideoMode(1000, 600), "SFML Window");

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();

		
		}
		window.clear();
		//Test.Refesh();
		
		window.draw(test);
		window.draw(Rectangle);
		window.draw(Test.getShape());
		//window.clear();
		window.display();
	}
}
