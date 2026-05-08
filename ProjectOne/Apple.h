#pragma once
#include <SFML/Graphics.hpp>
#include "Constants.h"
#include "Math.h"

namespace ApplesGame
{
    struct Apple
    {
        sf::Sprite sprite;
    };

    struct Game;

    Apple CreateApple(const sf::Texture& texture, const sf::Vector2f& position);
    void DrawApples(sf::RenderWindow& window, const std::vector<Apple>& apples);
    void SpawnApple(Game& game);
}
