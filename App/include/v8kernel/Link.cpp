#include <v8kernel/Link.h>

namespace RBX {
	Link::Link()
	: body(NULL)
	, stateIndex(Body::getNextStateIndex())
	{
	}

	void Link::dirty()
	{
		Body* body = this->body;

		if (body)
		{
			// RBXAssert(body->link);
			body->advanceStateIndex();
		}
		
	}

	const CoordinateFrame& Link::getChildInParent()
	{
		Body* parent = this->body->parent;
		// Body::updatePV(parent);
		int stateIndex = parent->stateIndex;


		if (this->stateIndex == stateIndex)
		{
			computeChildInParent(childInParent);
			this->stateIndex = stateIndex;
		}

		return childInParent;

	}
}