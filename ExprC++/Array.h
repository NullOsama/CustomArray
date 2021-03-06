#pragma once
#include<iostream>
#include<string>
template<typename T>
class Array
{
private:
	T* arr;
	int _capacity;
	int _size;
public:
	Array(double) = delete;
	Array(float) = delete;
	Array(char) = delete;
	Array() :_size(0), _capacity(10), arr(new T[10]) {}
	Array(int capacity)
	{
		if (_capacity < 0)
			throw std::bad_array_new_length();

		_size = capacity;
		_capacity = capacity + 5;
		arr = new T[_capacity];
	}
	int size()
	{
		return _size;
	}
	bool empty()
	{
		return _size == 0;
	}
	T &operator [](int index)
	{
		if (index >= _size || index < 0)
			throw std::bad_array_new_length();

		return arr[index];
	}
	void clear()
	{
		for (int i = 0; i < _capacity; i++)
			arr[i] = NULL;
		_size = 0;
	}

	void push_back(T newElement)
	{
		// _size exceded the _capacity
		if (_size+1 >= _capacity)
		{
			_capacity = _capacity == 0 ? 1 : _capacity * 2;
			T* newArr = new T[_capacity];

			// copy the old array content;
			for (int i = 0; i < _size; i++)
				newArr[i] = arr[i];

			arr = newArr;
		}
		arr[_size++] = newElement;
	}

	T* begin()
	{
		return arr;
	}

	T* end()
	{
		return arr + _size;
	}

	void insert(int index, T newElement)
	{
		if(index >= _size || index < 0)
			throw std::bad_array_new_length();

		if(_size+1 >= _capacity)
		{
			std::cout << "Under construction..." << std::endl;
			_capacity = _capacity == 0 ? 1 : _capacity * 2;
			T* newArr = new T[_capacity];


			int i = 0;
			for(;i<index;i++)
				newArr[i] = arr[i];
			newArr[index] = newElement;
			_size++;
			int j = i + 1;
			for (; i < _size; i++, j++)
				newArr[j] = arr[i];
			arr = newArr;
		}
		else
		{
			int i = ++_size;
			for (; i > index; i--)
			{
				arr[i] = arr[i-1];
			}
			arr[i] = newElement;
		}
	}

};

