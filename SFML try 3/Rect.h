#pragma once
#include "GameObject.h"

// File used for rectanle class

class rect : public GameObject
{

protected:

	// Shape class, handles visual elements
	Shape shape;


public:
	// Update function, inherited from GameObject, changing it to fit a rectangle and increase speed.
	void update();

	// Constructors
	// Defualt Constructor
	rect();

	// set's the x, y, scaleX, and scaleY of the object being created
	rect(float& x, float& y,float& scaleX, float& scaleY);

	// set's the x, y, scaleX, and scaleY of the object being created and the color
	rect(float& x, float& y, float& scaleX, float& scaleY, float& r, float& g, float& b);
	// set's the x, y, scaleX, and scaleY of the object being created and the color / alpha
	rect(float& x, float& y, float& scaleX, float& scaleY, float& r, float& g, float& b, float& Alpha);
	// set's the x, y, scaleX, and scaleY of the object being created with 2 Vector 2's, first being pos, second being scale.
	rect(Structs::Vector2 pos, Structs::Vector2 scale);
	// set's the x, y, scaleX, and scaleY of the object being created with 2 Vector 2's, first being pos, second being scale. Then takes in and rgb input
	rect(Structs::Vector2& pos, Structs::Vector2 scale, Structs::rgb colors);
	



};

