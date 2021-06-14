#pragma once

#include <iostream>
#include "Shape.h"

// Game Object base class, every class is going to inherit from this class
class GameObject
{
	/* protected variables, speed and pos, scale and shape, reason for 2 shape variables is so when I get later into shapes I can set 1 and can return that
	the protected field means only class members can directly edit the variables, also using pointers to increase speed with functions,
	instead of creating a copy of the input for the function we just pass in the oringinal value.*/
protected:



	// Visual shape for the class
	Shape render;

	// The position of the object, going to be updated every frame due to the speed
	Structs::Vector2* pos;
	// The speed of the object, every frame the speed is going to be added to the pos
	Structs::Vector2* speed;
	// Making a scale for objects to inherit from, scale for shapes that have 
	Structs::Vector2* scale;
	

public:
#pragma region Getter Functions

	// Get's the position of the current object
	Structs::Vector2 getPos();

	// Get's the speed of the current object
	Structs::Vector2 getSpeed();

	// Get's the scale of the current object
	Structs::Vector2 getScale();

	// Get's the shape of the object
	virtual Shape getShape() = 0;

#pragma endregion

#pragma region Setter Functions

	// Set's the position of the current object, float
	void setPos(float& x, float& y);

	// Set's the position of the current object, int
	void setPos(int& x, int& y);

	// Set's the position of the current object, double
	void setPos(double& x, double& y);

	//Set's the position of the current object, Vector 2
	void setPos(Structs::Vector2& Other);

	// Set's the speed of the current object
	void setSpeed(float& x, float& y);

	// Set's the speed of the current object, int
	void setSpeed(int& x, int& y);

	// Set's the speed of the current object, double		
	void setSpeed(double& x, double& y);

	// Set's the speed of the current object, Vector 2
	void setSpeed(Structs::Vector2& Other);

	// Set's the scale of the current object
	void setScale(float& x, float& y);

	// Set's the scale of the current object, int
	void setScale(int& x, int& y);

	// Set's the scale of the current object, double		
	void setScale(double& x, double& y);

	// Set's the scale of the current object, Vector 2
	void setScale(Structs::Vector2& Other);

	// sets the color of the current object, float
	void setColor(float& red, float& green, float& blue, float& alpha);

	// sets the color of the current object, float
	void setColor(float& red, float& green, float& blue);

	// set's the color of the current object, rgb
	void setColor(Structs::rgb& Other);
#pragma endregion

#pragma region Misc
	// virtual function, meant to be inherited from, = 0 means an empty function, virtual means has to be declared in an inherited class.
	virtual void update() = 0;

	// Defualt Constructor
	GameObject();
#pragma endregion


};

