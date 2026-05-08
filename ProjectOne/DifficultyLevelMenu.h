#pragma once
#include "SFML/Graphics.hpp"
#include "DifficultyLevel.h"
#include "Shared.h"

namespace ApplesGame
{
    struct DifficultyLevelMenu
    {
        sf::Text heading;

        std::map<DifficultyLevelType, MenuOption> options = {
            {DifficultyLevelType::Easy, {L"Лёгкий", {}}},
            {DifficultyLevelType::EasyMedium, {L"Средне-лёгкий", {}}},
            {DifficultyLevelType::Medium, {L"Средний", {}}},
            {DifficultyLevelType::MediumHard, {L"Средне-сложный", {}}},
            {DifficultyLevelType::Hard, {L"Сложный", {}}},
        };

        DifficultyLevelType selectedOptionKey = DifficultyLevelType::Easy;
    };

    struct Game;

    void ResetDifficultyLevelMenu(DifficultyLevelMenu& difficultyLevelMenu);
    void InitDifficultyLevelMenu(Game& game);
    void DrawDifficultyLevelMenu(sf::RenderWindow& window, const DifficultyLevelMenu& difficultyLevelMenu);

    void DifficultyLevelMenuKeyboardHandler(const sf::Event& event, Game& game);
}
