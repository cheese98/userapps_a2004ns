/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-constants.m2c,v 1.5 2005/07/15 22:41:16 rstory Exp $
 *
 * $Id: tcpListenerTable_constants.h,v 1.1.1.1 2013/09/04 04:14:30 rtlac Exp $
 */
#ifndef TCPLISTENERTABLE_CONSTANTS_H
#define TCPLISTENERTABLE_CONSTANTS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table tcpListenerTable 
     */
#define TCPLISTENERTABLE_OID              1,3,6,1,2,1,6,20

#define COLUMN_TCPLISTENERLOCALADDRESSTYPE         1

#define COLUMN_TCPLISTENERLOCALADDRESS         2

#define COLUMN_TCPLISTENERLOCALPORT         3

#define COLUMN_TCPLISTENERPROCESS         4


#define TCPLISTENERTABLE_MIN_COL   COLUMN_TCPLISTENERPROCESS
#define TCPLISTENERTABLE_MAX_COL   COLUMN_TCPLISTENERPROCESS


    /*
     * NOTES on enums
     * ==============
     *
     * Value Mapping
     * -------------
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them
     * below. For example, a boolean flag (1/0) is usually represented
     * as a TruthValue in a MIB, which maps to the values (1/2).
     *
     */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table tcpListenerTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * tcpListenerLocalAddressType (InetAddressType / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef INETADDRESSTYPE_ENUMS
#define INETADDRESSTYPE_ENUMS

#define INETADDRESSTYPE_UNKNOWN  0
#define INETADDRESSTYPE_IPV4  1
#define INETADDRESSTYPE_IPV6  2
#define INETADDRESSTYPE_IPV4Z  3
#define INETADDRESSTYPE_IPV6Z  4
#define INETADDRESSTYPE_DNS  16

#endif                          /* INETADDRESSTYPE_ENUMS */




#ifdef __cplusplus
}
#endif
#endif                          /* TCPLISTENERTABLE_OIDS_H */
