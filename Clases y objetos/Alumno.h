//Arreglo de objetos

class Alumno{
	//Atributos
	private:
		float calMate, calProgra, promedio;
		
	//M�todos
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
