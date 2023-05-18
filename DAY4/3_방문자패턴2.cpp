#include <iostream>
#include <list>
#include <vector>

// 1. 방문자 인터페이스
template<typename T> struct IVisitor
{
	virtual void visit(T& e) = 0;
	virtual ~IVisitor() {}
};

// 2. 방문의 대상의 인터페이스
template<typename T> struct IAcceptor
{
	virtual void visit(IVisitor<T>* visitor) = 0;
	virtual ~IAcceptor() {}
};







int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	TwiceVisitor<int> tv; 
	s.accept(&tv);		  

	ShowVisitor<int> sv;  
	s.accept(&sv);

}





