//
// Created by yoonl on 5/1/2022.
//

#ifndef LAB910_TICKET_H
#define LAB910_TICKET_H
#include <iostream>
#include <cstring>

class Ticket {
private:
    char* cod;
    int id,zi,pret;
public:
    /***
     *
     */
     Ticket();
     /***
      *
      */
     explicit Ticket(const char* cod,const int id,const int zi,const int pret);
     /***
     *
     */
     Ticket(const Ticket& t);
     /***
     *
     */
     ~Ticket();
     /***
     *
     */
     char* getCod();
     /***
     *
     */
    int getId();
     /***
     *
     */
     int getPret();
     /***
     *
     */
     int getZi();
     /***
     *
     */
     void setCod(const char *cod);
     /***
     *
     */
    void setPret(int pret);
    /***
     *
     */
     void setZi(int zi);
     /***
     *
     */
     void setId(int id);
     /***
     *
     */
     Ticket& operator=(const Ticket& t);
     /***
      *
      */
      bool operator==(const Ticket &t) const;
    /**
   *
   * @param c
   * @return
   */
    bool operator!=(const Ticket &t) const;
    /**
     *
     * @param c
     * @return
     */
    bool operator<(const Ticket &t) const;
    /**
     *
     * @param c
     * @return
     */
    bool operator>(const Ticket &t) const;
    /**
     *
     * @param c
     * @return
     */
    bool operator<=(const Ticket &t) const;
    /**
     *
     * @param c
     * @return
     */
    bool operator>=(const Ticket &t) const;
    /**
     *
     * @param is
     * @param c
     * @return
     */
    friend std::istream &operator>>(std::istream &is, Ticket &t);
    /**
     *
     * @param os
     * @param c
     * @return
     */
    friend std::ostream &operator<<(std::ostream &os, Ticket &t);
};


#endif //LAB910_TICKET_H
