//Implementaci�n de la clase DiaAnio

class DiaAnio{
	//Atributos
	private:
		int dia,mes;
		
	//M�todos
	public:
		DiaAnio(int _dia,int _mes){ //Constructor
			dia = _dia;
			mes = _mes;
		}
		
		bool igual(DiaAnio& d);
		void visualizar();
};
