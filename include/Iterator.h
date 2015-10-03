#ifndef ITERATOR_CLASS
#define ITERATOR_CLASS

template <typename T>
class Iterator {
public:
	Iterator(T *items, int size) : _items(items), _size(size) {
		this->reset();
	}
	bool hasNext() {
		return this->_position < this->_size - 1;
	}
	T next() {
		return this->_items[++this->_position];
	}
	void reset() {
		this->_position = -1;
	}

private:
	int _position, _size;
	T *_items;
};

#endif