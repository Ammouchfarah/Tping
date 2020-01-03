#ifndef biblioth�que_h
#define biblioth�que_h

#include <vector>


class ;
class adh�rent;
class Document;

class biblioth�que {

 public:

    virtual void ajouterAdherent();

    virtual void enleverAdherent();

    virtual void ajouterDocument();

 public:

    /**
     * @element-type 
     */
     *my;

    /**
     * @element-type adh�rent
     */
    adh�rent *myadh�rent;

    /**
     * @element-type adh�rent
     */
    std::vector< adh�rent* > myadh�rent;

    /**
     * @element-type Document
     */
    std::vector< Document* > myDocument;

    /**
     * @element-type adh�rent
     */
    std::vector< adh�rent* > myadh�rent;

    /**
     * @element-type Document
     */
    Document *myDocument;

    /**
     * @element-type Document
     */
    Document *myDocument;
};

#endif // biblioth�que_h
