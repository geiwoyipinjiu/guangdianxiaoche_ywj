	#include<AT89X52.H>		 
	#include<PWM.H>		 
	#include "LCD1602.h"
	
	
	//BUZZ=1�� 
	//BUZZ=0��
	
//������
	void main(void)
{	
					TMOD=0X01;
        	TH0= 0XFc;		  //1ms��ʱ
         	TL0= 0X18;
          TR0= 1;
        	ET0= 1;
	        EA = 1;			   //�����ж�

	while(1)	//����ѭ��
	{ 	 
				LCD_ShowChar(1,1,"h");
			 //���ź�Ϊ0  û���ź�Ϊ1 IRBZ		if( LeftIRBZ == 0 || RightIRBZ == 0 )  led == 0��˵��ʶ����
			 	if(Left_1_led==0&&Right_1_led==0)		//���������м�
			   {
				   BUZZ=1;
			     //run();   //����ǰ������	
					 stop();
				 }			              
									//if( LeftIRBZ == 1 && RightIRBZ == 0 )
				else if(Left_1_led==1&&Right_1_led==0)	    //��߼�⵽����
			 	 {
					 BUZZ=1;
				 	 leftrun();		  //����С����ת  ����
			     }
									
										//if( LeftIRBZ == 0 && RightIRBZ == 1 )
				else if(Right_1_led==1&&Left_1_led==0)		//�ұ߼�⵽����
				  {	  
						BUZZ=1;
				    rightrun();		   //����С����ת	����
				  }
								//if( LeftIRBZ == 0 && RightIRBZ == 0 )
				else if(Right_1_led==1&&Left_1_led==1)		//���Ҷ��Ǻ��ߣ�С���������
				  {	  
				    BUZZ=1;
						stop();
				  }

	}	 
	 
}