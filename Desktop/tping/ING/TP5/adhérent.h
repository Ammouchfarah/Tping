#ifndef adh�rent_h
#define adh�rent_h

#include <vector>


class biblioth�que;
class livre;
class emprute;

class adh�rent {

 public:

    virtual void emprunterLivre();

    virtual void rendreLivre();

 public:
    String pr�nom;
    String nom;

 public:

    /**
     * @element-type biblioth�que
     */
    biblioth�que *mybiblioth�que;

    /**
     * @element-type biblioth�que
     */
    biblioth�que *mybiblioth�que;

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
     * @element-type biblioth�que
     */
    biblioth�que *mybiblioth�que;

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

#endif // adh�rent_h
