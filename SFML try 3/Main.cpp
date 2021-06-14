#pragma once

#include "GameObject.h"

using namespace sf;

using namespace std;

int ID = 0;

int main()
{
	//Declaring Objects for the game

	RenderWindow window(VideoMode(1000, 600), "SFML Window");


	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.display();
		//window.draw(Test2.GetShape());
		//window.draw(Test.GetShape());
	}
}
