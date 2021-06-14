// Vector 2
#include <math.h>

// This class contains the Vector 2 struct, Shape Enum


// Could write this into a seperate .h and .cpp for more speed while building the program


static class Structs
{
public:

	// used to check what shape a gameObject is
	enum shape
	{
		rectangle,
		circle,
		other,
		error
	};

	// RGB class, used to describe the color spectrum with the rgb scale and alpha being transparency, max of each value being 255
	struct rgb
	{
		int r;
		int g;
		int b;
		int alpha;

		// The = now sets all  the values to the respective value of the input
		void operator = (rgb& Other) {
			r = Other.r;
			g = Other.g;
			b = Other.b;
			alpha = Other.alpha;
		}

		// Constructor all floats, Inputs : Red, Green, Blue, Alpha
		rgb(int& r, int& g, int& b, int& alpha) {
			this->r = r;
			this->g = g;
			this->b = b;
			this->alpha = alpha;
		}

		//
		rgb(int r, int g, int b) {
			this->r = r;
			this->g = g;
			this->b = b;
			this->alpha = 255;
		}

		// Constructor, all float, Inputs : Red, Green, Blue
		rgb(int& r, int& g, int& b) {
			this->r = r;
			this->g = g;
			this->b = b;
			this->alpha = 255;
		}

		// Constructor, Input : RGB
		rgb(rgb& Other) {
			*this = Other;
		}

		// Default Constructor
		rgb() {
			this->r = 0;
			this->g = 0;
			this->b = 0;
			this->alpha = 0;
		}
		
	};

	// Vector 2 Class
	static struct Vector2
	{
		float x;
		float y;

		// Constructors

#pragma region Constructors

// Basic constructor, sets numbers to 0
		Vector2() {
			this->x = 0;
			this->y = 0;
		}

		// Inputs and x and y cordinates and set's this vector 2 to that
		Vector2(float x, float y) {
			this->x = x;
			this->y = y;
		}

		// Takes in a intput i and set's the x and y to i
		Vector2(float i) {
			this->x = i;
			this->y = i;
		}

#pragma endregion

		// Operator Overides

		/* Additional Notes *

		This might be faster if I call operators in other operators. The reason for the inputs being pointers is for efficincy
		I also could experiment with int's and floats being inputed to calculate big data sets to not cut off some decimal points if a number is extremely big

		*/

#pragma region = Operators

		// Overiding the = operator so the input Vector 2 will have it's values be set to the current Vector 2
		void operator = (Vector2& Other) {
			this->x = Other.x;
			this->y = Other.y;
		}

		// Overiding the = operator so the x & y of the oringinal object would = the integer
		void operator = (float& Other) {
			this->x = Other;
			this->y = Other;
		}

#pragma endregion

#pragma region += Operators

		// the += operator is now mapped to the oringinal objects x has the input vector 2 added, same with y
		void operator += (Vector2& Other) {
			this->x += Other.x;
			this->y += Other.y;
		}

		// Adds the input to the x & y separately 
		void operator += (float& Other) {
			this->x += Other;
			this->y += Other;
		}

#pragma endregion

#pragma region -= Operators

		// the -= operator is now mapped to subtract the x of the input object from the oringinal object, same with y 
		void operator -= (Vector2& Other) {
			this->x -= Other.x;
			this->y -= Other.y;
		}

		// subtracts the x and y of the oringal Vector 2 fomr the input
		void operator -= (float& Other) {
			this->x -= Other;
			this->y -= Other;
		}

#pragma endregion

#pragma region *= Operators

		// The oringinal Vector 2's x and y are multiplied by the Input float
		void operator *= (float& Other) {
			this->x *= Other;
			this->y *= Other;
		}

		// The input x and y are multiplied to the oringinal Vector 2's x and y, x*x, y*y. Do Not Use, the implementation of this can vary
		void operator *= (Vector2& Other) {
			this->x *= Other.x;
			this->y *= Other.y;
		}

#pragma endregion

#pragma region /= Operations

		// Do not Use, the implementation could change depending on the program
		void operator /= (Vector2& Other) {
			this->x /= Other.x;
			this->y /= Other.y;
		}

		// Do not Use, the implementation could change depending on the program
		void operator /= (float& Other) {
			this->x /= Other;
			this->y /= Other;
		}

#pragma endregion

#pragma region + Operators

		// returns the two vectors added together
		Vector2 operator + (Vector2& Other) {
			return Vector2(this->x + Other.x, this->y + Other.y);
		}

		// returns the vector added to a float
		Vector2 operator + (float& Other) {
			return Vector2(this->x + Other, this->y + Other);
		}

#pragma endregion

#pragma region - Operators

		// returns the two vectors subtracted together
		Vector2 operator - (Vector2& Other) {
			return Vector2(this->x - Other.x, this->y - Other.y);
		}

		// returns the vector with x and y subtracted by the input
		Vector2 operator - (float& Other) {
			return Vector2(this->x - Other, this->y - Other);
		}

#pragma endregion

#pragma region * operators

		// Do not Use, the implementation could change depending on the program
		Vector2 operator * (Vector2& Other) {
			return Vector2(this->x * Other.x, this->y * Other.y);
		}

		// returns the x and y multiplied by Other
		Vector2 operator * (float& Other) {
			return Vector2(this->x * Other, this->y * Other);
		}

#pragma endregion

#pragma region / operators

		// Do not Use, the implementation could change depending on the program
		Vector2 operator / (Vector2& Other) {
			return Vector2(this->x / Other.x, this->y / Other.y);
		}

		// Divides x and y by Other and returns the resault
		Vector2 operator / (float& Other) {
			return Vector2(this->x / Other, this->y / Other);
		}

#pragma endregion
	};
};



