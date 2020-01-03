#ifndef bibliothèque_h
#define bibliothèque_h

#include <vector>


class ;
class adhérent;
class Document;

class bibliothèque {

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
     * @element-type adhérent
     */
    adhérent *myadhérent;

    /**
     * @element-type adhérent
     */
    std::vector< adhérent* > myadhérent;

    /**
     * @element-type Document
     */
    std::vector< Document* > myDocument;

    /**
     * @element-type adhérent
     */
    std::vector< adhérent* > myadhérent;

    /**
     * @element-type Document
     */
    Document *myDocument;

    /**
     * @element-type Document
     */
    Document *myDocument;
};

#endif // bibliothèque_h
