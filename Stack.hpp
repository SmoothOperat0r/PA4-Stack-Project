#ifndef STACK_HPP
#define STACK_HPP

#include "DoublyLinkedList.hpp"

template <typename T>
class Stack
{
public:
	void Push(T data)
	{
		m_list.PushBack(data);
	}

	void Pop()
	{
		m_list.PopBack();
	}

	T& Top()
	{
		return m_list.GetBack();
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