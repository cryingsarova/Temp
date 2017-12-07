#ifndef STACK_H
#define STACK_H



#include <list>


template < typename T, const int size>
class Stack
{
private:
	std::list<T> stack;
	int curSize = 0;
public: 

	int getMaxSize() { return size; }
	void push(const T& data)
	{
		if (curSize < size)
		{
			stack.push_back(data);
			curSize++;
		}
		else
		{
			throw "Stack is full!";
		}
	}
	T pop()
	{

		if (curSize > 0)
		{

			T tmp;
			tmp = stack.back();
			stack.pop_back();
			curSize--;
			return tmp;
		}
		else
		{
			throw "Stack is Empty!";
		}

	}
};

#endif
