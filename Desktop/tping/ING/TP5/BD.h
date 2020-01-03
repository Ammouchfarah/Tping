#ifndef BD_h
#define BD_h

#include "volume.h"

class livre;

class BD : public volume {

 public:
    String dessinateur;

 public:

    /**
     * @element-type livre
     */
    livre *mylivre;
};

#endif // BD_h
