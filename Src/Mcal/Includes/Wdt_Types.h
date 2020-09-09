/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Wdt.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef WDT_TYPES_H
#define WDT_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Platform_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef uint32 WdgInitialTimeout;
typedef uint32 WdgMaxTimeout ;


typedef enum{
	NOTIFICATION_DISABLE,
	NOTIFICATION_ENABLE
}WdgNotificationEnable;

typedef enum{
	WDG_TIMER_INT_STANDARD,
	WDG_TIMER_INT_NON_MASKABLE
}WdgInterruptType;


typedef struct{
	WdgNotificationEnable			notificationEn;
	WdgInterruptType					interruptType;
	WdgInitialTimeout					intialTimeout;
	WdgMaxTimeout							maxTimeout;
}Wdg_ConfigType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* WDT_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Wdt_Types.h
 *********************************************************************************************************************/