#include "GameObject.h"

#pragma region Getter Functions

Structs::Vector2 GameObject::getPos()
{
	return *pos;
}

Structs::Vector2 GameObject::getSpeed()
{
	return *speed;
}

Structs::Vector2 GameObject::getScale()
{
	return *scale;
}


#pragma endregion

#pragma region Setter Functions, pos

void GameObject::setPos(float& x, float& y)
{
	pos = new Structs::Vector2(x, y);
}

void GameObject::setPos(int& x, int& y)
{
	pos = new Structs::Vector2(x, y);
}

void GameObject::setPos(double& x, double& y)
{
	pos = new Structs::Vector2(x, y);
}

void GameObject::setPos(Structs::Vector2& Other)
{
	*pos = Other;
}

void GameObject::setSpeed(float& x, float& y)
{
	speed = new Structs::Vector2(x, y);
}

void GameObject::setSpeed(int& x, int& y)
{
	speed = new Structs::Vector2(x, y);
}

void GameObject::setSpeed(double& x, double& y)
{
	speed = new Structs::Vector2(x, y);
}

void GameObject::setSpeed(Structs::Vector2& Other)
{
	*speed = Other;
}
void GameObject::setScale(float& x, float& y)
{
	scale = new Structs::Vector2(x, y);
}

void GameObject::setScale(int& x, int& y)
{
	scale = new Structs::Vector2(x, y);
}

void GameObject::setScale(double& x, double& y)
{
	scale = new Structs::Vector2(x, y);
}

void GameObject::setScale(Structs::Vector2& Other)
{
	*scale = Other;
}
// Maybe make color a pointer
void GameObject::setColor(float& red, float& green, float& blue, float& alpha)
{
	//color.r = red;
	//color.g = green;
	//color.b = blue;
	//color.alpha = alpha;
}
// Trash Code, Fix later
void GameObject::setColor(float& red, float& green, float& blue) {
	//color = *new Structs::rgb(red, green, blue);
}
void GameObject::setColor(Structs::rgb& Other)
{
	//color = Other;
}
GameObject::GameObject()
{
	
}
#pragma endregion