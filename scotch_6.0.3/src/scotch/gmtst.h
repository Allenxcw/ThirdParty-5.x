/* Copyright 2004,2007,2008 ENSEIRB, INRIA & CNRS
**
** This file is part of the Scotch software package for static mapping,
** graph partitioning and sparse matrix ordering.
**
** This software is governed by the CeCILL-C license under French law
** and abiding by the rules of distribution of free software. You can
** use, modify and/or redistribute the software under the terms of the
** CeCILL-C license as circulated by CEA, CNRS and INRIA at the following
** URL: "http://www.cecill.info".
** 
** As a counterpart to the access to the source code and rights to copy,
** modify and redistribute granted by the license, users are provided
** only with a limited warranty and the software's author, the holder of
** the economic rights, and the successive licensors have only limited
** liability.
** 
** In this respect, the user's attention is drawn to the risks associated
** with loading, using, modifying and/or developing or reproducing the
** software by the user in light of its specific status of free software,
** that may mean that it is complicated to manipulate, and that also
** therefore means that it is reserved for developers and experienced
** professionals having in-depth computer knowledge. Users are therefore
** encouraged to load and test the software's suitability as regards
** their requirements in conditions enabling the security of their
** systems and/or data to be ensured and, more generally, to use and
** operate it in the same conditions as regards security.
** 
** The fact that you are presently reading this means that you have had
** knowledge of the CeCILL-C license and that you accept its terms.
*/
/************************************************************/
/**                                                        **/
/**   NAME       : gmtst.h                                 **/
/**                                                        **/
/**   AUTHOR     : Francois PELLEGRINI                     **/
/**                                                        **/
/**   FUNCTION   : This program computes statistics on     **/
/**                graph mappings.                         **/
/**                                                        **/
/**   DATES      : # Version 3.1  : from : 17 jul 1996     **/
/**                                 to     23 jul 1996     **/
/**                # Version 3.2  : from : 02 jun 1997     **/
/**                                 to     02 jun 1997     **/
/**                # Version 3.3  : from : 06 jun 1999     **/
/**                                 to     07 jun 1999     **/
/**                # Version 4.0  : from : 12 feb 2004     **/
/**                                 to     29 nov 2005     **/
/**                                                        **/
/************************************************************/

/*
**  The defines.
*/

/*+ File name aliases. +*/

#define C_FILENBR                   4             /* Number of files in list                */
#define C_FILEARGNBR                4             /* Number of files which can be arguments */

#define C_filenamesrcinp            C_fileTab[0].name /* Source graph file name        */
#define C_filenametgtinp            C_fileTab[1].name /* Target architecture file name */
#define C_filenamemapinp            C_fileTab[2].name /* Mapping result file name      */
#define C_filenamedatout            C_fileTab[3].name /* Statistics file name          */

#define C_filepntrsrcinp            C_fileTab[0].pntr /* Source graph input file   */
#define C_filepntrtgtinp            C_fileTab[1].pntr /* Target architecture file  */
#define C_filepntrmapinp            C_fileTab[2].pntr /* Mapping result input file */
#define C_filepntrdatout            C_fileTab[3].pntr /* Statistics output file    */

