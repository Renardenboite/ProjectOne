#pragma once
#include "SFML/Graphics.hpp"
#include <string>

namespace ApplesGame
{
    const std::string RESOURCES_PATH = "Resources/";
    const std::string RESOURCES_AUDIO = RESOURCES_PATH + "Audio/";
    const std::string RESOURCES_FONTS = RESOURCES_PATH + "Fonts/";
    const std::string RESOURCES_GRAPHICS = RESOURCES_PATH + "Graphics/";

    const std::string LEADERBOARD_FILE_PATH = "leaderboard.txt";

    const unsigned SCREEN_WIDTH = 1000;
    const unsigned SCREEN_HEIGHT = 1000;
    const float OFFSET_TOP_WINDOW_10_PERCENT = (SCREEN_HEIGHT / 100.f) * 10.f;
    const float OFFSET_TOP_WINDOW_20_PERCENT = (SCREEN_HEIGHT / 100.f) * 20.f;

    const float HUD_BACKGROUND_HEIGHT = 50.f;
    const float HUD_VIEW_PERCENT = HUD_BACKGROUND_HEIGHT / SCREEN_HEIGHT;
    const float DEFAULT_VIEW_PERCENT = 1.f - HUD_VIEW_PERCENT;

    const float MUSIC_INITIAL_VOLUME = 15.f;
    const float SOUNDS_INITIAL_VOLUME = 50.f;

    const float EPSILON = 0.01f;

    const unsigned NUMBER_CELLS = 20;
    const unsigned CELL_WIDTH = SCREEN_WIDTH / NUMBER_CELLS;
    const unsigned CELL_HEIGHT = SCREEN_HEIGHT / NUMBER_CELLS;
    const float AVERAGE_CELL_SIZE = (CELL_WIDTH + CELL_HEIGHT) / 2.f;
    const float APPLE_SIZE = ((CELL_WIDTH + CELL_HEIGHT) / (2.f * 100.f)) * 80.f;

    const auto LIGHT_GREEN_COLOR = sf::Color(170, 215, 81, 255);
    const auto DARK_GREEN_COLOR = sf::Color(162, 209, 73, 255);
    const auto GRAY_COLOR = sf::Color(100, 100, 100, 255);

    const auto HUD_BACKGROUND_COLOR = sf::Color(87, 138, 28, 255);

    constexpr unsigned TEXT_HEADING_1 = 60;
    constexpr unsigned TEXT_HEADING_2 = 50;
    constexpr unsigned TEXT_HEADING_3 = 40;
    constexpr unsigned TEXT_MENU_ITEM = 30;
    const sf::String INPUT_PLACEHOLDER = L"¬ведите им€";
}
