#pragma once

#include <tuple>
#include <vector>
#include "Piece.h"
#include "GameState.h"
#include "TypeAliases.h"

namespace ChessCore
{

    /// @brief Abstract Base Class (i.e. interface) for ChessEngines
    class IChessEngine
    {
    public:
        IChessEngine() = default;
        virtual ~IChessEngine() = default;
        IChessEngine(const IChessEngine&) = delete; // no copy constructor
        IChessEngine(IChessEngine&&) = delete; // no move constructor
        IChessEngine& operator=(const IChessEngine&) = delete; // no copy assignment
        IChessEngine& operator=(IChessEngine&&) = delete; // no move assignment

        /// @brief Move a piece to a new position, as well as apply any resulting change to board state (e.g. promotion, castling) 
        /// @param primaryPosition Where the primary piece (e.g. king when castling, pawn that is capturing) is located on the board
        /// @param endPosition Where the primary piece shall end
        virtual void MakeMove(Position primaryPosition, Position endPosition) = 0;

        /// @brief Set the depth at which the Engine will calculate moves, as well as perform initial boardstate calculations
        /// @param depth The number of full turns calculated and considered when determining the value of moves
        virtual void Initialise(int depth) = 0;

        /// @brief Calculate what the next highest value move is, at the depth set during initialisation
        /// @return The current Position of the primary piece moving and its end Position
        virtual std::pair<Position, Position> FindBestMove() = 0;

        /// @brief Calculate the GameState of the current board
        /// @return Whether the victor is undecided, decided or if the game has ended in stalemate
        virtual GameState GetGameState() = 0;
    };
}
