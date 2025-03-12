#pragma once

namespace RBX {
	class Body;

	class Cofm {
	private:
		Body* body;

		bool dirty;
		float mass;

		// Vector3 cofmInBody;
		// Matrix3 moment;

		void updateIfDirty();

	public:
		Cofm(Body* body);
	};
}