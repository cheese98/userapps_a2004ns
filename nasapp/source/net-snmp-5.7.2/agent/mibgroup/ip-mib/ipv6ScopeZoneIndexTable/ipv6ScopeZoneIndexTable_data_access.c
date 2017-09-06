/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $ 
 *
 * $Id: ipv6ScopeZoneIndexTable_data_access.c,v 1.1.1.1 2013/09/04 04:14:30 rtlac Exp $
 */
/*
 * standard Net-SNMP includes 
 */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/*
 * include our parent header 
 */
#include "ipv6ScopeZoneIndexTable.h"


#include "ipv6ScopeZoneIndexTable_data_access.h"

/** @ingroup interface
 * @addtogroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipv6ScopeZoneIndexTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * IP-MIB::ipv6ScopeZoneIndexTable is subid 36 of ip.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.4.36, length: 8
 */

/**
 * initialization for ipv6ScopeZoneIndexTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param ipv6ScopeZoneIndexTable_reg
 *        Pointer to ipv6ScopeZoneIndexTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
ipv6ScopeZoneIndexTable_init_data(ipv6ScopeZoneIndexTable_registration *
                                  ipv6ScopeZoneIndexTable_reg)
{
    DEBUGMSGTL(("verbose:ipv6ScopeZoneIndexTable:ipv6ScopeZoneIndexTable_init_data", "called\n"));
    return MFD_SUCCESS;
}                               /* ipv6ScopeZoneIndexTable_init_data */

/**
 * container overview
 *
 */

/**
 * container initialization
 *
 * @param container_ptr_ptr A pointer to a container pointer. If you
 *        create a custom container, use this parameter to return it
 *        to the MFD helper. If set to NULL, the MFD helper will
 *        allocate a container for you.
 *
 *  This function is called at startup to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases. If no custom
 *  container is allocated, the MFD code will create one for your.
 *
 * @remark
 *  This would also be a good place to do any initialization needed
 *  for you data source. For example, opening a connection to another
 *  process that will supply the data, opening a database, etc.
 */
void
ipv6ScopeZoneIndexTable_container_init(netsnmp_container **
                                       container_ptr_ptr,
                                       netsnmp_cache * cache)
{
    DEBUGMSGTL(("verbose:ipv6ScopeZoneIndexTable:ipv6ScopeZoneIndexTable_container_init", "called\n"));

    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,
                 "bad container param to ipv6ScopeZoneIndexTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;
    if (NULL == cache) {
        snmp_log(LOG_ERR,
                 "bad cache param to ipv6ScopeZoneIndexTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up ipv6ScopeZoneIndexTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = 60; /* seconds */


}                               /* ipv6ScopeZoneIndexTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before ipv6ScopeZoneIndexTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
ipv6ScopeZoneIndexTable_container_shutdown(netsnmp_container *container_ptr)
{
    DEBUGMSGTL(("verbose:ipv6ScopeZoneIndexTable:ipv6ScopeZoneIndexTable_container_shutdown", "called\n"));

    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,
                 "bad params to ipv6ScopeZoneIndexTable_container_shutdown\n");
        return;
    }

}                               /* ipv6ScopeZoneIndexTable_container_shutdown */

/**
 * check entry for update
 *
 */
static void
_snarf_zoneindex_entry(netsnmp_v6scopezone_entry *scopezone_entry,
                       netsnmp_container *container)
{
    ipv6ScopeZoneIndexTable_rowreq_ctx *rowreq_ctx;

    DEBUGTRACE;
    netsnmp_assert(NULL != scopezone_entry);
    netsnmp_assert(NULL != container);
    rowreq_ctx = ipv6ScopeZoneIndexTable_allocate_rowreq_ctx(scopezone_entry,NULL);
    if ((NULL != rowreq_ctx) &&
         (MFD_SUCCESS == ipv6ScopeZoneIndexTable_indexes_set
         (rowreq_ctx, rowreq_ctx->data->index))) {
        CONTAINER_INSERT(container, rowreq_ctx);
    } else {
       if (rowreq_ctx) {
            snmp_log(LOG_ERR, "error setting index while loading "
                     "ipv6ScopeZoneIndexTable cache.\n");
            ipv6ScopeZoneIndexTable_release_rowreq_ctx(rowreq_ctx);
        } else
            netsnmp_access_scopezone_entry_free(scopezone_entry);
    }
      
}

/**
 * load initial data
 *
 * TODO:350:M: Implement ipv6ScopeZoneIndexTable data load
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to load the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the data, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  ipv6ScopeZoneIndexTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
ipv6ScopeZoneIndexTable_container_load(netsnmp_container * container)
{

    /*
     * temporary storage for index values
     */
    /*
     * ipv6ScopeZoneIndexIfIndex(1)/InterfaceIndex/ASN_INTEGER/long(long)//l/a/w/e/R/d/H
     */
    netsnmp_container *zoneindex = netsnmp_access_scopezone_container_load(NULL, 0);

    DEBUGMSGTL(("verbose:ipv6ScopeZoneIndexTable:ipv6ScopeZoneIndexTable_container_load", "called\n"));

    if (NULL == zoneindex) {
        DEBUGMSGTL(("ipv6ScopeZoneIndexTable:container_load",
                    "couldn't get scopezone iterator\n"));
        return MFD_RESOURCE_UNAVAILABLE;
    }
    /*
     * TODO:351:M: |-> Load/update data in the ipv6ScopeZoneIndexTable container.
     * loop over your ipv6ScopeZoneIndexTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */

     CONTAINER_FOR_EACH(zoneindex,
                       (netsnmp_container_obj_func *) _snarf_zoneindex_entry,
                        container);
    /*
     * free the container. we've either claimed each entry, or released it,
     * so the access function doesn't need to clear the container.
     */
    netsnmp_access_scopezone_container_free(zoneindex,
                                            0x0001);

    DEBUGMSGT(("verbose:ipv6ScopeZoneIndexTable:ipv6ScopeZoneIndexTable_container_load", "inserted %lu records\n", (unsigned long)CONTAINER_SIZE(container)));

    return MFD_SUCCESS;
}                               /* ipv6ScopeZoneIndexTable_container_load */

/**
 * container clean up
 *
 * @param container container with all current items
 *
 *  This optional callback is called prior to all
 *  item's being removed from the container. If you
 *  need to do any processing before that, do it here.
 *
 * @note
 *  The MFD helper will take care of releasing all the row contexts.
 *
 */
void
ipv6ScopeZoneIndexTable_container_free(netsnmp_container * container)
{
    DEBUGMSGTL(("verbose:ipv6ScopeZoneIndexTable:ipv6ScopeZoneIndexTable_container_free", "called\n"));

    /*
     * TODO:380:M: Free ipv6ScopeZoneIndexTable container data.
     */
}                               /* ipv6ScopeZoneIndexTable_container_free */

/**
 * prepare row for processing.
 *
 *  When the agent has located the row for a request, this function is
 *  called to prepare the row for processing. If you fully populated
 *  the data context during the index setup phase, you may not need to
 *  do anything.
 *
 * @param rowreq_ctx pointer to a context.
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 */
int
ipv6ScopeZoneIndexTable_row_prep(ipv6ScopeZoneIndexTable_rowreq_ctx *
                                 rowreq_ctx)
{
    DEBUGMSGTL(("verbose:ipv6ScopeZoneIndexTable:ipv6ScopeZoneIndexTable_row_prep", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
}                               /* ipv6ScopeZoneIndexTable_row_prep */
/** @} */
