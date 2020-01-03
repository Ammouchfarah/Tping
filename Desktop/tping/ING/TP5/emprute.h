#ifndef emprute_h
#define emprute_h

#include <vector>

#include "date.h"

class adh�rent;
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
     * @element-type adh�rent
     */
    adh�rent *myadh�rent;

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

    adh�rent *myadh�rent;

    /**
     * @element-type livre
     */
    std::vector< livre* > mylivre;

    /**
     * @element-type adh�rent
     */
    adh�rent *myadh�rent;

    /**
     * @element-type adh�rent
     */
    adh�rent *myadh�rent;

    /**
     * @element-type adh�rent
     */
    adh�rent *myadh�rent;
};

#endif // emprute_h
