#ifndef volume_h
#define volume_h

#include "Document.h"
#include "string.h"

class journal;

class volume : public Document, public Document {

 public:
    string auteur;

 public:

    /**
     * @element-type journal
     */
    journal *myjournal;
};

#endif // volume_h
