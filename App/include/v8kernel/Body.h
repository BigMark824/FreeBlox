#include <iostream>
#include <v8kernel/Cofm.h>
#include <Util/IndexArray.h>
// #include <v8kernel/SimBody.h>
// #include <v8kernel/KernelIndex.h>
namespace RBX {
	class Body {
	public:
		int32_t index;
		int& getIndex() { return index; };

		Body* root;
		Body* parent;

		IndexArray<Body, &Body::getIndex> children;

		Cofm* cofm;
		bool canThrottle;
		float mass;
		int stateIndex;

		Body();
		~Body();
		// SimBody* simBody;
	private:
		int getNextStateIndex();
		void advanceStateIndex();
	};
}