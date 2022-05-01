//
// Created by yoonl on 5/1/2022.
//

#ifndef LAB910_REPOINMEMORY_H
#define LAB910_REPOINMEMORY_H

#include "Ticket.h"
#include <vector>

class RepoInMemory {
private:
    std::vector<Ticket> tickets;
public:
    /***
     *  Constructor
     */
     RepoInMemory();
     /***
      * Adaugam un bilet in repository
      */
     void addTicket(Ticket t);
     /***
      *   GetAll->listeaza toate biletele din repository
      */
     std::vector<Ticket> getAll();
};


#endif //LAB910_REPOINMEMORY_H
