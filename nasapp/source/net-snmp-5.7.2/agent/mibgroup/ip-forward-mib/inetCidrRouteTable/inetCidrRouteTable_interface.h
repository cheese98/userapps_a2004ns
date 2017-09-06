/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.67 $ of : mfd-interface.m2c,v $
 *
 * $Id: inetCidrRouteTable_interface.h,v 1.1.1.1 2013/09/04 04:14:30 rtlac Exp $
 */
/** @ingroup interface Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef INETCIDRROUTETABLE_INTERFACE_H
#define INETCIDRROUTETABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "inetCidrRouteTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void
        _inetCidrRouteTable_initialize_interface
        (inetCidrRouteTable_registration * user_ctx, u_long flags);
    void
        _inetCidrRouteTable_shutdown_interface
        (inetCidrRouteTable_registration * user_ctx);
         
    inetCidrRouteTable_registration
        * inetCidrRouteTable_registration_set
        (inetCidrRouteTable_registration * newreg);

    netsnmp_container *inetCidrRouteTable_container_get(void);
    int             inetCidrRouteTable_container_size(void);

    u_int           inetCidrRouteTable_dirty_get(void);
    void            inetCidrRouteTable_dirty_set(u_int status);
         
    netsnmp_cache  *inetCidrRouteTable_get_cache(void);

    inetCidrRouteTable_rowreq_ctx
        * inetCidrRouteTable_allocate_rowreq_ctx(inetCidrRouteTable_data *,
                                                 void *);
    void
        inetCidrRouteTable_release_rowreq_ctx(inetCidrRouteTable_rowreq_ctx
                                              * rowreq_ctx);

    int             inetCidrRouteTable_index_to_oid(netsnmp_index *
                                                    oid_idx,
                                                    inetCidrRouteTable_mib_index
                                                    * mib_idx);
    int             inetCidrRouteTable_index_from_oid(netsnmp_index *
                                                      oid_idx,
                                                      inetCidrRouteTable_mib_index
                                                      * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void
             inetCidrRouteTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* INETCIDRROUTETABLE_INTERFACE_H */
/**  @} */

