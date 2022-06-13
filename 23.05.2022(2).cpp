Stack.h

#pragma once
template<typename type>
class Stack {
	int max;
	type* data;				// Массив для хранения данных
	int _top;				// Указатель на вершину стека
public:
	Stack();					// Конструктор по умолчанию
	Stack(int size);			// Конструктор для инициализации размера стека
	Stack(const Stack& st);		// Конструктор копирования
	Stack(Stack&& st);			// Конструктор переноса

	bool empty()const;			// Пустой стек?						
	void push(type& val);		// Добавление элемента в конец стека
	void push(type&& val);		// Перенос элемента в конец стека
	int size()const;			// Количество элементов в стеке
	void pop();					// Удаление последнего элемента в стеке
	const type& top()const;		// Возврат последнего элемента в стеке
	void swap(Stack& val);		// Обмен 2х стеков местами

	~Stack();					// Деструктор
};

template<typename type>
class Queue {
private:
	type* wait;			//Очередь
	int maxLength;		//Максимальный размер очереди
	int length;			//Текущий размер очереди
public:
	Queue();			//Конструктор
	Queue(int m);		//Конструктор с размером очереди
	void add(type c);	//Добавление элемента    
	type extract();		//Извлечение элемента
	void clear();		//Очистка очереди
	bool is_empty();	//Проверка существования элементов в очереди
	bool is_full();		//Проверка на переполнение очереди
	int get_count();	//Количество элементов в очереди
	void show();		//демонстрация очереди
	~Queue();			//Деструктор                       
};

template<typename type>
inline Stack<type>::Stack()
{
	data = nullptr;
	_top = nullptr;
}

template<typename type>
inline Stack<type>::Stack(int size)
{
	this->_top = 0;
}

template<typename type>
inline Stack<type>::Stack(const Stack& st)
{
	this->data = new int[st.data];
	for (auto i = 0; i < st.data; i++) {
		this->data = st.data;
	}
}

template<typename type>
inline Stack<type>::Stack(Stack&& st)
{
	this->data = st.data;
	this->_top = st._top;
	st.data = nullptr;
}

template<typename type>
inline bool Stack<type>::empty() const
{
	if (this->_top = 0) {
		return 1;
	}
	else {
		return 0;
	}
}

template<typename type>
inline void Stack<type>::push(type& val)
{
	int element;
	if (element < this->_top) {
		if (this->element < this->max) {
			this->data[this->element] = val;
			this->element++;
		}
	}
}

template<typename type>
inline void Stack<type>::push(type&& val)
{
	if (this->_top < this->max) {
		this->data[this->_top] = val;
		this->_top++;
	}
}

template<typename type>
inline int Stack<type>::size() const
{
	return this->_top;
}

template<typename type>
inline void Stack<type>::pop()
{
	if ((this->_top) > 0)
	{
		this->_top--;
		this->data = this->data[this->_top];
		return this->data;
	}

}

template<typename type>
inline const type& Stack<type>::top() const
{
	if ((this->_top) > 0) {
		return this->data[this->_top - 1];
	}
}

template<typename type>
inline Stack<type>::~Stack()
{
	delete[] data;
}

template<typename type>
inline Queue<type>::Queue()
{
	*wait = nullptr;
	maxLength = nullptr;
	length = nullptr;
}

template<typename type>
inline void Queue<type>::add(type c)
{
}

template<typename type>
inline void Queue<type>::clear()
{
	if (this->wait)
		delete[] this->wait;
}

template<typename type>
inline void Queue<type>::show()
{
	std::cout << *wait << std::endl;
}

template<typename type>
inline Queue<type>::~Queue()
{
	delete[] wait;
}


main

int main()
{
    
}
