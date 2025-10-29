#ifndef SET_HPP
#define SET_HPP

#include "searchable_bag.hpp"
#include "array_bag.hpp"
#include "tree_bag.hpp"

class set {
	private:
		searchable_bag &bag_ptr;

	public:
		set(searchable_bag& other) : bag_ptr(other) {}

		void	insert(int value)
		{
			if (!bag_ptr.has(value)) {
				bag_ptr.insert(value);
			}
		}


		void	insert(int *array, int size)
		{
			for (int i = 0; i < size; i++) {
				if (!bag_ptr.has(array[i]))
					bag_ptr.insert(array[i]);
			}
		}

		void	print() const
		{
			bag_ptr.print();
		}

		void	clear()
		{
			bag_ptr.clear();
		}


		bool	has(int value) const
		{
			return (bag_ptr.has(value));
		}


		searchable_bag&	get_bag() const
		{
			return (bag_ptr);
		}


};

#endif
