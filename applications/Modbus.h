/*****************************************************************************************************
* FileName:                    Modbus.h
*
* Description:                 Modbus related functions
*                              
* Author:                      YanDengxue, SmartSaw
*                              
* Rev History:  
*       <Author>        <Data>        <Hardware>     <Version>        <Description>
*     YanDengxue   2011-03-29 15:30       --           1.00             Create
*****************************************************************************************************/
#ifndef _Modbus_H
#define _Modbus_H

//====================================================================================================
// Refer outside header files
//====================================================================================================
#include "UserTypesDef.h"
#include "Debug.h"

#ifdef __cplusplus
extern "C" {
#endif

//====================================================================================================
// Macro define
//====================================================================================================
#define MODBUS_EXCEPTION_CODE_ILLEGAL_FUNCTION  0x01u
#define MODBUS_EXCEPTION_CODE_ILLEGAL_ADDRESS   0x02u
#define MODBUS_EXCEPTION_CODE_ILLEGAL_VALUE     0x03u
#define MODBUS_EXCEPTION_CODE_DEVICE_FAILURE    0x04u

//====================================================================================================
// Types define
//====================================================================================================

//====================================================================================================
// Interface variables
//====================================================================================================


//====================================================================================================
// Interface functions
//====================================================================================================
extern int32 ModbusFrameProc(UART_DEF *uart);

#ifdef __cplusplus
}
#endif

#endif

