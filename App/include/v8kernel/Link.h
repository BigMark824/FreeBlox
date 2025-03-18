#pragma once
#include <v8kernel/Body.h>
#include <G3DAll.h>

namespace RBX {
	class Link {
	protected:
		Body* body;
		CoordinateFrame parentCoord;
		CoordinateFrame childCoord;
		CoordinateFrame childCoordInverse;
		CoordinateFrame childInParent;
		int stateIndex;

		virtual void computeChildInParent(const CoordinateFrame&) const;
		void dirty();
	public:
		Link();
		const CoordinateFrame& getChildInParent();
	};
}