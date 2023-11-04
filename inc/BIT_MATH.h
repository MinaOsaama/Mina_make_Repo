/***************************************************/
/******** Author      : ABdelrahman Hossam *********/
/******** Date        : 30/8/2019          *********/
/******** version     : 1.0 V              *********/
/******** Description : Bit_Math lib       *********/ 
/***************************************************/


/************************************************/
/* guard of file will call one time in .c      **/
/************************************************/

#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SET_BIT(Reg, bitnum)       (Reg |=1<<bitnum)
#define CLR_BIT(Reg, bitnum)       (Reg &=~(1<<bitnum))
#define TOGGLE_BIT(Reg, bitnum)    (Reg ^=(1<<bitnum))
#define GET_BIT(Reg, bitnum)       ((Reg>>bitnum)& 0x01)

#define SET_BYTE(Reg,value)              ( Reg = value )


#endif