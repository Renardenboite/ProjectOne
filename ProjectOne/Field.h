#pragma once
#include "Constants.h"
#include "Cell.h"

namespace ApplesGame
{
    struct Field
    {
        Cell cells[NUMBER_CELLS][NUMBER_CELLS] = {};

        sf::RenderTexture gridTexture;
    };

    struct Game;

    void InitField(Field& field);

    void DrawField(sf::RenderWindow& window, const Field& field);    

    std::vector<sf::Vector2u> GetAvailableCoords(const Game& game);
}
