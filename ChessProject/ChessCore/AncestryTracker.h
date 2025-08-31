#pragma once

#include <vector>
#include "AncestryEntry.h"

namespace ChessCore
{
    class AncestryTracker
    {
    public:
        std::vector<std::vector<AncestryEntry>> Data;

        void DropHighestLevel();
    };
}
