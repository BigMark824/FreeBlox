#pragma once
#include <G3DAll.h>

namespace RBX {
	class Body;

	class Cofm {
	private:
		Body* body;

		bool dirty;
		float mass;

		G3D::Vector3 cofmInBody;
		G3D::Matrix3 moment;

		void updateIfDirty();

	public:
		Cofm(Body* body);
	};
}