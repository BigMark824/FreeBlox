#pragma once
#include <G3D/Array.h>
#include <iostream>
namespace RBX {
	template <class Item, int& (Item::* getIndex)()>
	class IndexArray
	{
	private:
		G3D::Array<Item*> array;

		int& indexOf(Item* item) const {
			return (item->*getIndex)();
		}
		
	public:
		typedef Item** Iterator;

	};
}
