/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Uart.h
 *       Module:  Uart
 *
 *  Description:  header file for Uart Module    
 *  
 *********************************************************************************************************************/
#ifndef UART_H
#define UART_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Uart_Types.h"
#include "Uart_Cfg.h"
#include "Std_Types.h"
#include "Mcu_Hw.h"
#include "Bit_Operations.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
   /******************************************************************************
* \Syntax          : void Uart_Init ( const Uart_ConfigType* ConfigPtr )        
* \Description     : initializing the Uart diver module                                   
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : ConfigPtr   Pointer to configuration set.                   
* \Parameters (out): None                                                      
* \Return value:   : None                                 
*******************************************************************************/
void Uart_Init ( const Uart_ConfigType* ConfigPtr );
 /******************************************************************************
* \Syntax          : void Uart_SendChar(Uart_ChannelType Channel , char Char )       
* \Description     : Send Char                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : Channel   ID of Uart channel                     
* \Parameters (out): Char                                                      
* \Return value:   : Void                                 
*******************************************************************************/

void Uart_SendChar(Uart_ChannelType Channel , char Char );

 /******************************************************************************
* \Syntax          : void Uart_ReceiveChar(Uart_ChannelType Channel , char Char )       
* \Description     : Send Char                                       
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : Channel   ID of Uart channel                     
* \Parameters (out): void                                                      
* \Return value:   : char                                 
*******************************************************************************/

char Uart_ReceiveChar(Uart_ChannelType Channel);

 /******************************************************************************
* \Syntax          : void Uart_SendString(Uart_ChannelType Channel,const sint8 *Str)       
* \Description     : Send String                                       
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : Channel   ID of Uart channel                     
* \Parameters (out): void                                                      
* \Return value:   : char                               
*******************************************************************************/

void UART_ReceiveString(Uart_ChannelType Channel, char *Str);

 /******************************************************************************
* \Syntax          : void Uart_SendString(Uart_ChannelType Channel,const sint8 *Str)       
* \Description     : Send String                                       
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : Channel   ID of Uart channel                     
* \Parameters (out): void                                                      
* \Return value:   : char                                 
*******************************************************************************/
void Uart_SendString(Uart_ChannelType Channel, char *Str);
#endif  /* UART_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Dio.h
 *********************************************************************************************************************/
