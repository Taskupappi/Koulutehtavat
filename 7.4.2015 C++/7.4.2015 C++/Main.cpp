#include "Opintosuoritus.h"



template <typename T>
T laskeKeskiArvo(T luku1, T luku2, T luku3)
{

 T tulos = (luku1 + luku2 + luku3) / 3;
	return tulos;
}






int main()
{
	Opintosuoritus op1("Kellunta", 5, 6);
	Opintosuoritus op2("Laivan Upotus", 5, 1);
	Opintosuoritus op3("Kaksintaistelu", 5, 10);
	Opintosuoritus op4("tulos: ", 0, 0);
	

	float keskiarvo = 0;

	op4 = laskeKeskiArvo(op1, op2, op3);
	op4.print();
	

	system("PAUSE");
}

