#ifndef journal_h
#define journal_h

#include "Document.h"

class volume;

class journal : public Document, virtual public Document {

 public:
    Integer date_parution;

 public:

    /**
     * @element-type volume
     */
    volume *myvolume;
};

#endif // journal_h
