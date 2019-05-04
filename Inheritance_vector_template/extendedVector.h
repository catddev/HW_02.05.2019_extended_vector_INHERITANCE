#pragma once
#include"Vector.h"

template <typename T>
class extendedVector :public Vector<T> {
public:
	extendedVector() :Vector<T>() {}
	extendedVector(int size) :Vector<T>(size) {}
	~extendedVector();

	void del_front();
	void add_front(T el);

	void del_pos(int pos);
	void add_pos(int pos, T el);

	bool empty();
};

template<typename T>
inline extendedVector<T>::~extendedVector()
{
	cout << "Destcruct extended vec" << endl;
	delete[] Vector<T>::els;
}

template<typename T>
inline void extendedVector<T>::del_front()
{
	for (int i = 0; i < Vector<T>::size(); i++)
		Vector<T>::els[i] = Vector<T>::els[i + 1];
	Vector<T>::cur_size--;
}

template<typename T>
inline void extendedVector<T>::add_front(T el)
{
	if (Vector<T>::buf_size == 0)
	{
		Vector<T>::buf_size = 4;
		Vector<T>::els = new T[Vector<T>::buf_size];
		Vector<T>::els[0] = el;
		Vector<T>::cur_size++;
	}
	else if (Vector<T>::cur_size == Vector<T>::buf_size) {
		Vector<T>::buf_size *= 2;
		T *tmp = new T[Vector<T>::buf_size];

		tmp[0] = el;
		for (int i = 0; i < Vector<T>::cur_size; i++)
			tmp[i + 1] = Vector<T>::els[i];
		delete[] Vector<T>::els;
		Vector<T>::els = tmp;
		Vector<T>::cur_size++;
		//return;
	}
	else if (this->cur_size < this->buf_size) {
		Vector<T>::els[0] = el;
		for (int i = 0; i < Vector<T>::cur_size; i++)
			Vector<T>::els[i + 1] = Vector<T>::els[i];

		Vector<T>::cur_size++;
	}
}

template<typename T>
inline void extendedVector<T>::del_pos(int pos)
{
	for (int i = pos; i < Vector<T>::size(); i++)
		Vector<T>::els[i] = Vector<T>::els[i + 1];
	Vector<T>::cur_size--;
}

template<typename T>
inline void extendedVector<T>::add_pos(int pos, T el)
{
	if (pos>=cur_size) {
		Vector<T>::add(el);
	}
	else if (Vector<T>::cur_size == Vector<T>::buf_size) {
		Vector<T>::buf_size *= 2;
		T *tmp = new T[Vector<T>::buf_size];

		tmp[pos] = el;
		for (int i = pos; i < Vector<T>::cur_size; i++)
			tmp[i + 1] = Vector<T>::els[i];
		delete[] Vector<T>::els;
		Vector<T>::els = tmp;
		Vector<T>::cur_size++;
	}
	else if (this->cur_size < this->buf_size) {
		Vector<T>::els[pos] = el;
		for (int i = pos; i < Vector<T>::cur_size; i++)
			Vector<T>::els[i + 1] = Vector<T>::els[i];

		Vector<T>::cur_size++;
	}
}

template<typename T>
inline bool extendedVector<T>::empty()
{
	return(Vector<T>::cur_size == 0);
}
