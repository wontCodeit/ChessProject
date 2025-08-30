#pragma once

#include <set>
#include <optional>
#include "TypeAliases.h"

namespace ChessCore
{
	struct AncestryEntry
	{
	public:
		const ChessCore::Hash Hash;
		std::optional<int> PointValue;
		std::set<ChessCore::Hash> Descendants;
	};
}