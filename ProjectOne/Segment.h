#pragma once
#include "SFML/Graphics.hpp"
#include "TurnPoint.h"
#include "Direction.h"
#include "Math.h"

#include <queue>

namespace ApplesGame
{
    enum class SegmentType
    {
        Head = 0,
        Body,
        Tail
    };

    struct Segment
    {
        SegmentType type;
        Direction direction;
        sf::Sprite sprite;
        std::queue<TurnPoint> turnPoints;
    };

    struct Snake;

    Segment CreateSegment(const SegmentType& type, const sf::Vector2u& coord, const sf::Texture& texture);

    bool HasHeadSegmentOppositeDirection(const Segment& segment, Direction direction);

    void TryChangeHeadSegmentDirection(Snake& snake, Direction newDirection);

    void MoveSegment(Segment& segment, const float& distance);
    void MoveSegmentWithTurnPoints(Segment& segment, float distance);

    void UpdateSegmentRotation(Segment& segment);
}
