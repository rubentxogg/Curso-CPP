/*5. Construir un programa para una competencia de atletismo, el programa
debe gestionar una serie de atletas caracterizados por su número de atleta,
nombre y tiempo de carrera, al final el programa debe mostrar los datos
del atleta ganador de la carrera. */

#include <iostream>
using namespace std;

class Atleta{
	private:
		int numeroAtleta;
		string nombre;
		float tiempoCarrera;
	
	public:
		Atleta(int numeroAtleta,string nombre,float tiempoCarrera){
			this->numeroAtleta = numeroAtleta;
			this->nombre = nombre;
			this->tiempoCarrera = tiempoCarrera;
		}
		
		Atleta(){
			
		}
		
		~Atleta(){
			
		}
		
		float getTiempoCarrera();
		void mostrarDatos();
		static int indiceGanador(Atleta atletas[],int n);
};
