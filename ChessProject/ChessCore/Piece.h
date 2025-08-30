#pragma once

#include <stdexcept>

namespace ChessCore
{
    enum Piece : unsigned char
    {
        WhitePawn,
        WhiteRook,
        WhiteKnight,
        WhiteBishop,
        WhiteKing,
        WhiteQueen,
        BlackPawn,
        BlackRook,
        BlackKnight,
        BlackBishop,
        BlackKing,
        BlackQueen,
    };

    /// @brief Get the generally accepted "value" of a chess piece. Numbers multiplied by factor 100 to avoid floating point calculations
    /// @param piece The piece to get the value of
    /// @return Traditional value of the chess piece * 100
    constexpr unsigned int GetPieceValue(const Piece piece)
    {
        switch (piece)
        {
            case WhitePawn:
            case BlackPawn:
                return 100;

            case WhiteKnight:
            case BlackKnight:
                return 300;

            case WhiteBishop:
            case BlackBishop:
                return 325;

            case WhiteRook:
            case BlackRook:
                return 500;
                
            case WhiteQueen:
            case BlackQueen:
                return 900;

            case WhiteKing:
            case BlackKing:
                // return enormous value so engine always prefers taking the king
                return 100'000; 

            default:
                throw std::domain_error("No value exists for the given Piece");
        }
    }
}