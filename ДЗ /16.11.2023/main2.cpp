#include <iostream>

namespace NODE
{
	struct node
	{
		int id{0};
		node *next_node{nullptr};
	};
	bool chaining(node *n1, node *n2)
	{
		if (n1->next_node != nullptr)
			return false;
		else
		{
			n1->next_node = n2;
			return true;
		}
	}
	bool unchaining(node *n1, node *n2)
	{
		if (n1->next_node != n2)
			return false;
		else
		{
			n1->next_node = nullptr;
			return true;
		}
	}
}
int main()
{
	NODE::node nodes[15];
	for (int i{0}; i < 15; ++i)
	{
		nodes[i].id = i * i;
		std::cerr << nodes[i].id << std::endl;
	}
	std::cout << "====================================\n";

	int max_even_index{0};

	for (int i{1}; i + 2 < 15; i += 2)
	{
		NODE::chaining(&(nodes[i]), &(nodes[i + 2]));
		max_even_index = i + 2;
	}

	for (int i{0}; i + 2 < 15; i += 2)
		NODE::chaining(&(nodes[i]), &(nodes[i + 2]));

	NODE::chaining(&(nodes[max_even_index]), &(nodes[0]));

	NODE::node head{0, nullptr};
	NODE::chaining(&head, &(nodes[1]));

	NODE::node tail{0, nullptr};
	NODE::chaining(&(nodes[14]), &tail);

	for (NODE::node *i{&head}; i != &tail; i = i->next_node)
		std::cerr << i->id << std::endl;

	int array_size{&(nodes[15]) - &(nodes[0])};
	int interval{array_size / 3};

	NODE::node head1{0, nullptr};
	NODE::chaining(&head1, head.next_node);
	NODE::unchaining(&head, head.next_node);

	NODE::node *end_of_1_chain{&head1};

	for (int i{0}; i < interval; ++i)
		end_of_1_chain = end_of_1_chain->next_node;

	NODE::node head2{0, nullptr};

	NODE::chaining(&head2, end_of_1_chain->next_node);
	NODE::unchaining(end_of_1_chain, end_of_1_chain->next_node);
	NODE::chaining(end_of_1_chain, &tail);

	std::cout << "--------------------------------\n";
	for (NODE::node *i{head1.next_node}; i != &tail; i = i->next_node)
		std::cerr << i->id << std::endl;

	NODE::node *end_of_2_chain{&head2};
	for (int i{0}; i < interval; ++i)
		end_of_2_chain = end_of_2_chain->next_node;

	NODE::node head3{0, nullptr};
	NODE::chaining(&head3, end_of_2_chain->next_node);
	NODE::unchaining(end_of_2_chain, end_of_2_chain->next_node);
	NODE::chaining(end_of_2_chain, &tail);

	std::cout << "--------------------------------\n";
	for (NODE::node *i{head2.next_node}; i != &tail; i = i->next_node)
		std::cerr << i->id << std::endl;
	std::cout << "--------------------------------\n";
	for (NODE::node *i{head3.next_node}; i != &tail; i = i->next_node)
		std::cerr << i->id << std::endl;
	std::cout << "--------------------------------\n";

	//! в пространстве имен NODE :
	//! объявить и определить структуру node, которая содержит две переменные :
	//! int id{}
	//! node* next_node{nullptr}

	//! объявить и определить функцию bool chaining(node* n1, node* n2) таким образом :
	//! если n1->next_node не равен nullptr, вернуть false
	//! иначе присвоить адрес n2 переменной n1->next_node

	//! объявить и определить функцию bool unchaining(node* n1, node* n2) таким образом :
	//! если n1->next_node не равен n2, вернуть false
	//! иначе присвоить nullptr переменной n1->next_node

	//! в функции main() :
	//! объявить массив NODE::node nodes[15]
	//! присвоить значения (индекс * индекс) переменным id в каждом элементе массива
	//! с помощью функции chaining() "связать" отдельно четные и нечетные элементы массива (по возрастанию)
	//! а затем "связать" максимальный четный элемент с минимальным нечетным

	//! инициализировать :
	//! NODE::node head{0, адрес первого элемента цепи},
	//! NODE::node tail{0, адрес последнего элемента цепи}
	//? строчкой выше я допустил ошибку, нужно было так : 	NODE::node tail{0, nullptr};
	//? nodes[14].next_node = &tail;

	//! вывести значения элементов массива с помощью head и tail (не используя nodes[...])

	//! с помощью функции unchaining() разбить цепочку исходных чисел (без head и tail)
	//! на 3 равные цепочки, каждая со своим head'ом (head1, head2, head3) и одним tail'ом (tail)
	//! вывести содержимое получившихся цепочек
}