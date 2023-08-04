/*********************************************************************************************/
/*********************************************************************************************/


/************** INCLUDE LIB **************/
		 #include "STD_TYPE.h"
		 #include "BIT_MATH.h"
/*****************************************/	 

/************** INCLUDE MCAL**************/
		#include "GPIO_private.h"
		#include "GPIO_interface.h"
		#include "GPIO_config.h"
/*****************************************/

/************** INCLUDE HALL**************/
			

/*****************************************/

/************** INCLUDEAPP***************/


/*****************************************/





/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function Set The Mode Of Pin Mode Take 2Bits	

									MODE_INPUT
									MODE_OUTPUT
									MODE_ALTF
									MODE_ANALOG	

						*/
 void DIO_voidSetPinMode(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8MODE) 
 {
	 
		 
	        switch (copy_u8PORT)
	        {
	  	              case GPIOA_PORT: GPIOA_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;
					  case GPIOB_PORT: GPIOB_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;
					  case GPIOC_PORT: GPIOC_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;
					  case GPIOD_PORT: GPIOD_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;
					  case GPIOE_PORT: GPIOE_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;
					  case GPIOF_PORT: GPIOF_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;
					  case GPIOG_PORT: GPIOG_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;
					  case GPIOH_PORT: GPIOH_MODER |=(u32)  (copy_u8MODE << (copy_u8PIN)); break;		
					  default: break;		
		     }
	 
 }
				

/*********************************************************** END_ FUNCTION   ***********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
/*				Function Set The Type Of OutPut (OpenDrain = 0 , PushPull = 1)

								OUTPUT_TYPE_PUSH_PULL
								OUTPUT_TYPE_OPEN_DRAIN	

						*/
void DIO_voidSetOutType(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8Type) 
{
		      












}


/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*						Function Set The Speed (LOW , Meduim , High ,VeryHaigh		
							
							OUTPUT_LOW_SPEED
							OUTPUT_MEDUIM_SPEED
							OUTPUT_HIGH_SPEED
							OUTPUT_VERY_HIGH_SPEED
							
							

						*/
	void DIO_voidSetOutSpeed(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8Speed)  
{
		      














}


/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
	/*		Function Set The PULL :
								
					PULL_OFF
					PULL_UP
					PULL_DOWN
	
	
		*/
	void DIO_voidSetPull(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8PULL_TYPE)  
{
		      







}


/*********************************************************** END_ FUNCTION   ***********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
		/*		Function To Read Data From IDR		*/
		u8 DIO_u8ReadData(u8 copy_u8PORT ,u8 copy_u8PIN)
{
			u8 u8Local_Data = 0 ;
			
		      














			  return u8Local_Data ; 
}


/*********************************************************** END_ FUNCTION   ***********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
	/*		
			* Function To Write Data At ODR	Value :
									 high 
									 low	
	*/
	void DIO_voidWriteDataOdr(u8 copy_u8PORT ,u8 copy_u8PIN , u8 copy_u8Value )
 {
	
	 

















	
}


/*********************************************************** END_ FUNCTION   ***********************************************************/
	

/*		Function Set The AltFn		: Every Pin Need 4 Bits SO We Have High AND Low			*/
void DIO_voidPinSetAltFn(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8AlT)

{
	/* From 0 To  7 */
	










	/* From 8 To  15 */











	
}


