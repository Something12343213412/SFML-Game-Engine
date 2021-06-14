#include "Keybord.h"
#include <iostream>

bool Keybord::shiftPressed;
Keybord::ButtonPressed Keybord::KPL;
Keybord::ButtonPressed Keybord::KPU;
Keybord::DirectionalInputs Keybord::DirInputs;

void Keybord::Refresh() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		DirInputs.leftArrow = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		DirInputs.rightArrow = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		DirInputs.downArrow = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		DirInputs.upArrow = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift) || sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)) {
		shiftPressed = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		if (shiftPressed) {
			KPU.a = true;
		}
		else
		{
			KPL.a = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
		if (shiftPressed) {
			KPU.b = true;
		}
		else
		{
			KPL.b = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) {
		if (shiftPressed) {
			KPU.c = true;
		}
		else
		{
			KPL.c = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		if (shiftPressed) {
			KPU.d = true;
		}
		else
		{
			KPL.d = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
		if (shiftPressed) {
			KPU.e = true;
		}
		else
		{
			KPL.e = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F)) {
		if (shiftPressed) {
			KPU.f = true;
		}
		else
		{
			KPL.f = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::G)) {
		if (shiftPressed) {
			KPU.g = true;
		}
		else
		{
			KPL.g = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) {
		if (shiftPressed) {
			KPU.h = true;
		}
		else
		{
			KPL.h = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::I)) {
		if (shiftPressed) {
			KPU.i = true;
		}
		else
		{
			KPL.i = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)) {
		if (shiftPressed) {
			KPU.j = true;
		}
		else
		{
			KPL.j = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) {
		if (shiftPressed) {
			KPU.k = true;
		}
		else
		{
			KPL.k = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)) {
		if (shiftPressed) {
			KPU.l = true;
		}
		else
		{
			KPL.l = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::M)) {
		if (shiftPressed) {
			KPU.m = true;
		}
		else
		{
			KPL.m = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::N)) {
		if (shiftPressed) {
			KPU.n = true;
		}
		else
		{
			KPL.n = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::O)) {
		if (shiftPressed) {
			KPU.o = true;
		}
		else
		{
			KPL.o = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)) {
		if (shiftPressed) {
			KPU.p = true;
		}
		else
		{
			KPL.p = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
		if (shiftPressed) {
			KPU.q = true;
		}
		else
		{
			KPL.q = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {
		if (shiftPressed) {
			KPU.r = true;
		}
		else
		{
			KPL.r = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		if (shiftPressed) {
			KPU.s = true;
		}
		else
		{
			KPL.s = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T)) {
		if (shiftPressed) {
			KPU.t = true;
		}
		else
		{
			KPL.t = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U)) {
		if (shiftPressed) {
			KPU.u = true;
		}
		else
		{
			KPL.u = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::V)) {
		if (shiftPressed) {
			KPU.v = true;
		}
		else
		{
			KPL.v = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		if (shiftPressed) {
			KPU.w = true;
		}
		else
		{
			KPL.w = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::X)) {
		if (shiftPressed) {
			KPU.x = true;
		}
		else
		{
			KPL.x = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y)) {
		if (shiftPressed) {
			KPU.y = true;
		}
		else
		{
			KPL.y = true;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) {
		if (shiftPressed) {
			KPU.z = true;
		}
		else
		{
			KPL.z = true;
		}
	}
}