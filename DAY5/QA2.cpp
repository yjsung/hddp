#include <iostream>

class Array
{
public:
	int arr[5];

	int size() { return 5; }

	int& operator[](int idx) { return arr[idx]; }
};

int main()
{
	      Array a1 = { 1,2,3,4,5 };
	const Array a2 = { 1,2,3,4,5 };

	// �Ʒ� 4���� ������ ������ - "�Ǿ� �Ѵ�", "�ȵǾ� �Ѵ�"
	//				//���ϴ°�	// �������
	int n1 = a1[0];	//	O			O
	int n2 = a2[0];	//	O			X
	a1[0] = 10;		//	O			O
	a2[0] = 10;		//	X			X

	// �ٽ� : �����ü�� ��� ��� �Լ��� ȣ���Ҽ� �ִ�.
}


