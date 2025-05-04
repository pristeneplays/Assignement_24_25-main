#pragma once
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>
class MyGameObject 
{
private:
	sf::Vector2i position;
	sf::Angle rotation;
	float scale = 1;
public:
	void SetPosition(sf::Vector2i position);
	void SetRotation(float rotation);
	void SetScape(float scale);
	unsigned int getPosition()
};