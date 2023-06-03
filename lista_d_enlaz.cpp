#include "List.h"
#define _USE_MATH_DEFINES
#include <math.h>

//	Funciones mayor menor
bool ma(int a, int b)	{		return (a > b);		}
bool uns_ma(int a, int b){		return (a*a > b*b);	}
bool me(int a, int b)	{		return (a < b);		}
bool uns_me(int a, int b){		return (a*a < b*b);	}

//	
typedef bool (*pf)(int, int);

//	Swap
void swap_p(int* p, int* p2){
	int val = *p;
	*p = *p2;
	*p2 = val;
}

void print_array(int* p, int d){
	for (int* p1 = p; p1 < p + d;p1++)
		std::cout << *p1 << ',';
}

class Figura{
public:
	void get_data_cuadrado(double* p1) {
		std::cout << "Ingrese el lado dsfsadfsddddddddddddddddddd: ";
		std::cout << "ddddddddddddddddddddddddddd" << std::endl;
		std::cin >> *(p1);
		std::cout << "ddddddddddddddddddddddddddd" << std::endl;
	}
	void get_data_triangulo(double* p1) {
		std::cout << "Ingrese el altura : ";
		std::cin >> *(p1);
		std::cout << "Ingrese la base : ";
		std::cin >> *(p1 + 1);
	}
	void get_data_circulo(double* p1) {
		std::cout << "Ingrese el radio : ";
		std::cin >> *(p1);
	}
};

double circulo(double *r) {
	return M_PI * std::pow(*r,2);
}
double triangulo( double* par) {
	return ((*par) * (*(par + 1))) / 2;
}
double cuadrado( double *par) {
	return (*par) * (*par);
}

void calcular(double(*area)(double*), double* par) {
	std::cout << area(par) << std::endl;
}


typedef double(*Arr[3])(double*);
typedef void(Figura::*Arr_02)(double*);

int main()
{
	char mensaje[3][10] = { "circulo","cuadrado" ,"triangulo" };
	double datos[3][2];
	Arr areas = { circulo,cuadrado,triangulo };
//	Arr_02 sd = { get_data_circulo,get_data_cuadrado,get_data_triangulo };

	Arr_02 gci = &Figura::get_data_circulo;
	Arr_02 gc = &Figura::get_data_cuadrado;
	Arr_02 gt = &Figura::get_data_triangulo;


	Arr_02 arr[3] = { gci,gc,gt };
	char (*pCh)[10] = mensaje;
	for (double* p1 = *datos; p1 < *datos + sizeof(datos) / sizeof(datos[0]); p1++,pCh++){
		std::cout << "Ingrese los datos para calcular el area del "<< *pCh<<' ';
		std::cout << std::endl;
		((*(arr + (p1 - *datos)) ,p1), p1);
	}

	pCh = mensaje;
	for (double* p1 = *datos; p1 < *datos + sizeof(datos) / sizeof(datos[0]); p1++, pCh++){
		std::cout << "El area del " << *pCh << " es :";
		calcular(*(areas + (p1 - *datos)), p1);
		std::cout << std::endl;
	}

	/*
	* 
	*	Ordenamiento bajo los cuatro criterios
	bool (*ppf[4])(int, int) = {ma,uns_ma,me,uns_me};
	int op[] = { 0,1,2,3 };
	int arr[10] = { 4,-8,9,-7,9,-5,4,6,-9,15 };
	for (int* p = op; p < op + (sizeof(op) / sizeof(op[0])); p++){
		for (int* p2 = arr; p2 < arr + (sizeof(arr) / sizeof(arr[0]))-1; p2++){
			int* p_p = p2;
			for (int* p3 = p2 + 1; p3 < arr + (sizeof(arr) / sizeof(arr[0])); p3++){
				if ((*(ppf + *p))(*p_p, *p3))
					p_p=p3;
			}
			swap_p(p2, p_p);
		}
		std::cout << std::endl;
		print_array(arr, (sizeof(arr) / sizeof(arr[0])));
	}
	
	//	MiInstantiatedTemplate*ptr=new MiInstantiatedTemplate();
	//	ptr->insert_val(55);


	
	List* ptr = new List(0);

	ptr->insert(1);
	ptr->insert(11);
	ptr->insert(123);
	ptr->insert(456);
	ptr->insert(64844);

	ptr->insert_new_head(145);
	ptr->insert_new_head(478);
	ptr->insert_new_head(14);
	ptr->insert_new_head(84);

	std::cout << "Impresion directa:	";
	ptr->print();
	std::cout << std::endl;
	std::cout << "Impresion en reversa:	";
	ptr->print_reverse();
	std::cout << std::endl;

	ptr->reverse_list();
	std::cout << std::endl << "Aplicando REVERSE" << std::endl;
	std::cout << "Impresion directa:	";
	ptr->print();
	std::cout << std::endl;
	std::cout << "Impresion en reversa:	";
	ptr->print_reverse();
	std::cout << std::endl;

	*/

	return 0;
}

