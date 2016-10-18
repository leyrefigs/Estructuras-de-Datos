
#include <iostream>
#include "EventoHistorico.h"

using namespace std;

EventoHistorico::EventoHistorico(){
//constructor

}

EventoHistorico::EventoHistorico(const EventoHistorico &c){
//constructor de copia
	fecha = c.fecha;
	eventos = c.evento;
}


int EventoHistorico::Fecha(){
// devuelve la fecha del evento
	return fecha;
}

string EventoHistorico::EventosAnio(){
//devuelve los eventos de una fecha
}

void EventoHistorico::print(){
// impresión en cout
	cout << this -> fecha << ": " << this -> eventos;
}

bool EventoHistorico::operator==(const EventoHistorico& e){
// sobrecarga del operador ==
}

friend EventoHistorico::ostream& operator <<(ostream& os, const EventoHistorico& e){
// Salida de un evento a ostream
}

friend EventoHistorico::istream& operator >>(istream& is, EventoHistorico& e){
//Entrada de un evento desde istream
}

