#ifndef GAMEPLAY_H_INCLUDED
#define GAMEPLAY_H_INCLUDED
#include "iGraphics.h"
int fl=0;

//int bullet[5];
int bulletX[10],bulletY[10];
int salamX,salamY;

int moveY=300,moveX=30;
int r=2;
int g=0;
int i=0,k=0,bX=197,bY=103;

void hero(unsigned char key){
    if(key == GLUT_KEY_UP && moveY<700)
        moveY += 3;
    else moveY-=30;

    if(key == GLUT_KEY_DOWN && moveY>0)
        moveY -= 3;
    else moveY+=30;
}

void fire( int key)                           //Bullet Fire
{    
	 /*if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && r==2)
	 {      
		    fl=1;
			i++;
            bulletX[i]=bX;
			bulletY[i]=moveY+bY;
	 }*/

	 if(key == 'f' && r==2)
	 {      
		    fl=1;
			i++;
            bulletX[i]=bX;
			bulletY[i]=moveY+bY;
	 }
			if(i==7)
				{ 
					r=1;i=0;
			    }
	if(key == 'r')
		r = 2;

	if(key == 's' && r==2)
	{
		salamX=bX;
		salamY=moveY+bY;
	}


    
}



void bulletshow()
{     
         bulletX[1]=bulletX[1]+5; 
		  bulletX[2]=bulletX[2]+5;  
		   bulletX[3]=bulletX[3]+5;  
		    bulletX[4]=bulletX[4]+5;  
			 bulletX[5]=bulletX[5]+5;  
			  bulletX[6]=bulletX[6]+5;  

}




int greenStuX[5] = {1200,1200,1200,1200,1200}, greenStuY[5] = {100+rand()%450,100+rand()%450,100+rand()%450,100+rand()%450,100+rand()%450};

void GreenStu()
{
	for(int i=0; i<=4;i++){
	greenStuX[i]--;
    if(greenStuX[i]==0 )
    {
        greenStuX[i]= 1200;
      
    }
	}
  
}

/*void GreenStu1()
{
	greenStuX--;
    if(greenStuX==0 )
    {
        greenStuX= 1200;
      
    }
  
}*/

int redStuX[5]= {1200,1200,1200,1200,1200}, redStuY[5]={100+rand()%450,100+rand()%450,100+rand()%450,100+rand()%450,100+rand()%450};


void RedStu()
{
   
	for(int i=0; i<=4;i++){
	redStuX[i]--;
    if(redStuX==0)
    {
        redStuX[i]= 1200;
        redStuY[i]= 100+ rand()%450;
		/*redStuY1= 100+ rand()%450;
		redStuY2= 100+ rand()%450;
		redStuY3= 100+ rand()%450;*/
		
	}
	}
}

int teacherX[5]= {1200,1200,1200,1200,1200}, teacherY[5]={100+rand()%450,100+rand()%450,100+rand()%450,100+rand()%450,100+rand()%450};
/*int teacherX[5], teacherY[5];
teacherY[0] = 350;
for (int j=0; j<5; j++)
{
	teacherX[j] = 1200;
	teacherY[j] = 100+rand()%450;
}*/

void Teacher()
{
	for(int i=0; i<=4;i++){
	teacherX[i]--;
    if(teacherX[i]==0)
    {
        teacherX[i]= 1200;
        teacherY[i]= 100+ rand()%450;
    }
	}
}


//void drawb(){
	//if((bulletX[1]+100>redStuX && bulletY[1]<redStuY+100)|| (bulletX[2]!=redStuX && bulletY[2]!=redStuY+100)|| bulletX[3]!=redStuX || bulletX[4]!=redStuX || bulletX[5]!=redStuX || bulletX[6]!=redStuX)
		//g=2;	
//}

#endif // PLAYER_H_INCLUDED
