#pragma once
#include <stack>
#include "Apple.h"
#include "Field.h"
#include "DifficultyLevel.h"
#include "Leaderboard.h"
#include "UI.h"
#include "Assets.h"
#include "Constants.h"
#include "Snake.h"

namespace ApplesGame
{
    enum class GameState
    {
        Playing = 0,
        GameOver,
        Pause,
        MainMenu,
        DifficultyLevel,
        Settings,
        Leaderboard,
        AskNickname
    };

    GameState GetCurrentGameState(const Game& game);

    struct Game
    {
        Assets assets;

        UI UI;

        Field field;
        Snake snake;
        std::vector<Apple> apples;

        unsigned score = 0;
        bool isWin = false;
        unsigned availableCoords = 0;

        DifficultyLevel difficulty;

        Settings settings;

        std::stack<GameState> gameStateStack;
        Leaderboard leaderboard;
    };

    struct Snake;

    void ResetGameState(Game& game);
    void PushGameState(Game& game, const GameState& state);
    void PopGameState(Game& game);
    void SwitchGameState(Game& game, const GameState& state);

    void ResetGame(Game& game);
    void InitGame(Game& game);
    void UpdateGame(Game& game, const float& deltaTime, Snake& snake);
    void DrawGame(sf::RenderWindow& window, const sf::View& HUDView, const Game& game);
}
