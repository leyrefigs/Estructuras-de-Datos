#include <iostream>
#include <vector>
#include "EventoHistorico.h"

using namespace std;

EventoHistorico::EventoHistorico(){
	fecha = 0;

	for(int i = 0; i < eventos.size(); i++)
		eventos[i] = "";
}

EventoHistorico::EventoHistorico(int anio){
	fecha = anio;

	for(int i = 0; i < eventos.size(); i++)
		eventos[i] = "";
}

EventoHistorico::EventoHistorico(int anio, vector <string> v){
	fecha = anio;

	for(int i = 0; i < eventos.size(); i++)
		eventos[i] = v[i];
}

EventoHistorico::EventoHistorico(const EventoHistorico &c){
	fecha = c.fecha;

	for(int i = 0; i < c.eventos.size(); i++)
		eventos[i] = c.eventos[i];
}

inline int EventoHistorico::Fecha(){
	return fecha;
}

vector <string> EventoHistorico::Eventos(){
	return eventos;	
}

void EventoHistorico::setFecha(int anio){
	fecha = anio;
}

void EventoHistorico::setEventos(vector <string> e){
	eventos.resize(e.size());

	for(int i = 0; i < e.size(); i++)
		eventos[i] = e[i];
}

void EventoHistorico::print(){
	cout << this->fecha;

	for(int i = 0; i < eventos.size(); i++)
		cout << "#" << eventos[i];
}

void EventoHistorico::add(vector <string> v){
	for(int i = 0; i < v.size(); i++)
		eventos.push_back(v[i]);
}

void EventoHistorico::eliminar(vector <string> v){
	for(int i = 0; i < v.size(); i++){
		if(eventos[i] == v[i])
			eventos.erase(v[i]);
	}	
}

vector <string> EventoHistorico::buscaEventosenFecha(string palabra, int anio){

	fecha = anio;
	string eventofinal;
	bool encontrado == false;
	bool igual;

	for (int i=0; i<eventos.size() || encontrado==false; i++){
		igual = true;	
		for (int j=0; j < palabra.size() || igual==true; j++ ){
			if (palabra[j] != eventos[i+j]){
				igual = false;			
			}
		} 
		if (igual == true){
			encontrado = true;
		}
	}

	if (encontrado==false){
		eventofinal == "No existe ningun evento en esa fecha";
	}
	else{
		eventofinal == Eventos();
	}

	return eventofinal;

}

vector <string> EventoHistorico::buscaEventos(string palabra){
	//faltaria poner el tope de la fecha en el bucle que no se como encontrarlo
	bool econtradro = false;
	string eventofinal;
 	for(anio=0; encontrado == false;anio++){
		eventofinal = buscaEventosenFecha(palabra, anio);
	}
	
	return anio;
}

bool EventoHistorico::operator==(const EventoHistorico &e){
	if( (e.Fecha() == this->fecha) && (e.Eventos() == this->eventos) )
		return true;
	else
		return false;
}

bool EventoHistorico::operator>(const EventoHistorico &e){
	if(this->fecha < e.fecha)
		return true;
	else
		return false;
}

bool EventoHistorico::operator<(const EventoHistorico &e){
	if(this->fecha > e.fecha)
		return true;
	else
		return false;
}

ostream& operator<< (ostream& os, const EventoHistorico &e){
	os << e.fecha;

	for(int i = 0; i < e.eventos.size(); i++)
		os << "#" << e.eventos[i];
	return os;
}

istream& operator>> (istream& is, const EventoHistorico &e){
	char caracter;

	is >> e.fecha;

	for (int i = 0; i < e.eventos.size(); i++)
		is >> caracter >> e.eventos[i];
	return is;

}

