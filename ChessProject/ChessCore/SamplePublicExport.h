#pragma once

// Placeholder implemented so a .lib file is created, allowing ChessCore.Test to build
namespace ChessCore {
	struct __declspec(dllexport) Example // note the structure: [Struct/Class] [export/import] [TypeName]
	{
	public:
		int ExampleId;
	};

}
