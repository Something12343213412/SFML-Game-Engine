#pragma once
#include "Shape.h"
class RectShape : public Shape
{
public:
	// Get's the color of the object
	Structs::rgb* getColor();

	// Is the shape of the object
	sf::RectangleShape visualShape;


};

