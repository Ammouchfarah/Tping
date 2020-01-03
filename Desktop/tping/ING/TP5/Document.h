#ifndef Document_h
#define Document_h

#include <vector>

#include "string.h"

class bibliothèque;

class Document {

 public:
    string titre;

 public:

    /**
     * @element-type bibliothèque
     */
    bibliothèque *mybibliothèque;

    /**
     * @element-type bibliothèque
     */
    bibliothèque *mybibliothèque;

    /**
     * @element-type bibliothèque
     */
    std::vector< bibliothèque* > mybibliothèque;
};

#endif // Document_h
