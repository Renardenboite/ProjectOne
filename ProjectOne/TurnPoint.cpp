#include "TurnPoint.h"
#include "Snake.h"

namespace ApplesGame
{
    TurnPoint CreateTurnPoint(const sf::Vector2f& position, const Direction& direction)
    {
        TurnPoint turnPoint;
        turnPoint.position = position;
        turnPoint.direction = direction;

        return turnPoint;
    }
}
