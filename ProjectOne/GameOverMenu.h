#pragma once
#include "SFML/Graphics.hpp"
#include "Shared.h"

namespace ApplesGame
{
    enum class GameOverMenuOptionKey
    {
        StartGame = 0,
        ExitToMainMenu
    };

    struct GameOverMenu
    {
        sf::Text heading;
        sf::Text scoreTitle;

        sf::Text recordsTitle;
        std::vector<sf::Text> leaderboard;

        std::map<GameOverMenuOptionKey, MenuOption> options = {
            {GameOverMenuOptionKey::StartGame, {L"Начать игру", {}}},
            {GameOverMenuOptionKey::ExitToMainMenu, {L"В главное меню", {}}},
        };

        GameOverMenuOptionKey selectedOptionKey = GameOverMenuOptionKey::StartGame;
    };

    struct Game;

    void ResetGameOverMenu(GameOverMenu& gameOverMenu);
    void UpdateGameOverLeaderboard(Game& game);
    void InitGameOverMenu(Game& game);
    void UpdateGameOverMenu(Game& game);
    void DrawGameOverMenu(sf::RenderWindow& window, const GameOverMenu& gameOverMenu);

    void GameOverMenuOptionSelectHandler(Game& game);
    void GameOverMenuKeyboardHandler(const sf::Event& event, Game& game);
}
