//
// Created by yoonl on 5/1/2022.
//

#include "Ticket.h"

Ticket::Ticket() {
    this->zi = 0;
    this->cod = nullptr;
    this->pret = 0;
}

Ticket::Ticket(const char *cod, const int id,const int zi, const int pret) {
    this->id = id;
    this->zi = zi;
    this->pret = pret;
    this->cod = new char[strlen(cod)+1];
    strcpy(this->cod,cod);
}

Ticket::Ticket(const Ticket &t) {
    this->pret = t.pret;
    this->zi = t.zi;
    this->id = t.id;
    this->cod = new char[strlen(t.cod) +1];
    strcpy(this->cod,t.cod);
}

Ticket::~Ticket() {
    if(this->cod)
    {
        delete[] this->cod;
        this->cod = nullptr;
    }
}

char *Ticket::getCod() {
    return this->cod;
}

int Ticket::getZi(){
    return this->zi;
}

int Ticket::getPret() {
    return this->pret;
}

int Ticket::getId() {
    return this->id;
}

void Ticket::setId(int id) {
    this->id = id;
}

void Ticket::setPret(int pret) {
    this->pret = pret;
}

void Ticket::setZi(int zi) {
    this->zi = zi;
}

void Ticket::setCod(const char *cod) {
    if(this->cod)
    {
        delete[] this->cod;
    }
    this->cod = new char[strlen(cod) +1];
    strcpy(this->cod,cod);
}

bool Ticket::operator==(const Ticket &t) const{
    return this->id == t.id && this->zi == t.zi && this->pret == t.pret && strcmp(this->cod,t.cod) == 0;
}

bool Ticket::operator!=(const Ticket &t) const {
    return !(t == *this);
}

bool Ticket::operator<(const Ticket &t) const {
    bool ok = false;
    if(strcmp(this->cod,t.cod) == 0)
    {
        if(this->pret <t.pret)
            ok = true;
    }
    return ok;
}

bool Ticket::operator>(const Ticket &t) const {
    return t < *this;
}

bool Ticket::operator<=(const Ticket &t) const {
    return !(t < *this);
}

bool Ticket::operator>=(const Ticket &t) const {
    return !(*this < t);
}

std::istream &operator>>(std::istream &is, Ticket &t)
{
    std::cout<<"Ticket ID: ";
    is>> t.id;
    std::cout<<"Ticket Day: ";
    is>>t.zi;
    std::cout<<"Ticket Price: ";
    is>>t.zi;
    std::cout<<"Ticket Code: ";
    is>>t.cod;
    return is;
}

std::ostream &operator<<(std::ostream &os,Ticket &t){
    os <<"Ticket ID: "<< t.id<<" Ticket Day: "<< t.zi<<" Ticket Price: "<<t.pret<<" Ticket Code: "<<t.cod<<std::endl;
    return os;
}

Ticket &Ticket::operator=(const Ticket &t) {
    if(this != &t)
    {
        this->cod = new char[strlen(t.cod) +1];
        strcpy(this->cod,cod);
        this->pret = t.pret;
        this->zi = t.zi;
        this->id = t.id;
    }
    return *this;
}