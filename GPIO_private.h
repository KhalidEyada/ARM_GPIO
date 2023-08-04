/**************************************************************************************

*	 - Developer can't Edit in it    
*	  - Register _ Defination		
*	  - Design : 
					- #define	:	Yes
					- Union		:	NO
					- Struct	:	NO

**************************************************************************************/

/*************************************************************************************
******************* guard of file will call on time in .c		   *******************
*************************************************************************************/ 


#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/***********************************************************************************
	-----> Macros
			*  Base_Address GPI0X				
************************************************************************************/

#define  GPIOA_BASE_ADDRESS									
#define  GPIOB_BASE_ADDRESS									
#define  GPIOC_BASE_ADDRESS									
#define  GPIOD_BASE_ADDRESS									
#define  GPIOE_BASE_ADDRESS									
#define  GPIOF_BASE_ADDRESS									
#define  GPIOG_BASE_ADDRESS									
#define  GPIOH_BASE_ADDRESS									

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_A		
************************************************************************************/


#define  GPIOA_MODER									(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X00)))			
#define  GPIOA_OTYPER									(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X04)))			
#define  GPIOA_OSPEEDR								    (*((volatile u32*) (GPIOA_BASE_ADDRESS +0X08)))			
#define  GPIOA_PUPDR									(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X0C)))			
#define  GPIOA_IDR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X10)))			
#define  GPIOA_ODR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X14)))			
#define  GPIOA_BSRR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X18)))			
#define  GPIOA_LCKR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X1C)))			
#define  GPIOA_AFRL										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X20)))			
#define  GPIOA_AFRH										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X24)))			
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_B		
************************************************************************************/


#define  GPIOB_MODER									
#define  GPIOB_OTYPER									
#define  GPIOB_OSPEEDR							    	
#define  GPIOB_PUPDR									
#define  GPIOB_IDR										
#define  GPIOB_ODR										
#define  GPIOB_BSRR										
#define  GPIOB_LCKR										
#define  GPIOB_AFRL										
#define  GPIOB_AFRH											
																										
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_C		
************************************************************************************/


#define  GPIOC_MODER									
#define  GPIOC_OTYPER									
#define  GPIOC_OSPEEDR							    	
#define  GPIOC_PUPDR									
#define  GPIOC_IDR										
#define  GPIOC_ODR										
#define  GPIOC_BSRR										
#define  GPIOC_LCKR										
#define  GPIOC_AFRL										
#define  GPIOC_AFRH											
	
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_D		
************************************************************************************/


#define  GPIOD_MODER									
#define  GPIOD_OTYPER									
#define  GPIOD_OSPEEDR							    	
#define  GPIOD_PUPDR									
#define  GPIOD_IDR										
#define  GPIOD_ODR										
#define  GPIOD_BSRR										
#define  GPIOD_LCKR										
#define  GPIOD_AFRL										
#define  GPIOD_AFRH											

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_E		
************************************************************************************/


#define  GPIOE_MODER									
#define  GPIOE_OTYPER									
#define  GPIOE_OSPEEDR								    
#define  GPIOE_PUPDR									
#define  GPIOE_IDR										
#define  GPIOE_ODR										
#define  GPIOE_BSRR										
#define  GPIOE_LCKR										
#define  GPIOE_AFRL										
#define  GPIOE_AFRH											
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_F		
************************************************************************************/


#define  GPIOF_MODER									
#define  GPIOF_OTYPER									
#define  GPIOF_OSPEEDR							        
#define  GPIOF_PUPDR									
#define  GPIOF_IDR										
#define  GPIOF_ODR										
#define  GPIOF_BSRR										
#define  GPIOF_LCKR										
#define  GPIOF_AFRL										
#define  GPIOF_AFRH											

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_G		
************************************************************************************/


#define  GPIOG_MODER									
#define  GPIOG_OTYPER									
#define  GPIOG_OSPEEDR								    
#define  GPIOG_PUPDR									
#define  GPIOG_IDR										
#define  GPIOG_ODR										
#define  GPIOG_BSRR										
#define  GPIOG_LCKR										
#define  GPIOG_AFRL										
#define  GPIOG_AFRH										

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_H		
************************************************************************************/


#define  GPIOH_MODER									(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X00)))
#define  GPIOH_OTYPER									(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X04)))
#define  GPIOH_OSPEEDR								    (*((volatile u32*) (GPIOH_BASE_ADDRESS +0X08)))
#define  GPIOH_PUPDR									(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X0C)))
#define  GPIOH_IDR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X10)))
#define  GPIOH_ODR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X14)))
#define  GPIOH_BSRR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X18)))
#define  GPIOH_LCKR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X1C)))
#define  GPIOH_AFRL										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X20)))
#define  GPIOH_AFRH										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X24)))	
																																																																																																																																												
#endif //GPIO_PRIVATE_H

