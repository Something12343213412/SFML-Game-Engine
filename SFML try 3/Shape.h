#pragma once
#include "Structs.cpp"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Text.hpp>
#include "MathFunctions.cpp"
// Visual Shape Class
class Shape
{
protected:
	// Stores the color of an object.
	Structs::rgb* color;

public:
	Structs::rgb* getColor();

};

