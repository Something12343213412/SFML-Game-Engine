#include <iostream>
#include "Rect.h"


void rect::update() {
	
	


}

rect::rect(float& x, float& y, float& scaleX, float& scaleY)
{
	// Creating the position Vector
	pos = new Structs::Vector2(x, y);

	// Creating the scale Vector
	scale = new Structs::Vector2(scaleX, scaleY);

	// Applying RGBS
	
	//color = Structs::rgb(255,255,255);
}
