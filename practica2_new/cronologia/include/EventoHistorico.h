/**
  * @file EventoHistorico.h
  * @brief Fichero cabecera del TDA EventoHistorico
  *
  */
	
#ifndef __EVENTOHISTORICO
#define __EVENTOHISTORICO

#include <iostream>
#include <vector>

using namespace std;

/**
  * @brief  T.D.A EventoHistorico
  * 
  * Una instancia @e c del tipo de datos abstracto @c EventoHistorico
  * es un objeto compuesto por un entero que representa la fecha de uno
  * o mas eventos y por un vector de strings que representa el conjunto de eventos
  * de un año.
  *
  * @author Miguel Anguita y Leyre Figueira
  * @date Octubre 2016
  */
	
class EventoHistorico{
	
 private:
 	
/**
  * @page repConjunto Rep del TDA EventoHistorico
  * 
  * @section invConjunto Invariante de la representación
  *
  * El invariante es \e fecha >= 0
  *
  * @section faConjunto Función de abstracción
  *
  * Un objeto válido @e rep del TDA EventoHistorico representa al valor
  *
  * (rep.fecha,rep.eventos)
  *
  */
	
  int fecha;
  vector <string> eventos;
	
 public:

 /**
   * @brief Constructor por defecto.
   * @return Crea un objeto EventoHistorico con el año 0, sin eventos.
   */

  EventoHistorico();

 /**
   * @brief Constructor con un parametro.
   * @return Crea un objeto EventoHistorico con el año que se le pase por parametro, sin eventos.
   */

  EventoHistorico(int anio);
 		
/**
  * @brief Constructor de la clase
  * @param fecha y evento historico a construir
  * @param 
  * @return Crea un objeto EventoHistórico
  * @pre anio >= 0
  */	
  
  EventoHistorico(int anio, vector <string> &v);
  
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
	
  vector <string> Eventos();

/**
  * @brief Cambia la fecha de un evento historico.
  * @param Nueva fecha del evento.
  */

  void setFecha(int anio);

/**
  * @brief Cambia unos eventos por otros.
  * @param Nuevos eventos del objeto EventoHistorico.
  */

  void setEventos(vector <string> e);
  
/**
  * @brief Imprime un evento histórico con su año y el evento;
  */

  void print();

/**
  * @brief Añade uno o varios eventos nuevos a la de lista de eventos de un año.
  * @param Nuevos eventos a añadir.
  */

  void add(vector <string> v);

/**
  * @brief Elimina uno o varios eventos de la lista de eventos de un año.
  * @param Eventos a eliminar.
  */

  void eliminar(vector <string> v);

/**
  * @brief Busca los eventos que contengan la palabra solicitada y un año.
  * @param Una palabra del tipo string, a buscar.
  */

  vector <string> buscaEventosenFecha(string palabra, int anio);

/**
  * @brief Busca los eventos que contengan la palabra solicitada.
  * @param Una palabra del tipo string, a buscar.
  */

  vector <string> buscaEventos(string palabra);

/**
  * @brief Sobrecarga del operador ==
  * @param e EventoHistórico a comparar con el objeto implícito
  * @return Devuelve 1 si este objeto es igual a e
  */  
  
  bool operator ==(const EventoHistorico &e);

/**
  * @brief Sobrecarga del operador >
  * @param e EventoHistorico a comparar
  * @return Devuelve 1 si el primer evento ocurrio antes que el segundo, 0 si viceversa.
  */

  bool operator> (const EventoHistorico &e);

/**
  * @brief Sobrecarga del operador <
  * @param e EventoHistorico a comparar
  * @return Devuelve 0 si el primer evento ocurrio antes que el segundo, 1 si viceversa.
  */

  bool operator< (const EventoHistorico &e);

  
/**
  * @brief Salida de un evento histórico a ostream
  * @param os stream de salida
  * @param e EventoHistorico a escribir
  */
  
  friend ostream& operator<< (ostream& os, const EventoHistorico& e);

/**
  * @brief Entrada de un evento desde istream
  * @param is stream de entrada
  * @param e EventoHistorico
  */
  
  friend istream& operator>> (istream& is, EventoHistorico& e);
  
};

#endif
 
