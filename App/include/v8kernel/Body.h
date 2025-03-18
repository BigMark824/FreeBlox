#include <iostream>
#include <Util/IndexArray.h>
#include <v8kernel/Cofm.h>
#include <v8kernel/Link.h>
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
		int stateIndex;

		Link* link;

		Body();
		~Body();

		static unsigned int getNextStateIndex();
		void advanceStateIndex();
		// SimBody* simBody;
	protected:
		Cofm* cofm;
		bool canThrottle;
		float mass;
	};
}