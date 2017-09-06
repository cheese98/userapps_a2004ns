/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $ 
 *
 * $Id: dot3StatsTable.c,v 1.1.1.1 2013/09/04 04:14:30 rtlac Exp $
 */
/** \page MFD helper for dot3StatsTable
 *
 * \section intro Introduction
 * Introductory text.
 *
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
#include "dot3StatsTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot3StatsTable_interface.h"

oid             dot3StatsTable_oid[] = { DOT3STATSTABLE_OID };
int             dot3StatsTable_oid_size = OID_LENGTH(dot3StatsTable_oid);

dot3StatsTable_registration dot3StatsTable_user_context;
static dot3StatsTable_registration *dot3StatsTable_user_context_p;

void            initialize_table_dot3StatsTable(void);
void            shutdown_table_dot3StatsTable(void);


/**
 * Initializes the dot3StatsTable module
 */
void
init_dot3StatsTable(void)
{
    DEBUGMSGTL(("verbose:dot3StatsTable:init_dot3StatsTable", "called\n"));

    /*
     * TODO:300:o: Perform dot3StatsTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot3StatsTable"))
        initialize_table_dot3StatsTable();

}                               /* init_dot3StatsTable */

/**
 * Shut-down the dot3StatsTable module (agent is exiting)
 */
void
shutdown_dot3StatsTable(void)
{
    if (should_init("dot3StatsTable"))
        shutdown_table_dot3StatsTable();

}

/**
 * Initialize the table dot3StatsTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot3StatsTable(void)
{
    u_long          flags;

    DEBUGMSGTL(("verbose:dot3StatsTable:initialize_table_dot3StatsTable",
                "called\n"));

    /*
     * TODO:301:o: Perform dot3StatsTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot3StatsTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    dot3StatsTable_user_context_p
	= netsnmp_create_data_list("dot3StatsTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _dot3StatsTable_initialize_interface(dot3StatsTable_user_context_p, flags);
}                               /* initialize_table_dot3StatsTable */

/**
 * Shutdown the table dot3StatsTable 
 */
void
shutdown_table_dot3StatsTable(void)
{
    /*
     * call interface shutdown code
     */
    _dot3StatsTable_shutdown_interface(dot3StatsTable_user_context_p);
    netsnmp_free_all_list_data(dot3StatsTable_user_context_p);
    dot3StatsTable_user_context_p = NULL;
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
dot3StatsTable_rowreq_ctx_init(dot3StatsTable_rowreq_ctx * rowreq_ctx,
                               void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:dot3StatsTable:dot3StatsTable_rowreq_ctx_init",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:210:o: |-> Perform extra dot3StatsTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
}                               /* dot3StatsTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
dot3StatsTable_rowreq_ctx_cleanup(dot3StatsTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot3StatsTable:dot3StatsTable_rowreq_ctx_cleanup",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra dot3StatsTable rowreq cleanup.
     */
}                               /* dot3StatsTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot3StatsTable_pre_request(dot3StatsTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:dot3StatsTable:dot3StatsTable_pre_request",
                "called\n"));

    /*
     * TODO:510:o: Perform dot3StatsTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* dot3StatsTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot3StatsTable_post_request(dot3StatsTable_registration * user_context,
                            int rc)
{
    DEBUGMSGTL(("verbose:dot3StatsTable:dot3StatsTable_post_request",
                "called\n"));

    /*
     * TODO:511:o: Perform dot3StatsTable post-request actions.
     */

    return MFD_SUCCESS;
}                               /* dot3StatsTable_post_request */


/** @{ */
