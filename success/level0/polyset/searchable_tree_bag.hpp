#ifndef SEARCHABLE_TREE_BAG_HPP
#define SEARCHABLE_TREE_BAG_HPP

#include "tree_bag.hpp"
#include "searchable_bag.hpp"

class searchable_tree_bag : public tree_bag, public searchable_bag {
	public:
	
	bool	has(int value) const
	{
		node*    current = tree;
		while (current)
		{
			if (value == current->value)
				return (true);
			else if (value > current->value)
				current = current->r;
			else 
				current = current->l;
		}
		return (false);
	}

};

#endif
