#include <v8kernel/Cofm.h>

namespace RBX {
	Cofm::Cofm(Body* body)
	: body(body)
	, dirty(true)
	{
		// binja decomp, todo: investigate

		// this->cofmInBody.x = x87_r7;
		// this->cofmInBody.y = x87_r7;
		// this->cofmInBody.z = x87_r7;

	}
}