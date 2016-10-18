/**
	* @file EventoHistorico.h
	* @brief Fichero cabecera del TDA EventoHistorico
	*
	*/
	
#ifndef __EVENTOHISTORICO
#define __EVENTOHISTORICO

#include <iostream>

using namespace std;

/**
	* @brief  T.D.A EventoHistorico
	* 
	* Una instancia @e c del tipo de datos abstracto @c EventoHistorico
	* es un objeto compuesto por.....
	*
	*
	* @include pruebacronologia.cpp
	* @author Miguel Anguita y Leyre Figueira
	* @date Octubre 2016
	*/
	
class EventoHistorico{
	
 private:
 	
/**
	* @page Tipo Rep del TDA EventoHistorico
	* @section Conjunto invariante de la representación
	*
	*
	*
	*
	*/
		
		
		
	int fecha;
	string * eventos;
	
 public:
 	
/**
	* @brief Constructor por defecto de la clase.
	*/
	
  EventoHistorico();
	
/**
  * @brief Constructor de la clase
  * @param anio fecha del evento histórico a construir
  * @param 
  * @return Crea un objeto EventoHistórico
  * @pre 
  */	
  
  EventoHistórico(int anio);
  
/**
  * @brief Constructor de copias de la clase
  * @param c.anio
  * @param c.evento[i]
 */
 
  EventoHistorico(const EventoHistorico &c);
  
/**
	* @brief Año del evento
	* @return Devuelve año del evento
	*/
	
  int Fecha();
  
/**
	* @brief Evento
	* @return Devuelve el conjunto de eventos de un año;
	*/
	
  string * EventosAnio();
  
/**
  * @brief Imprime un evento histórico con su año y el evento;
  */
  
  void print();
  
/**
  * @brief Sobrecarga del operador ==
  * @param e EventoHistórico a comparar con el objeto implícito
  * @return Devuelve 0 si este objeto es igual a e
  */  
  
  bool operator ==(const EventoHistórico &e);
  
/**
  * @brief Salida de un evento histórico a ostream
  * @param os stream de salida
  * @param e EventoHistorico a escribir
  */
	
}}}}}}}}}}}}}

bool operator >(const EventoHistórico &e);

bool operator <(const EventoHistórico &e);
  
  friend ostream& operator<< (ostream& os, const EventoHistorico& e);

/**
  * @brief Entrada de un evento desde istream
  * @param is stream de entrada
  * @param e EventoHistorico
  */
  
  friend istream& operator>> (istream& is, EventoHistorico& e);
  
};

#endif
 
