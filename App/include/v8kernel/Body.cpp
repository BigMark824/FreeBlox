#include <v8kernel/Body.h>

namespace RBX {
	Body::Body()
		: mass(0.0f)
		, index(UINT32_MAX) // i think this might actually supposed to be -1, TODO: investigate
		, stateIndex(getNextStateIndex())
		, root(NULL)
		, parent(NULL)
		, canThrottle(true)
		, cofm(NULL)
		
	{
		root = this;
		// simBody = new SimBody(this);
	}

	Body::~Body()
	{
		if (parent)
			setParent(NULL);

		/*
			if (simBody)
			{
				delete simBody;
				simBody = NULL;
			}
		*/
	}
	int Body::getNextStateIndex()
	{
		static int p;
		int result = ++p;

		if (result == INT_MAX)
			p = 1;

		return result;
	}

	void Body::advanceStateIndex()
	{
		stateIndex = getNextStateIndex();
	}
}