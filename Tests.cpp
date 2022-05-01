//
// Created by yoonl on 5/1/2022.
//

#include "Tests.h"
#include <cassert>
#include "Ticket.h"
#include "RepoInMemory.h"

void testAll(){
    testTicket();
}

void testTicket(){
    testTicketGet();
    testTicketSet();
    testTicketSet();
    testRepoInMemoryAdd();
    testRepoInMemoryGetAll();
}

void testTicketGet(){
    Ticket t("CJ",1,10,100);
    assert(t.getId() == 1);
    assert(t.getPret() == 100);
    assert(strcmp(t.getCod(),"CJ") == 0);
    assert(t.getZi() == 10);
}

void testTicketSet(){
    Ticket t;
    t.setId(1);
    t.setZi(31);
    t.setPret(120);
    t.setCod("AB");
    assert(t.getId() == 1);
    assert(t.getZi() == 31);
    assert(strcmp(t.getCod(),"AB") == 0);
    assert(t.getPret() == 120);
}

void testRepoInMemoryAdd(){
    RepoInMemory repoInMemory;
    Ticket t("CJ",1,12,60);
    Ticket l("AB",2,19,76);
    repoInMemory.addTicket(t);
    repoInMemory.addTicket(l);
    assert(repoInMemory.getAll().size() == 2);
    assert(repoInMemory.getAll()[0] == t);
}

void testRepoInMemeory(){
    testRepoInMemoryAdd();
}

void testRepoInMemoryGetAll(){
    RepoInMemory repoInMemory;
    Ticket t("CJ",1,12,60);
    Ticket l("AB",2,19,76);
    repoInMemory.addTicket(t);
    repoInMemory.addTicket(l);
    assert(repoInMemory.getAll().size() == 2);
    assert(repoInMemory.getAll()[0] == t);
}