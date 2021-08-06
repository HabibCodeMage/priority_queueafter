#pragma once
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include"dequeu.h"
template<typename E,typename C>
class priorityqueue
{
private:
	deque<E>L;
	C isless;
public:
	int size() const;
	bool empty() const;
	void insert(const E & e);
    const E& min() const;
	void removeMin();
};
template<typename E, typename C>
int priorityqueue<E, C>::size() const
{
	return L.getsize();
}
template<typename E, typename C>
bool priorityqueue<E, C> ::empty() const
{
	return L.empty();
}
template<typename E, typename C>
void priorityqueue<E, C> ::insert(const E& e)
{
	typename deque<E>::iterator it(L.begin());
	while (it != L.end() && !isless(e,*it))++it;
	L.insert(it, e);
}
template<typename E, typename C>
const E& priorityqueue<E, C>::min() const
{
	return L.front();
}
template<typename E, typename C>
void priorityqueue<E, C>::removeMin()
{
	return L.erasefront();
}
#endif // !PRIORITYQUEUE_h


