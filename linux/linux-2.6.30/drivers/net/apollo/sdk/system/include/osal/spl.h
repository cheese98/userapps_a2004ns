/*
 * Copyright (C) 2009 Realtek Semiconductor Corp. 
 * All Rights Reserved.
 *
 * This program is the proprietary software of Realtek Semiconductor
 * Corporation and/or its licensors, and only be used, duplicated, 
 * modified or distributed under the authorized license from Realtek. 
 *
 * ANY USE OF THE SOFTWARE OTHER THAN AS AUTHORIZED UNDER 
 * THIS LICENSE OR COPYRIGHT LAW IS PROHIBITED. 
 *
 * $Revision: 1.1.1.1 $
 * $Date: 2013/03/19 08:37:01 $
 *
 * Purpose : Definition those APIs interface for separating OS depend system call.
 *           Let the RTK SDK call the layer and become OS independent SDK package.
 *
 * Feature : interrupt lock/unlock API
 *
 */

#ifndef __OSAL_SPL_H__
#define __OSAL_SPL_H__


/*
 * Include Files
 */
#include <common/type.h>
#include <linux/spinlock.h>


/*
 * Symbol Definition
 */

/*typedef int32 osal_spinlock_t;*/
typedef spinlock_t osal_spinlock_t;

/*
 * Data Declaration
 */

/*
 * Macro Definition
 */

/*
 * Function Declaration
 */

/* Function Name:
 *      osal_spl_spin_lock
 * Description:
 *      Interrupt lock function.
 * Input:
 *      pLock  - pointer buffer of interrupt lock
 * Output:
 *      None
 * Return:
 *      RT_ERR_OK     - interrupt lock success.
 *      RT_ERR_FAILED - fail to interrupt lock routine.
 * Note:
 *      None
 */
extern int32
osal_spl_spin_lock(osal_spinlock_t *pLock);


/* Function Name:
 *      osal_spl_spin_unlock
 * Description:
 *      Interrupt unlock function.
 * Input:
 *      pLock  - pointer buffer of interrupt unlock
 * Output:
 *      None
 * Return:
 *      RT_ERR_OK    - interrupt unlock success.
 * Note:
 *      None
 */
extern int32
osal_spl_spin_unlock(osal_spinlock_t *pLock);

#endif /* __OSAL_SPL_H__ */

