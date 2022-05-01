//
// Created by yoonl on 5/1/2022.
//

#include "RepoInMemory.h"

RepoInMemory::RepoInMemory() {
    tickets = std::vector<Ticket>();
}

void RepoInMemory::addTicket(Ticket t) {
    tickets.push_back(t);
}

std::vector<Ticket> RepoInMemory::getAll(){
    return tickets;
}