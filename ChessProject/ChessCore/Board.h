#pragma once

#include <vector>
#include <array>
#include <optional>

#include "Piece.h"
#include "TypeAliases.h"

namespace ChessCore
{
    // Due to alignment, it appears there are three "spare" bytes that could be used
    class Board
    {
    public:
        // Data isn't a descriptive name, but "Board.Board" doesn't seem right either
        std::vector<std::pair<Piece, Position>> Data;

        bool WhiteToMove;

        // short, long castle for B/W? This seems unintuitive and silly
        // Castling is permitted only when neither the king has moved, nor the rook it is moving with
        // A castle can be either "kingside" or "queenside" 0-0 and 0-0-0 respectively (or short and long castle)
        // two bools per side would then be sufficient, both set to false if the King moves
        // and one set to false if the respective Rook moves

        // short, long
        std::pair<bool , bool> WhiteCanCastle;
        std::pair<bool, bool> BlackCanCastle;

        // Vector because 0 Enpassansts may be available, or 1 or 2 (pawn moved two spaces forward, in between two defending pawns)
        // Attacking piece Position, attacking piece end Position, Position that is captured on Enpassant.
        std::vector<std::tuple<Position, Position, Position>> EnpassantData;
    };
}