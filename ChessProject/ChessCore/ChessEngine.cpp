#include "pch.h"
#include "ChessEngine.h"
#include "GameState.h"
#include "TypeAliases.h"

namespace ChessCore
{
    void ChessCore::ChessEngine::MakeMove(Position primaryPosition, Position endPosition)
    {
    }
    
    void ChessCore::ChessEngine::Initialise(int depth)
    {
    }
    
    std::pair<Position, Position> ChessCore::ChessEngine::FindBestMove()
    {
        return std::pair<Position, Position>();
    }
    
    GameState ChessCore::ChessEngine::GetGameState()
    {
        return GameState();
    }
}
