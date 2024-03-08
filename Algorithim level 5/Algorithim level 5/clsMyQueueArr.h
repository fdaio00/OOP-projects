#pragma once
#include <iostream>
#include"clsDynamicArray.h"
#include"clsMyQueue.h"

template<class T>
class clsMyQueueArr 
{

protected:
	 clsDynamicArray<T> _MyList;

public:
	void push(T Itme)
	{
		_MyList.InsertAtEnd(Itme);
	}

	void pop()
	{
		_MyList.DeleteFirstItem();
	}

	void Print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T back()
	{
		return _MyList.GetItem(_MyList.Size() - 1);
	}

	T GetItem(int Index)
	{
		return _MyList.GetItem(Index);
	}
	void UpdateItem(int Index, T Value)
	{
		
		_MyList.SetItem(Index, Value);
		
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void Clear()
	{
		_MyList.Clear();
	}

	void InsertAfter(int Index, T Value)
	{
		_MyList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

};

