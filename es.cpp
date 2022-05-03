struct Libro{
string ISBN;
string titolo;
string autore;
string editore;
int annopubblicazione;
float prezzo;
string tag;
};

void inserimento(Libro libro[]){
for(int i=0; i<50; i++){
cout<<endl;
cout<<"INSERIMENTO LIBRO";
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
cout<<endl;
}
}

void stampa_catalogo(Libro libro[]){
for (int i=0; i<50; i++){
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

void elimina_record(Libro libro[]){
string temp;
cout<<endl;
cout<<"QUALE LIBRO VUOI ELIMINARE?: ";
cin>>temp;

for(int i=0; i<=50; i++){
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
cout<<"LIBRO ELIMINATO"<<endl;
}


int main(){
int n;
Libro libro[50];
menu(libro);
elimina_record(libro);
}
