#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Text.hpp>


static class Keybord {
public:
	struct ButtonPressed
	{
		bool q = false;
		bool w = false;
		bool e = false;
		bool r = false;
		bool t = false;
		bool y = false;
		bool u = false;
		bool i = false;
		bool o = false;
		bool p = false;
		bool a = false;
		bool s = false;
		bool d = false;
		bool f = false;
		bool g = false;
		bool h = false;
		bool j = false;
		bool k = false;
		bool l = false;
		bool z = false;
		bool x = false;
		bool c = false;
		bool v = false;
		bool b = false;
		bool n = false;
		bool m = false;
		void operator = (const bool& Other) {
			q = Other;
			w = Other;
			e = Other;
			r = Other;
			t = Other;
			y = Other;
			u = Other;
			i = Other;
			o = Other;
			p = Other;
			a = Other;
			s = Other;
			d = Other;
			f = Other;
			g = Other;
			h = Other;
			j = Other;
			k = Other;
			l = Other;
			z = Other;
			x = Other;
			c = Other;
			v = Other;
			b = Other;
			n = Other;
			m = Other;
		}
	};
	struct DirectionalInputs {
		bool upArrow = false;
		bool downArrow = false;
		bool rightArrow = false;
		bool leftArrow = false;
	};
	static bool shiftPressed;
	static void Refresh();
	static ButtonPressed KPL;
	static ButtonPressed KPU;
	static DirectionalInputs DirInputs;


};