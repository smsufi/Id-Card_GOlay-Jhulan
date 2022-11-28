#include "iGraphics.h"
#include "mymenu.h"
#include "player.h"
#include "GamePlay.h"
#include "Enemy.h"

void Fire();
//PLAYER MOVEMENT

int tim1,tim2, tim3, tim4,tim5;
bool musicOn = true;
int BtnCHK=1;
int myIndex=0;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
    iClear();
    iShowImage(0,0,1200,800,imgSecondbg);      //OPENS FIRST PAGE
    iShowImage(520,200,280,400,imgEnter);        //PRINTS THE INSTRUCTION TO PRESS ENTER IN FIRST PAGE

    if (enterCHK==2)
    {
        Menu();                                           //OPENS MENU SCREEN         ::LOCATED - MY MENU HEADER
        MenuHover();                                   //CHNAGES COLOR OF MENU ITEMS WHEN MOUSE IS MOVED OVER THEM       ::LOCATED - MY MENU HEADER
    }

    if(storyCHK==2)
    {
        iShowImage(0,0,1200,800,imgStoryMain);                    //OPENS STORY SCREEN UPON CLICK ON STORY
        iShowImage(30,680,250,100,bButton);
    }

    if(scoreCHK==2)
    {
        iShowImage(0,0,1200,800,imgScoreMain);
        iShowImage(30,680,250,100,bButton);
    }                                                            //OPENS SCORE SCREEN UPON CLICK ON HIGHSCORE

    if(controlCHK==2)
    {
        iShowImage(0,0,1200,800,imgControlMain);                    //OPENS INSTRUCTION SCREEN UPON CLICK ON CONTROLS
        iShowImage(30,680,250,100,bButton);
    }

    if(usCHK==2)
    {
        iShowImage(0,0,1200,800,imgUs);                          //OPENS CREDIT PAGE UPON CLICK ON ABOUT US
        iShowImage(30,680,250,100,bButton);
    }

    //if(playerCHK==2)
    //	drawTextBox();                               // DRAWS TEXT BOX IN PLAY GAME FOR NAME INPUT



    if(CHK==2)
    {
        iShowImage(0,0,1200,800,imgGameplayBG);
        iShowImage(moveX,moveY,250,250,imgGunman);

		iShowImage(greenStuX[0],greenStuY[0],55,110,imgGreenStu[0]);
		iShowImage(greenStuX[1],greenStuY[1],55,110,imgGreenStu[1]);
		iShowImage(greenStuX[2],greenStuY[2],55,110,imgGreenStu[2]);
		iShowImage(greenStuX[3],greenStuY[3],55,110,imgGreenStu[3]);
		iShowImage(greenStuX[4],greenStuY[4],55,110,imgGreenStu[4]);

		iShowImage(redStuX[0],redStuY[0],55,110,imgRedStu[0]);
		iShowImage(redStuX[1],redStuY[1],55,110,imgRedStu[1]);
		iShowImage(redStuX[2],redStuY[2],55,110,imgRedStu[2]);
		iShowImage(redStuX[3],redStuY[3],55,110,imgRedStu[3]);
		iShowImage(redStuX[4],redStuY[4],55,110,imgRedStu[4]);
		
		//iShowImage(redStuX,redStuY2,a.length,a.height,a.image);
		//iShowImage(redStuX,redStuY3,a.length,a.height,a.image);*/



		iShowImage(teacherX[0],teacherY[0],55,110,imgTeacher[0]);
		iShowImage(teacherX[1],teacherY[1],55,110,imgTeacher[1]);
		iShowImage(teacherX[2],teacherY[2],55,110,imgTeacher[2]);
		iShowImage(teacherX[3],teacherY[3],55,110,imgTeacher[3]);
		iShowImage(teacherX[4],teacherY[4],55,110,imgTeacher[4]);
        
		iShowImage (bulletX[1],bulletY[1],80,45,imgBullet);	
	

		iShowImage (bulletX[2],bulletY[2],80,45,imgBullet);
		iShowImage (bulletX[3],bulletY[3],80,45,imgBullet);
		iShowImage (bulletX[4],bulletY[4],80,45,imgBullet);
		iShowImage (bulletX[5],bulletY[5],80,45,imgBullet);
		iShowImage (bulletX[6],bulletY[6],80,45,imgBullet);
		//iShowImage (salamX,salamY,100,50,imgSalam);
		Fire();
		fl=0;
		
		for(int i=1; i<7;i++){
			if((bulletX[i]+80>greenStuX && bulletX[i]+80<greenStuX+110)&&(bulletY[i]+45>greenStuY && bulletY[i]+45<greenStuY+110)){

				bulletX[i]=1300;
				bulletY[i]=0;
				printf("score");
				greenStuX=1200;
				greenStuY=100+rand()%450;

			}
			if((bulletX[i]+80>redStuX && bulletX[i]+80<redStuX+110)&&(bulletY[i]+45>redStuY && bulletY[i]+45<redStuY+110)){

				bulletX[i]=1300;
				bulletY[i]=0;
				printf("score");
				redStuX=1200;
				redStuY= 100+ rand()%450;
				

			}
			if((bulletX[i]+80>teacherX && bulletX[i]+80<teacherX+110)&&(bulletY[i]+45>teacherY && bulletY[i]+45<teacherY+110)){

				bulletX[i]=1300;
				bulletY[i]=0;
				printf("score");
				teacherX=1200;
				teacherY= 100+ rand()%450;

			}
			}

		if(r==1)
			{ iSetColor(255, 255, 255);
					iText(550, 430, "Press 'R' to RELOAD",GLUT_BITMAP_TIMES_ROMAN_24);
		}

		//drawb();
    }

    //SHOWS GAMEplay AFTER ENTERING NAme

    if(playerCHK == 2)
    {
        iShowImage(0,0,1200,800,index);                   //OPENS BACKGROUND SCREEN IN NAME INPUT
        drawTextBox();                                     //DRAWS TEXT BOX IN PLAY GAME FOR NAME INPUT                :: LOCATED - PLAYER HEADER
        iSetColor(255, 255, 255);
        iText(580, 430, player);                          //PRINTS INSTRUCTION LINE IN NAME_INPUT SCREEN
    }

	//iText(1000,500,"Score : 100", GLUT_BITMAP_HELVETICA_10);

}

	




/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
    dragMX = mx;
    dragMY = my;
}
//*******************************************************************ipassiveMouse***********************************************************************//


/*function iPassiveMouse() is called when the user moves the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
    cursorMX = mx;
    cursorMY = my;
}

void iMouse(int button, int state, int mx, int my)
{

    if(enterCHK==2)
    {
     
    MenuClick(button,state);              //FUCTIONS IN MENU INTERFACE                          ::LOCATED - MY MENU HEADER
     FindText(button,state,mx,my);                   //FUNCTIONS IN FINDING TEXT BOX IN NAME_INPUT SCREEN                :: LOCATED - PLAYER HEADER
	}
	
   /* if(CHK==2)
    {
	fire(button,state); 
	}*/
	
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{


    if (key == '\r')
    {
        enterCHK=2;                    //TAKES USER TO MENU FROM OPENNING SCREEN
    }

	  inputPlayer(key);
                                              //FUNCTION THAT SENDS INPUT FOR TAKING PLAYER NAME IN NAME_INPUT SCREEN    :: LOCATED - PLAYER HEADER

	  fire(key);
    
}


/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	hero(key);

}


void Fire()
{
	if(fl==1){
	iShowImage(bX+30,moveY+bY+10,40,30,imgFire);
	PlaySound("music//gunshot.wav", NULL , SND_ASYNC);
	
	}
}
int main()
{
	
    tim1=iSetTimer(0.5,GreenStu);
    tim2=iSetTimer(30,RedStu);
    tim3=iSetTimer(60,Teacher);
	tim4=iSetTimer(30,bulletshow);
	tim5=iSetTimer(.7,Fire);
	//tim1 = rand()%5;


    player[0]= 0;
    //NAME OF THE PLAYER IS KEPT CLEAR

    iInitialize(1200,800, "FireWall of AUST");

    loadImage();                     //CALLS THE FUNCTION TO LOAD ALL THE NECESSARY IMAGES        ::LOCATED - MY MENU HEADER
	

    iStart();


    return 0;
}
