/**
  * @file Cronologia.h
  * @brief Fichero cabecera del TDA Cronologia
  *
  */
	
#ifndef __CRONOLOGIA
#define __CRONOLOGIA

#include <iostream>
#include <vector>
#include "EventoHistorico.h"

using namespace std;

/**
  * @brief  T.D.A Cronologia
  * 
  * Una instancia @e c del tipo de datos abstracto @c Cronologia
  * es un objeto compuesto por un vector de elementos del tipo @c EventoHistorico.
  * 
  *
  * @include pruebacronologia.cpp
  * @author Miguel Anguita y Leyre Figueira
  * @date Octubre 2016
  */

class Cronologia{

 private:

/**
  * @page repConjunto Rep del TDA Cronologia.
  *
  * @section invConjunto Invariante de la representación
  *
  * El invariante es \e cronologia[i].Fecha() < cronologia[i+1].Fecha()
  *
  * @section faConjunto Función de abstracción
  *
  * Un objeto válido @e rep del TDA Cronologia representa al valor
  *
  * 
  *
  */

   vector <EventoHistorico> cronologia;

 public:

/**
  * @brief Constructor por defecto
  * @return Crea un objeto Cronologia.
  */

  Cronologia();	

/**
  * @brief Constructor de la clase
  * @param vector de EventoHistorico
  * @return Crea un objeto Cronologia 
  */

  Cronologia(vector <EventoHistorico> c);

/**
  * @brief Constructor de copias de la clase
  * @param c.cronologia
  */
 
  Cronologia(const Cronologia &c);

/**
  * @brief Eventos de un año determinado.
  * @param Año del que queremos conocer eventos.
  * @return Eventos del año solicitado. Si no se encuentra el año en la base de datos, se mostraran 
  * los eventos del primer año de la base de datos.
  */

  vector <string> getEventos(int anio);

/**
  * @brief Año de un evento
  * @param Evento del que queremos conocer fecha.
  * @param Año del evento solicitado. Si el evento no se encuentra, se devuelve el primer año de la base de datos.
  */

  int getFecha(string evento);

/**
  * @brief Busca la palabra en la cronologia y devuelve los eventos relacionados con esa palabra.
  * @param string palabra a buscar
  */

 // vector <EventoHistorico> buscaPalabra(string palabra);

/**
  * @brief Muestra los eventos sucedidos del año pedido en adelante.
  * @param Año a partir del cual mostramos eventos.
  * @return Los eventos de un año en adelante. Si el año es incorrecto, se devuelven todos los eventos.
  */

  vector <EventoHistorico> getEventosAdelante(int anio);

/**
  * @brief Sobrecarga del operador ==
  * @param c Cronologia a comparar con el objeto implícito
  * @return Devuelve 1 si este objeto es igual a c
  */

  bool operator==(const Cronologia &c);

/**
  * @brief Salida de una cronologia a ostream
  * @param os stream de salida
  * @param e Cronologia a escribir
  */
  
  friend ostream& operator<< (ostream& os, const Cronologia &e);

/**
  * @brief Entrada de una cronologia desde istream
  * @param is stream de entrada
  * @param e Cronologia
  */
  
  friend istream& operator>> (istream& is, Cronologia &e);

};

#endif

