	#include<AT89X52.H>		 
	#include<PWM.H>		 
    
//������
	void main(void)
{	
	unsigned char i;
    P1=0X00;   //�ص��	
		 	TMOD=0X01;
        	TH0= 0XFc;		  //1ms��ʱ
         	TL0= 0X18;
           	TR0= 1;
        	ET0= 1;
	        EA = 1;			   //�����ж�

	while(1)	//����ѭ��
	{ 	 
			 //���ź�Ϊ0  û���ź�Ϊ1
			if( LeftIRBZ == 0 || RightIRBZ == 0 )  
			{		
			  stop();		   //����С��ֹͣ
			}
			  else

			 {			  	   if(Left_1_led==0&&Right_1_led==0)

			   {
			     run();   //����ǰ������	  
			   }
				              
							   if(Left_1_led==1&&Right_1_led==0)	    //��߼�⵽����
			 	 {
				 	  leftrun();		  //����С����ת  ����
			     }
			   
				 			    if(Right_1_led==1&&Left_1_led==0)		//�ұ߼�⵽����
				  {	  
				      rightrun();		   //����С����ת	����
				  }
						    if(Right_1_led==1&&Left_1_led==1)		//���Ҷ��Ǻ��ߣ�С���������
				  {	  
				      //��������д��~
				  }

			}	 
	 }
}