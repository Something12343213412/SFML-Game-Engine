#pragma once
#include "Rect.h"
#include "Circle.h"

using namespace sf;

using namespace std;

int ID = 0;

vector<GameObject*> GameOBJ_handler::Objs;


int main()
{
	//Declaring Objects for the game
	Circle ID(400, 100, 150, 100, 150, 100);
	rect Test(200, 50, 300, 100, 230, 100, 100);
	rect TEst(400, 100, 100, 300, 10, 200, 100);

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



		window.clear();
		for (int A = GameOBJ_handler::Objs.size() - 1; A >= 0; A--)
		{
			GameOBJ_handler::Objs[A]->Refresh();
			if (GameOBJ_handler::Objs[A]->Shape == "rect") {
				window.draw(GameOBJ_handler::Objs[A]->GetShape());
			}
			if (GameOBJ_handler::Objs[A]->Shape == "circle") {
				window.draw(GameOBJ_handler::Objs[A]->GetShapeS());
			}
		}
		//window.draw(Test2.GetShape());
		//window.draw(Test.GetShape());
		window.display();
	}
}
