#include <iostream>
#include <vector>
#include "Cronologia.h"

using namespace std;

Cronologia::Cronologia(){
	for(int i = 0; i < cronologia.size(); i++){
		cronologia[i].Fecha() = 0;
		cronologia[i].Eventos() = "";
	}

}

Cronologia::Cronologia(vector <EventoHistorico> c){
	int minimo = 999999;

	for(int i = 0; i < c.size(); i++){
		if(c[i].Fecha() < minimo){
			minimo = c[i].Fecha();
			cronologia.insert(c[i]);
		}
	}
}

Cronologia::Cronologia(const Cronologia &c){
	for(int i = 0; i < c.cronologia.size(); i++)
		cronologia[i] = c.cronologia[i];
}

vector <string> Cronologia::getEventos(int anio){
	bool encontrado = false;
	int pos_encontrado = 0;

	for(int i = 0; i < cronologia.size() && != encontrado; i++){
		if(cronologia[i].Fecha() == anio){
			encontrado = true;
			pos_encontrado = i;
		}
	}

	return cronologia[pos_encontrado].Eventos();
}

int Cronologia::getFecha(string evento){
	bool evento_encontrado = false;
	int fila_encontrada = 0;

	for(int i = 0; i < cronologia.size() && != evento_encontrado; i++){
		for(int j = 0; j < cronologia[i].Eventos().size() && != evento_encontrado; j++){
			if(cronologia[i].Eventos().at(j) == evento){
				evento_encontrado = true;
				fila_encontrada = i;
			}
		}
	}

	return cronologia[fila_encontrada].Fecha();
}

vector <EventoHistorico> Cronologia::buscaEventos(string palabra){

	string eventofinal;
	int posicion; 
	bool encontrado == false;
	bool igual;

	for (int i=0; i<Cronlogia.Eventos.size() || encontrado==false; i++){
		igual = true;	
		for (int j=0; j < palabra.size() || igual==true; j++ ){
			if (palabra[j] != Cronología.Eventos[i+j]){
				igual = false;			
			}
		} 
		if (igual == true){
			encontrado = true;
			posicion = i;
		}
	}

	if (encontrado==false){
		eventofinal == "No existe ningun evento en esa fecha";
	}
	else{
		eventofinal == cronologia[i].Eventos();
	}

	return eventofinal;

}

vector <EventoHistorico> Cronologia::buscaEventos(string palabra){
	int anio;
	bool econtradro = false;
	string eventofinal;
 	for(anio=0; anio < cronología.size()|| encontrado == false;anio++){
		eventofinal = buscaEventosenFecha(palabra, anio);
	}
	
	return anio;
}

vector <EventoHistorico> getEventosAdelante(int anio){
	vector <EventoHistorico> next;
	int pos = 0;

	for(int i = 0; i < cronologia.size(); i++){
		if(cronologia[i].Fecha() == anio)
			pos = i;
	} 

	for(int i = pos; i < cronologia.size(); i++)
		next.insert(cronologia[i]);
	
	return next;

}

bool Cronologia::operator==(const Cronologia &c){
	bool iguales = false;

	if(cronologia.size() == c.cronologia.size()){
		for(int i = 0; i < c.cronologia.size(); i++){
			if((cronologia[i].Fecha() == c.cronologia[i].Fecha()) && cronologia[i].Eventos().at(i) == c.cronologia[i].Eventos().at(i))
				iguales = true;
		}
	}

	return iguales;
}

ostream$ operator<< (ostream& os, const Cronologia &e){
	for(int i = 0; e.cronologia.size(); i++){
		os << e.cronologia[i].Fecha();
		for(int j = 0; j < e.cronologia[i].size(); j++)
			os << "#" << e.cronologia[i].Eventos().at(j);
	}

	return os;
}

istream& operator>> (istream& is, Cronologia &e){
	//IMPLEMENTAR
}


