#pragma once

#include <unordered_set>
#include <utility>

#include "IChessEngine.h"
#include "AncestryTracker.h"
#include "Board.h"
#include "TypeAliases.h"

namespace ChessCore
{
    class ChessEngine : public IChessEngine 
    {
    public:
        ChessEngine();

        void Initialise(int depth);

        void MakeMove(Position primaryPosition, Position endPosition);

        std::pair<Position, Position> FindBestMove();

        GameState GetGameState();

    private:
        int m_depth;
        AncestryTracker m_ancestryTracker;
        std::unordered_set<Hash, Board> m_boards;
    };
}