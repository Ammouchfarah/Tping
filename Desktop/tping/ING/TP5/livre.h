#ifndef livre_h
#define livre_h

#include "boolean.h"
#include "volume.h"

class adh�rent;
class emprute;
class BD;

class livre : public volume {

 public:

    virtual void empruntable();

 public:
    boolean disponible;

 public:

    /**
     * @element-type adh�rent
     */
    adh�rent *myadh�rent;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    adh�rent *myadh�rent;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    /**
     * @element-type adh�rent
     */
    adh�rent *myadh�rent;

    /**
     * @element-type BD
     */
    BD *myBD;

    adh�rent *myadh�rent;
};

#endif // livre_h
