#ifndef livre_h
#define livre_h

#include "boolean.h"
#include "volume.h"

class adhérent;
class emprute;
class BD;

class livre : public volume {

 public:

    virtual void empruntable();

 public:
    boolean disponible;

 public:

    /**
     * @element-type adhérent
     */
    adhérent *myadhérent;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    adhérent *myadhérent;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    /**
     * @element-type adhérent
     */
    adhérent *myadhérent;

    /**
     * @element-type BD
     */
    BD *myBD;

    adhérent *myadhérent;
};

#endif // livre_h
