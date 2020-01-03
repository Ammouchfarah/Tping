#ifndef adhérent_h
#define adhérent_h

#include <vector>


class bibliothèque;
class livre;
class emprute;

class adhérent {

 public:

    virtual void emprunterLivre();

    virtual void rendreLivre();

 public:
    String prénom;
    String nom;

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
     * @element-type livre
     */
    livre *mylivre;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    /**
     * @element-type livre
     */
    std::vector< livre* > mylivre;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    /**
     * @element-type livre
     */
    livre *mylivre;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    /**
     * @element-type bibliothèque
     */
    bibliothèque *mybibliothèque;

    /**
     * @element-type livre
     */
    std::vector< livre* > mylivre;

    /**
     * @element-type emprute
     */
    emprute *myemprute;

    /**
     * @element-type emprute
     */
    emprute *myemprute;
};

#endif // adhérent_h
