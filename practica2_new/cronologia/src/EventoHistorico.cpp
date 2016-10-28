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

