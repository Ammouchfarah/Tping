#ifndef emprute_h
#define emprute_h

#include <vector>

#include "date.h"

class adhérent;
class livre;
class emprute;

class emprute {

 public:

    virtual void pronlongerDateRetour();

 public:
    date date_emprunt;
    date date_retour;

 public:

    /**
     * @element-type adhérent
     */
    adhérent *myadhérent;

    /**
     * @element-type livre
     */
    livre *mylivre;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    adhérent *myadhérent;

    /**
     * @element-type livre
     */
    std::vector< livre* > mylivre;

    /**
     * @element-type adhérent
     */
    adhérent *myadhérent;

    /**
     * @element-type adhérent
     */
    adhérent *myadhérent;

    /**
     * @element-type adhérent
     */
    adhérent *myadhérent;
};

#endif // emprute_h
