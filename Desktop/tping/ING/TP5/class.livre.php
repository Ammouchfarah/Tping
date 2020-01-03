<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.livre.php
 *
 * $Id$
 *
 * This file is part of untitledModel.
 *
 * Automatically generated on 17.12.2019, 05:14:07 with ArgoUML PHP module 
 * (last revised $Date: 2010-01-12 20:14:42 +0100 (Tue, 12 Jan 2010) $)
 *
 * @author firstname and lastname of author, <author@example.org>
 */

if (0 > version_compare(PHP_VERSION, '5')) {
    die('This file was generated for PHP 5');
}

/**
 * include BD
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.BD.php');

/**
 * include adhérent
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.adhérent.php');

/**
 * include volume
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.volume.php');

/* user defined includes */
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014E5-includes begin
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014E5-includes end

/* user defined constants */
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014E5-constants begin
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014E5-constants end

/**
 * Short description of class livre
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class livre
    extends volume
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd :     // generateAssociationEnd :     // generateAssociationEnd : 

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute disponible
     *
     * @access public
     * @var boolean
     */
    public $disponible = false;

    // --- OPERATIONS ---

    /**
     * Short description of method empruntable
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function empruntable()
    {
        // section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014EA begin
        // section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014EA end
    }

} /* end of class livre */

?>