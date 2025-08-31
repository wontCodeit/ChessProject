#include "pch.h"
#include "GameState.h"
#include "TypeAliases.h"
#include "ChessEngine.h"



namespace ChessCore
{
    ChessEngine::ChessEngine()
    {
    }

    void ChessEngine::Initialise(int depth)
    {
        depth;
        return;
    }

    void ChessEngine::MakeMove(Position primaryPosition, Position endPosition)
    {
        primaryPosition; endPosition;
        return;
    }

    std::pair<Position, Position> ChessEngine::FindBestMove()
    {
        return { 0, 0 };
    }

    GameState ChessEngine::GetGameState()
    {
        return GameState::Undecided;
    }
}
