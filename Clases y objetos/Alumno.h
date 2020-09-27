//Arreglo de objetos

class Alumno{
	//Atributos
	private:
		float calMate, calProgra, promedio;
		
	//Métodos
	public:
		Alumno(float _calMate, float _calProgra){
			calMate = _calMate;
			calProgra = _calProgra;
		}
		
		Alumno(){ //Constructor por defecto
			
		}
		
		void pedirDatos();
		void mostrarNotas();
};
