#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

class solarSystem
{

public:
	solarSystem();
	void setMass(double);
	double getMass();
	void setVolume(double);
	double getVolume();
	void setRadius(double);
	double getRadius();
	double getPI();
	double calcVolume();
	double calcDiameter();
	double calcMass();

private:
	double mass;
	double density;
	double volume;
	double diameter;
	double radius;
	const double pi = 3.141592653589793;
};

#endif