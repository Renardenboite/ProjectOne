#pragma once
#include "SFML/Graphics.hpp"
#include "Shared.h"

namespace ApplesGame
{
    enum class AskNicknameMenuOptionKey
    {
        Yes = 0,
        No
    };

    struct AskNicknameMenu
    {
        sf::Text heading;
        sf::Text subHeading;

        sf::String nicknameInput;
        sf::Text nicknameText;


        std::map<AskNicknameMenuOptionKey, MenuOption> options = {
            {AskNicknameMenuOptionKey::Yes, {L"Да", {}}},
            {AskNicknameMenuOptionKey::No, {L"Нет", {}}},
        };

        AskNicknameMenuOptionKey selectedOptionKey = AskNicknameMenuOptionKey::No;
    };

    struct Game;

    void ResetAskNicknameMenu(AskNicknameMenu& askNicknameMenu);
    void InitAskNicknameMenu(Game& game);
    void DrawAskNicknameMenu(sf::RenderWindow& window, const AskNicknameMenu& askNicknameMenu);

    void AskNicknameMenuKeyboardHandler(const sf::Event& event, Game& game);
}