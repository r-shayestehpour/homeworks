#ifndef _VECTOR_H_
#include <vector>
#endif

#ifndef _STACK_H_
#define _STACK_H_ 0

template <class T>
class Stack
{
	private:
		std::vector<T> vec;
	public:
		Stack::Stack()
		{};
		T pop()
		{
			T temp = vec[vec.size()-1];
			vec.erase(vec.size()-1);
			return temp;
		};
		void push(T new_value)
		{
			this->vec.insert(new_value);
		};
		T top()
		{
			return vec[vec.size()-1];
		};

		friend Stack<T> operator+(Stack<T> this, Stack<T> other)
		{
			for (int i = other.vec.size())
			{
				this->push(other.vec[i]);
			}
		};
};

#endif