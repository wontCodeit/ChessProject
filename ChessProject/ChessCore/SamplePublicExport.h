#pragma once

namespace ChessCore {
	// Placeholder implemented so a .lib file is created, allowing ChessCore.Test to build
	struct __declspec(dllexport) Example // note the structure: [Struct/Class] [export/import] [TypeName]
	{
	public:
		int ExampleId;
	};

}
