#ifndef _TSTACK_H_
#define _TSTACK_H_


template <class T>
class sstack
{
private:
	int length;
	T* storage;
	int top;
public:
	sstack(int);
	sstack(const sstack<T> &st);
	bool push(const T &item);
	bool pop( T &item);
	void print();
	int getlen();
};


template<class T>
int sstack<T>::getlen()
{
	return length;
}

template<class T>
sstack<T>::sstack(int a)
{
	length = a;
	storage = new T[length];
	top = 0;
}

template<class T>
sstack<T>::sstack(const sstack<T> &st)
{
	length = st.length;
	top = st.top;
	for (int i = 0; i < top; i++)
		storage[i] = st.storage[i];
}

template<class T>
bool sstack<T>::push(const T &item)
{
	if (top >= length)
		return false;
	else
		storage[top++] = item;
	return true;
}

template<class T>
bool sstack<T>::pop( T &item)
{
	if (top <= 0)
		return false;
	else
		item = storage[--top];
	return true;
}

template<class T>
void sstack<T>::print()
{
	for (int i = 0; i < top; ++i)
		std::cout << storage[i] << " ";
}
#endif