// This file includes math functions that are not included in math.h or specific math functions for a game
#include "Structs.cpp"

// Square the input
static float square(float Other) {
	return Other * Other;
}


// maybe make Vector 2s doubles to improve efficency so one won't have to cast floats to 
static float getDistance(Structs::Vector2& point1, Structs::Vector2& point2){
	return (float)(sqrt(pow(((double)point1.x - point2.x) , 2) + pow(((double)point1.y - point2.y), 2)));
}