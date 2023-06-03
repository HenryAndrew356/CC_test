
#include "List.h"

int main()
{
	//	MiInstantiatedTemplate*ptr=new MiInstantiatedTemplate();
	//	ptr->insert_val(55);

	List* ptr = new List();

	ptr->insert(1);
	ptr->insert(11);
	ptr->insert(123);
	ptr->insert(456);
	ptr->insert(64844);

	ptr->insert_new_head(145);
	ptr->insert_new_head(478);
	ptr->insert_new_head(14);
	ptr->insert_new_head(84);

	ptr->insert_new_head(146);
	ptr->insert_new_head(2346);
	ptr->insert_new_head(789);
	ptr->insert_new_head(1000);


	ptr->print();
	std::cout << std::endl;
	ptr->print_reverse();
	std::cout << std::endl;

	ptr->reverse_list();
	std::cout <<std::endl<< "Aplicando reverse" << std::endl;
	ptr->print();
	std::cout << std::endl;
	ptr->print_reverse();
	std::cout << std::endl;


	return 0;
}

