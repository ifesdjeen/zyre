/*  =========================================================================
    zyre_selftest.c - run selftests

    Runs all selftests.

    -------------------------------------------------------------------------
    Copyright (c) 1991-2012 iMatix Corporation -- http://www.imatix.com     
    Copyright other contributors as noted in the AUTHORS file.              
                                                                            
    This file is part of Zyre, an open-source framework for proximity-based 
    peer-to-peer applications -- See http://zyre.org.                       
                                                                            
    This is free software; you can redistribute it and/or modify it under   
    the terms of the GNU Lesser General Public License as published by the  
    Free Software Foundation; either version 3 of the License, or (at your  
    option) any later version.                                              
                                                                            
    This software is distributed in the hope that it will be useful, but    
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTA-   
    BILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General  
    Public License for more details.                                        
                                                                            
    You should have received a copy of the GNU Lesser General Public License
    along with this program. If not, see http://www.gnu.org/licenses/.      

    #################################################################
    #   GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY    #
    #   Please read the README.txt file in the model directory.     #
    #################################################################
    =========================================================================
*/

#include "../include/zyre.h"
#include "zyre_classes.h"

int
main (int argc, char *argv [])
{
    bool verbose;
    if (argc == 2 && streq (argv [1], "-v"))
        verbose = true;
    else
        verbose = false;

    printf ("Running ZYRE selftests...\n");

    zyre_test (verbose); 
    zyre_event_test (verbose); 
    zre_msg_test (verbose); 
    zyre_peer_test (verbose); 
    zyre_group_test (verbose); 
    zyre_node_test (verbose); 

    printf ("Tests passed OK\n");
    return 0;
}
/*
    #################################################################
    #   GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY    #
    #   Please read the README.txt file in the model directory.     #
    #################################################################
*/
