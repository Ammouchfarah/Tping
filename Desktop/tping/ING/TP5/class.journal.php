<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.journal.php
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
 * include Document
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Document.php');

/**
 * include volume
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.volume.php');

/* user defined includes */
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014CE-includes begin
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014CE-includes end

/* user defined constants */
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014CE-constants begin
// section -64--88-56-1-49f21be0:16e1d144e90:-8000:00000000000014CE-constants end

/**
 * Short description of class journal
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class journal
    extends Document
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd : 

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute date_parution
     *
     * @access public
     * @var Integer
     */
    public $date_parution = null;

    // --- OPERATIONS ---

} /* end of class journal */

?>