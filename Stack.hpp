#ifndef STACK_HPP
#define STACK_HPP

#include "DoublyLinkedList.hpp"

template <typename T>
class Stack
{
public:
	void Push(T data)
	{
		try {
			m_list.PushBack(data);
		}
		catch (bad_alloc ex) {
			throw ex;
		}
	}

	void Pop()
	{
		try {
			m_list.PopBack();
		}
		catch (logic_error ex) {
			throw ex;
		}
	}

	T& Top()
	{
		try {
			return m_list.GetBack();
		}
		catch (bad_alloc ex) {
			throw ex;
		}
	}

	int GetSize()
	{
		return m_list.GetSize();
	}

	void Display()
	{
		m_list.Display();
	}

private:
	DoublyLinkedList<T> m_list;
};
#endif
