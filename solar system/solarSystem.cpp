#include "solarSystem.h"
#include <cmath>

solarSystem::solarSystem(){}

void solarSystem::setMass(double mass)
{
	this->mass = mass;
}

double solarSystem::getMass()
{
	return mass;
}

void solarSystem::setVolume(double volume)
{
	this->volume = volume;
}

double solarSystem::getVolume()
{
	return volume;
}

void solarSystem::setRadius(double radius)
{
	this->radius = radius;
}

double solarSystem::getRadius()
{
	return radius;
}

double solarSystem::getPI()
{
	return pi;
}

double solarSystem::calcVolume()
{
	return (4 / 3) * pi * pow(radius, 3);
}

double solarSystem::calcDiameter()
{
	return 2 * radius;
}

double solarSystem::calcMass()
{
	return 0;
}