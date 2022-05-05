#include <iostream>
#include <fstream>
using namespace std;


/*! \mainpage <CENTER> ESERCITAZIONE N1 PERTOSA </CENTER>
    * \author LUCA PERTOSA
    * \version  V1
    * \date  05-05-2022
    * \section CARATTERISTICHE SOFTWARE
    * Il programma consente la gestione di una biblioteca tramite un menu dove puoi scegliere cosa fare:
    * - inserimento di uno o piu libri
    * - stampare il catalogo dei libri
    * - rimuovere un libro dal catalogo tramite ISBN
    * - ricercare un libro dal catalogo tramite ISBN
    * - modificare dati di un libro dal catalogo tramite ISBN
    * - salvataggio del catalogo su un file .txt
    *
    * \param libro: una struct contenente ISBN, titolo, autore, editore, anno di pubblicazione, prezzo e tag del genere
    * \param x: variabile globale usata come indice del vettore di struct
    */


/*! \brief struct contenente ISBN, titolo, autore, editore, anno di pubblicazione, prezzo e tag del genere
*/

struct Libro{
string ISBN;
string titolo;
string autore;
string editore;
int annopubblicazione;
float prezzo;
string tag;
};

int x=-1;

/*! \fn inserimento_libro(Libro libro[])
    \brief inserisce uno o piu libri al catalogo
*/

inserimento_libro(Libro libro[]){
x++;
cout<<endl;
cout<<"INSERIMENTO LIBRO";
cout<<endl;
cout<<endl;
cout<<"INSERISCI ISBN: ";
cin>>libro[x].ISBN;
cout<<"INSERISCI TITOLO: ";
cin>>libro[x].titolo;
cout<<"INSERISCI AUTORE: ";
cin>>libro[x].autore;
cout<<"INSERISCI EDITORE: ";
cin>>libro[x].editore;
cout<<"INSERISCI ANNO DI PUBBLICAZIONE: ";
cin>>libro[x].annopubblicazione;
cout<<"INSERISCI PREZZO: ";
cin>>libro[x].prezzo;
cout<<"INSERISCI TAG DEL GENERE: ";
cin>>libro[x].tag;
cout<<endl;
}

/*! \fn stampa_catalogo(Libro libro[])
    \brief stampa il catalogo completo dei libri
*/

void stampa_catalogo(Libro libro[]){
for (int i=0; i<=x; i++){
cout<<endl;
cout<<"ISBN: "<<libro[i].ISBN<<endl;
cout<<"TITOLO: "<<libro[i].titolo<<endl;
cout<<"AUTORE: "<<libro[i].autore<<endl;
cout<<"EDITORE: "<<libro[i].editore<<endl;
cout<<"ANNO DI PUBBLICAZIONE: "<<libro[i].annopubblicazione<<endl;
cout<<"PREZZO: "<<libro[i].prezzo<<endl;
cout<<"TAG DEL GENERE: "<<libro[i].tag<<endl;
}
}

/*! \fn elimina_libro(Libro libro[])
    \brief elimina uno o piu libri dal catalogo tramite ISBN
    \param temp: stringa che usiamo per trovare il libro
*/

void elimina_libro(Libro libro[]){
string temp;
cout<<endl;
cout<<"QUALE LIBRO VUOI ELIMINARE?: ";
cin>>temp;

for(int i=0; i<=x; i++){
if(temp==libro[i].ISBN){
libro[i].ISBN="";
libro[i].titolo="";
libro[i].autore="";
libro[i].editore="";
libro[i].annopubblicazione=0;
libro[i].prezzo=0;
libro[i].tag="";
}
}
cout<<"LIBRO ELIMINATO!!!"<<endl;
}

/*! \fn ricerca_libro(Libro libro[])
    \brief ricerca uno o piu libri dal catalogo tramite ISBN
    \param temp: stringa che usiamo per trovare il libro
*/

void ricerca_libro(Libro libro[]){
string temp;
cout<<endl;
cout<<"INSERISCI CODICE ISBN: ";
cin>>temp;

for(int i=0; i<=x; i++){
if(temp==libro[i].ISBN){
cout<<endl;
cout<<"ISBN: "<<libro[i].ISBN<<endl;
cout<<"TITOLO: "<<libro[i].titolo<<endl;
cout<<"AUTORE: "<<libro[i].autore<<endl;
cout<<"EDITORE: "<<libro[i].editore<<endl;
cout<<"ANNO DI PUBBLICAZIONE: "<<libro[i].annopubblicazione<<endl;
cout<<"PREZZO: "<<libro[i].prezzo<<endl;
cout<<"TAG DEL GENERE: "<<libro[i].tag<<endl;
}
}
}

/*! \fn modifica_libro(Libro libro[])
    \brief modifica uno o piu libri dal catalogo con un menu dedicato e tramite ISBN
    \param temp: stringa che usiamo per trovare il libro
    \param scelta: variabile che usiamo per la scelta del menu
*/

void modifica_libro(Libro libro[]){
int i;
int scelta;
string temp;
cout<<endl;
cout<<"QUALE LIBRO VUOI MODIFICARE?: ";
cin>>temp;

for(i=0; i<=x; i++){
if(temp==libro[i].ISBN){
do{
cout<<endl;
cout<<"1) MODIFICA ISBN"<<endl;
cout<<"2) MODIFICA TITOLO"<<endl;
cout<<"3) MODIFICA AUTORE"<<endl;
cout<<"4) MODIFICA EDITORE"<<endl;
cout<<"5) MODIFICA ANNO DI PUBBLICAZIONE"<<endl;
cout<<"6) MODIFICA PREZZO"<<endl;
cout<<"7) MODIFICA TAG DEL GENERE"<<endl;
cout<<"8) MODIFICA TUTTO"<<endl;
cout<<"9) USCITA DAL MENU DI MODIFICA"<<endl;
cout<<"COSA VUOI FARE?: ";
cin>>scelta;
cout<<endl;

switch(scelta){
case 1:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI ISBN: ";
    cin>>libro[i].ISBN;
    cout<<"ISBN CAMBIATO!!!";
    cout<<endl;
    break;

case 2:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI TITOLO: ";
    cin>>libro[i].titolo;
    cout<<"TITOLO CAMBIATO!!!";
    cout<<endl;
    break;

case 3:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI AUTORE: ";
    cin>>libro[i].autore;
    cout<<"AUTORE CAMBIATO!!!";
    cout<<endl;
    break;

case 4:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI EDITORE: ";
    cin>>libro[i].editore;
    cout<<"EDITORE CAMBIATO!!!";
    cout<<endl;
    break;

case 5:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI ANNO DI PUBBLICAZIONE: ";
    cin>>libro[i].annopubblicazione;
    cout<<"ANNO DI PUBBLICAZIONE CAMBIATO!!!";
    cout<<endl;
    break;

case 6:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI PREZZO: ";
    cin>>libro[i].prezzo;
    cout<<"PREZZO CAMBIATO!!!";
    cout<<endl;
    break;

case 7:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI TAG DEL GENERE: ";
    cin>>libro[i].tag;
    cout<<"TAG DEL GENERE CAMBIATO!!!";
    cout<<endl;
    break;

case 8:
    cout<<endl;
    cout<<"LIBRO N "<<libro[i].ISBN<<"";
    cout<<endl;
    cout<<endl;
    cout<<"INSERISCI ISBN: ";
    cin>>libro[i].ISBN;
    cout<<"INSERISCI TITOLO: ";
    cin>>libro[i].titolo;
    cout<<"INSERISCI AUTORE: ";
    cin>>libro[i].autore;
    cout<<"INSERISCI EDITORE: ";
    cin>>libro[i].editore;
    cout<<"INSERISCI ANNO DI PUBBLICAZIONE: ";
    cin>>libro[i].annopubblicazione;
    cout<<"INSERISCI PREZZO: ";
    cin>>libro[i].prezzo;
    cout<<"INSERISCI TAG DEL GENERE: ";
    cin>>libro[i].tag;
    cout<<"DATI DEL LIBRO CAMBIATI!!!";
    cout<<endl;
    break;

case 9:
    cout<<endl;
    cout<<"USCITA DAL MENU IN CORSO..."<<endl;
    cout<<"USCITA DAL MENU EFFETTUATA!!!"<<endl;
    cout<<endl;
    break;

default:
    cout<<endl;
    cout<<"SCELTA NON VALIDA"<<endl;
    cout<<"PREGO, RIPROVARE..."<<endl<<endl;
    cout<<endl;
    break;
}
}
while(scelta!=9);

}}}

/*! \fn salvataggio_catalogo(Libro libro[])
    \brief salva tutto il catalogo su un file
*/

void salvataggio_catalogo(Libro libro[]){

    ofstream scrivi("salvataggio.txt");
    if(!scrivi){
        cout<<endl;
        cout<<"ERRORE SALVATAGGIO CATALOGO";
    }
    else{
        for(int i=0; i<=x; i++){
        scrivi<<"/n";
        scrivi<<"ISBN: "<<libro[i].ISBN<<"\n";
        scrivi<<"TITOLO: "<<libro[i].titolo<<"\n";
        scrivi<<"AUTORE: "<<libro[i].autore<<"\n";
        scrivi<<"EDITORE: "<<libro[i].editore<<"\n";
        scrivi<<"ANNO DI PUBBLICAZIONE: "<<libro[i].annopubblicazione<<"\n";
        scrivi<<"PREZZO: "<<libro[i].prezzo<<"\n";
        scrivi<<"TAG DEL GENERE: "<<libro[i].tag<<"\n";
        scrivi<<"//////////////////////////////////////\n";
        }
        }
    scrivi.close();
        cout<<endl;
        cout<<"SALVATAGGIO EFFETTUATO!!!";
        cout<<endl;
        cout<<endl;
}

/*! \fn menu(Libro libro[])
    \brief menu principale del programma
    \param menu: variabile che usiamo per la scelta del menu
*/

void menu(Libro libro[]){
int menu=0;

do{
cout<<endl;
cout<<"MENU:"<<endl<<endl;
cout<<"1) INSERISCI NUOVO LIBRO"<<endl;
cout<<"2) VISUALIZZA CATALOGO BIBLIOTECA"<<endl;
cout<<"3) CANCELLA LIBRO TRAMITE ISBN"<<endl;
cout<<"4) RICERCA LIBRO TRAMITE ISBN"<<endl;
cout<<"5) MODIFICA LIBRO TRAMITE ISBN"<<endl;
cout<<"6) SALVA CATALOGO LIBRI"<<endl;
cout<<"7) ESCI DAL MENU"<<endl<<endl;
cout<<"FAI UNA SCELTA: ";
cin>>menu;

switch(menu){
case 1:
	cout<<endl;
    inserimento_libro(libro);
    cout<<endl;
break;

case 2:
	cout<<endl;
    stampa_catalogo(libro);
    cout<<endl;
break;

case 3:
	cout<<endl;
    elimina_libro(libro);
    cout<<endl;
break;

case 4:
	cout<<endl;
    ricerca_libro(libro);
    cout<<endl;
break;

case 5:
    cout<<endl;
    modifica_libro(libro);
    cout<<endl;
break;

case 6:
    cout<<endl;
    salvataggio_catalogo(libro);
    cout<<endl;
break;

case 7:
    cout<<endl;
    cout<<"USCITA DAL MENU IN CORSO..."<<endl;
    cout<<"USCITA DAL MENU EFFETTUATA!!!"<<endl;
    cout<<endl;
break;

default:
    cout<<endl;
    cout<<"OPZIONE NON VALIDA"<<endl;
    cout<<"PREGO, RIPROVARE..."<<endl<<endl;
break;
}
}
while(menu!=6);
}

/*! \fn main()
    \brief main del programma
*/

int main(){
Libro libro[100];
menu(libro);
}
