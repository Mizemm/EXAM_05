#ifndef SEARCHABLE_ARRAY_BAG_HPP
#define SEARCHABLE_ARRAY_BAG_HPP

#include "array_bag.hpp"
#include "searchable_bag.hpp"

class searchable_array_bag : public array_bag, public searchable_bag
{
	public:

		bool	has(int value) const
		{
			for (int i = 0; i < size; i++)
			{
				if (data[i] == value)
					return (true);
			}
			return (false);
		}

};

#endif