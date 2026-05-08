#pragma once
#include "SFML/Graphics.hpp"
#include "Direction.h"
#include "Math.h"
#include <vector>

namespace ApplesGame
{
    struct TurnPoint
    {
        sf::Vector2f position;
        Direction direction;
    };

    TurnPoint CreateTurnPoint(const sf::Vector2f& position, const Direction& direction);
}