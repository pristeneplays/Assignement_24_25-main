#include "MyGameObject.h"
class MyGameObject
{
private:

public:

};

void MyGameObject::SetPosition(sf::Vector2i position)
{
	this->position = position;
}

void MyGameObject::SetRotation(float rotation)
{
}

void MyGameObject::SetScape(float scale)
{
}

unsigned int MyGameObject::getPosition()
{
	return 0;
}

unsigned int MyGameObject::getRotation()
{
	return 0;
}

unsigned int MyGameObject::getScale()
{
	return 0;
}
