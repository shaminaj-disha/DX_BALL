#include "iGraphics.h"
#define BALLSPEED 1
#define BALL_RAD 10

#define WINDOW_X 1224
#define WINDOW_Y 688

#define PADDLE_H 10
#define BRICK_H 30
#define BRICK_LEN 80

#define START_GAME_X 358
#define START_GAME_LEN 862
#define START_GAME_Y 406
#define START_GAME_H 480

#define HOW_TO_PLAY_X 358
#define HOW_TO_PLAY_LEN 862
#define HOW_TO_PLAY_Y 286
#define HOW_TO_PLAY_H 360

#define HIGH_SCORES_X 358
#define HIGH_SCORES_LEN 862
#define HIGH_SCORES_Y 166
#define HIGH_SCORES_H 240

#define EXIT_X 358
#define EXIT_LEN 862
#define EXIT_Y 46
#define EXIT_H 120

#define HOW_TO_PLAY_EXIT_X 77
#define HOW_TO_PLAY_EXIT_LEN 203
#define HOW_TO_PLAY_EXIT_Y  688-648
#define HOW_TO_PLAY_EXIT_H 688-598


#define level_1_brick 29

#define LIFESPEED 1
int PADDLE_LEN=120;
int PADDLE_1ST=PADDLE_LEN/3;
int PADDLE_2ND=(PADDLE_LEN/3)+PADDLE_1ST;
int PADDLE_3RD=PADDLE_LEN;

int brick1_x = 78;
int brick1_y = 688-232;
int brick1_len = 157;
int brick1_h = 688-203;
int brick1_hit=0;

int brick2_x = 78;
int brick2_y = 688-201;
int brick2_len = 157;
int brick2_h = 688-172;
int brick2_hit=0;

int brick3_x = 78;
int brick3_y = 688-170;
int brick3_len = 157;
int brick3_h = 688-141;
int brick3_hit=0;

int brick4_x = 159;
int brick4_y = 688-201;
int brick4_len = 238;
int brick4_h = 688-172;
int brick4_hit=0;

int brick5_x = 159;
int brick5_y = 688-139;
int brick5_len = 238;
int brick5_h = 688-110;
int brick5_hit=0;

int brick6_x = 240;
int brick6_y = 688-170;
int brick6_len = 319;
int brick6_h = 688-141;
int brick6_hit=0;

int brick7_x = 240;
int brick7_y = 688-201;
int brick7_len = 319;
int brick7_h = 688-172;
int brick7_hit=0;

int brick8_x = 240;
int brick8_y = 688-232;
int brick8_len = 319;
int brick8_h = 688-203;
int brick8_hit=0;

int brick9_x = 376;
int brick9_y = 688-232;
int brick9_len = 455;
int brick9_h = 688-203;
int brick9_hit=0;

int brick10_x = 376;
int brick10_y = 688-201;
int brick10_len = 455;
int brick10_h = 688-172;
int brick10_hit=0;

int brick11_x = 376;
int brick11_y = 688-170;
int brick11_len = 455;
int brick11_h = 688-141;
int brick11_hit=0;

int brick12_x = 376;
int brick12_y = 688-139;
int brick12_len = 455;
int brick12_h = 688-110;
int brick12_hit=0;

int brick13_x = 457;
int brick13_y = 688-232;
int brick13_len = 536;
int brick13_h = 688-203;
int brick13_hit=0;

int brick14_x = 538;
int brick14_y = 688-232;
int brick14_len = 617;
int brick14_h = 688-203;
int brick14_hit=0;

int brick15_x = 538;
int brick15_y = 688-201;
int brick15_len = 617;
int brick15_h = 688-172;
int brick15_hit=0;

int brick16_x = 538;
int brick16_y = 688-170;
int brick16_len = 617;
int brick16_h = 688-141;
int brick16_hit=0;

int brick17_x = 538;
int brick17_y = 688-139;
int brick17_len = 617;
int brick17_h = 688-110;
int brick17_hit=0;

int brick18_x = 680;
int brick18_y = 688-139;
int brick18_len = 759;
int brick18_h = 688-110;
int brick18_hit=0;

int brick19_x = 680;
int brick19_y = 688-170;
int brick19_len = 759;
int brick19_h = 688-141;
int brick19_hit=0;

int brick20_x = 680;
int brick20_y = 688-232;
int brick20_len = 759;
int brick20_h = 688-203;
int brick20_hit=0;

int brick21_x = 761;
int brick21_y = 688-232;
int brick21_len = 840;
int brick21_h = 688-203;
int brick21_hit=0;

int brick22_x = 761;
int brick22_y = 688-201;
int brick22_len = 840;
int brick22_h = 688-172;
int brick22_hit=0;

int brick23_x = 761;
int brick23_y = 688-139;
int brick23_len = 840;
int brick23_h = 688-110;
int brick23_hit=0;

int brick24_x = 896;
int brick24_y = 688-139;
int brick24_len = 975;
int brick24_h = 688-110;
int brick24_hit=0;

int brick25_x = 977;
int brick25_y = 688-139;
int brick25_len = 1056;
int brick25_h = 688-110;
int brick25_hit=0;

int brick26_x = 977;
int brick26_y = 688-170;
int brick26_len = 1056;
int brick26_h = 688-141;
int brick26_hit=0;

int brick27_x = 977;
int brick27_y = 688-201;
int brick27_len = 1056;
int brick27_h = 688-172;
int brick27_hit=0;

int brick28_x = 977;
int brick28_y = 688-232;
int brick28_len = 1056;
int brick28_h = 688-203;
int brick28_hit=0;

int brick29_x = 1058;
int brick29_y = 688-139;
int brick29_len = 1137;
int brick29_h = 688-110;
int brick29_hit=0;


int brick30_x = 148;
int brick30_y = 688-191;
int brick30_len = 227;
int brick30_h = 688-162;
int brick30_hit=0;

int brick31_x = 229;
int brick31_y = 688-160;
int brick31_len = 308;
int brick31_h = 688-131;
int brick31_hit=0;

int brick32_x = 229;
int brick32_y = 688-191;
int brick32_len = 308;
int brick32_h = 688-162;
int brick32_hit=0;

int brick33_x = 229;
int brick33_y = 688-222;
int brick33_len = 308;
int brick33_h = 688-193;
int brick33_hit=0;

int brick34_x = 310;
int brick34_y = 688-129;
int brick34_len = 389;
int brick34_h = 688-100;
int brick34_hit=0;

int brick35_x = 310;
int brick35_y = 688-160;
int brick35_len = 389;
int brick35_h = 688-131;
int brick35_hit=0;

int brick36_x = 310;
int brick36_y = 688-191;
int brick36_len = 389;
int brick36_h = 688-162;
int brick36_hit=0;

int brick37_x = 310;
int brick37_y = 688-222;
int brick37_len = 389;
int brick37_h = 688-193;
int brick37_hit=0;

int brick38_x = 310;
int brick38_y = 688-253;
int brick38_len = 389;
int brick38_h = 688-224;
int brick38_hit=0;

int brick39_x = 391;
int brick39_y = 688-160;
int brick39_len = 470;
int brick39_h = 688-131;
int brick39_hit=0;

int brick40_x = 391;
int brick40_y = 688-191;
int brick40_len = 470;
int brick40_h = 688-162;
int brick40_hit=0;

int brick41_x = 391;
int brick41_y = 688-222;
int brick41_len = 470;
int brick41_h = 688-193;
int brick41_hit=0;

int brick42_x = 472;
int brick42_y = 688-191;
int brick42_len = 551;
int brick42_h = 688-162;
int brick42_hit=0;

int brick43_x = 410;
int brick43_y = 688-341;
int brick43_len = 489;
int brick43_h = 688-312;
int brick43_hit=0;

int brick44_x = 491;
int brick44_y = 688-310;
int brick44_len = 570;
int brick44_h = 688-281;
int brick44_hit=0;

int brick45_x = 491;
int brick45_y = 688-341;
int brick45_len = 570;
int brick45_h = 688-312;
int brick45_hit=0;

int brick46_x = 491;
int brick46_y = 688-372;
int brick46_len = 570;
int brick46_h = 688-343;
int brick46_hit=0;

int brick47_x = 572;
int brick47_y = 688-279;
int brick47_len = 651;
int brick47_h = 688-250;
int brick47_hit=0;

int brick48_x = 572;
int brick48_y = 688-310;
int brick48_len = 651;
int brick48_h = 688-281;
int brick48_hit=0;

int brick49_x = 572;
int brick49_y = 688-341;
int brick49_len = 651;
int brick49_h = 688-312;
int brick49_hit=0;

int brick50_x = 572;
int brick50_y = 688-372;
int brick50_len = 651;
int brick50_h = 688-343;
int brick50_hit=0;

int brick51_x = 572;
int brick51_y = 688-403;
int brick51_len = 651;
int brick51_h = 688-374;
int brick51_hit=0;

int brick52_x = 653;
int brick52_y = 688-310;
int brick52_len = 732;
int brick52_h = 688-281;
int brick52_hit=0;

int brick53_x = 653;
int brick53_y = 688-341;
int brick53_len = 732;
int brick53_h = 688-312;
int brick53_hit=0;

int brick54_x = 653;
int brick54_y = 688-372;
int brick54_len = 732;
int brick54_h = 688-343;
int brick54_hit=0;

int brick55_x = 734;
int brick55_y = 688-341;
int brick55_len = 813;
int brick55_h = 688-312;
int brick55_hit=0;

int brick56_x = 672;
int brick56_y = 688-191;
int brick56_len = 751;
int brick56_h = 688-162;
int brick56_hit=0;

int brick57_x = 753;
int brick57_y = 688-160;
int brick57_len = 832;
int brick57_h = 688-131;
int brick57_hit=0;

int brick58_x = 753;
int brick58_y = 688-191;
int brick58_len = 832;
int brick58_h = 688-162;
int brick58_hit=0;

int brick59_x = 753;
int brick59_y = 688-222;
int brick59_len = 832;
int brick59_h = 688-193;
int brick59_hit=0;

int brick60_x = 834;
int brick60_y = 688-129;
int brick60_len = 913;
int brick60_h = 688-100;
int brick60_hit=0;

int brick61_x = 834;
int brick61_y = 688-160;
int brick61_len = 913;
int brick61_h = 688-131;
int brick61_hit=0;

int brick62_x = 834;
int brick62_y = 688-191;
int brick62_len = 913;
int brick62_h = 688-162;
int brick62_hit=0;

int brick63_x = 834;
int brick63_y = 688-222;
int brick63_len = 913;
int brick63_h = 688-193;
int brick63_hit=0;


int brick64_x = 834;
int brick64_y = 688-253;
int brick64_len = 913;
int brick64_h = 688-224;
int brick64_hit=0;


int brick65_x = 915;
int brick65_y = 688-160;
int brick65_len = 994;
int brick65_h = 688-131;
int brick65_hit=0;


int brick66_x = 915;
int brick66_y = 688-191;
int brick66_len = 994;
int brick66_h = 688-162;
int brick66_hit=0;

int brick67_x = 915;
int brick67_y = 688-222;
int brick67_len = 994;
int brick67_h = 688-193;
int brick67_hit=0;


int brick68_x = 996;
int brick68_y = 688-191;
int brick68_len = 1075;
int brick68_h = 688-162;
int brick68_hit=0;

int life1_x=brick1_x+26;
int life1_y =brick1_y;
int life1_flag=0;

int life2_x=brick1_x+26;
int life2_y =brick1_y;
int life2_flag=0;

int life3_x=brick1_x+26;
int life3_y =brick1_y;
int life3_flag=0;

int star1_x=brick13_x+26;
int star1_y =brick13_y;
int star1_flag=0;

int star2_x=brick23_x+26;
int star2_y =brick23_y;
int star2_flag=0;

int star3_x=brick29_x+26;
int star3_y =brick29_y;
int star3_flag=0;
int star_count=0;
char star[100];

int star4_x=brick39_x+26;
int star4_y =brick39_y;
int star4_flag=0;

int star5_x=brick49_x+26;
int star5_y =brick49_y;
int star5_flag=0;

int star6_x=brick62_x+26;
int star6_y =brick62_y;
int star6_flag=0;

int apple1_x=brick4_x+26;
int apple1_y =brick4_y;
int apple1_flag=0;
int apple_count=0;

int apple2_x=brick44_x+26;
int apple2_y =brick44_y;
int apple2_flag=0;

int apple3_x=brick19_x+26;
int apple3_y =brick19_y;
int apple3_flag=0;
//int apple3_count=0;
char apple[100];


int watermillon1_x=brick18_x+26;
int watermillon1_y =brick18_y;
int watermillon1_flag=0;
int watermillon_count=0;

int watermillon2_x=brick68_x+26;
int watermillon2_y =brick68_y;
int watermillon2_flag=0;
//int watermillon2_count=0;


int watermillon3_x=brick29_x+26;
int watermillon3_y =brick29_y;
int watermillon3_flag=0;
//int watermillon3_count=0;
char watermillon[100];

int cherry1_x=brick27_x+26;
int cherry1_y =brick27_y;
int cherry1_flag=0;
int cherry_count=0;
char cherry[100];

int cherry2_x=brick45_x+26;
int cherry2_y =brick45_y;
int cherry2_flag=0;
//int cherry2_count=0;

int cherry3_x=brick37_x+26;
int cherry3_y =brick37_y;
int cherry3_flag=0;
//int cherry3_count=0;

int dead1_x=brick11_x+26;
int dead1_y =brick11_y;
int dead1_count=0;

int dead2_x=brick42_x+26;
int dead2_y =brick42_y;
int dead2_count=0;

int dead3_x=brick11_x+26;
int dead3_y =brick11_y;
int dead3_count=0;
char dead[100];

int paddle_length_increased_x=brick7_x+26;
int paddle_length_increased_y =brick7_y;
int paddle_length_increased_flag=0;

int paddle_length_decreased_x=brick9_x+26;
int paddle_length_decreased_y =brick9_y;
int paddle_length_decreased_flag=0;

char score[100],life[5];
char str1[100],str2[100];
char playerNames[5][100];
int playerScores[100];

 int count=0,life_count=1,brick_count=0,l=0;
 double ball_x,ball_y;
 
	int paddle_x=688-60, paddle_y=0,page=0;
	int i,brick_t,ball_direct=0,mouse_clk=0;
	int bat_cntrl=0,ball_x_out=0,ball_y_out=0;
	int portion_h=1,portion_len=3,mid=0;
	double speed_x=1,speed_y=1;
	int ball_speed=4;
	int life_t,life_minus=0;
	int mouse_box_click=0;
	int leve1_brick_color[30];
	int click_1st=0;
	int p,r;
	int ball_t,menu=0;
	//shooting
	int guli=0;
	int mouse_clk1=0;
	int rectangle1_x,rectangle1_y=PADDLE_H;
    int rectangle2_x,rectangle2_y=PADDLE_H;
void homepage()
{
	iShowBMP(0,0,"Start_page.bmp");
}

void Brickvanish()
{
	if(brick1_hit==0)
	{
       	if(leve1_brick_color[0]==0)
		{
			iShowBMP(brick1_x,brick1_y,"BRICK-13.bmp");
			leve1_brick_color[0]=1;
		}
		else if(leve1_brick_color[0]==1)
		{
			iShowBMP(brick1_x,brick1_y,"BRICK-2.bmp");
			leve1_brick_color[0]=0;
		}
	}
	else if(brick1_hit==1)
	{
		brick1_x=2200;
		brick1_y=3300;

	}
	if(brick2_hit==0)
	{
		if(leve1_brick_color[1]==0)
		{
			iShowBMP(brick2_x,brick2_y,"BRICK-13.bmp");
			leve1_brick_color[1]=1;
		}
		else if(leve1_brick_color[1]==1)
		{
			iShowBMP(brick2_x,brick2_y,"BRICK-2.bmp");
			leve1_brick_color[1]=0;
		}
       
	
	}
	else if(brick2_hit==1)
	{
		
		brick2_x=2200;
		brick2_y=2200;
	
	}
	if(brick3_hit==0)
	{
 
		if(leve1_brick_color[2]==0)
		{
			iShowBMP(brick3_x,brick3_y,"BRICK-13.bmp");
			leve1_brick_color[2]=1;
		}
		else if(leve1_brick_color[2]==1)
		{
			iShowBMP(brick3_x,brick3_y,"BRICK-2.bmp");
			leve1_brick_color[2]=0;
		}
	
	}
	else if(brick3_hit==1)
	{
		
		brick3_x=2200;
		brick3_y=2200;
	 
	}
	if(brick4_hit==0)
	{
		if(leve1_brick_color[3]==0)
		{
			iShowBMP(brick4_x,brick4_y,"BRICK-13.bmp");
			leve1_brick_color[3]=1;
		}
		else if(leve1_brick_color[3]==1)
		{
			iShowBMP(brick4_x,brick4_y,"BRICK-2.bmp");
			leve1_brick_color[3]=0;
		}
	
	}
	else if(brick4_hit==1)
	{
		brick4_x=2220;
		brick4_y=2220;	
	}
	if(brick5_hit==0)
	{
        	if(leve1_brick_color[4]==0)
		{
			iShowBMP(brick5_x,brick5_y,"BRICK-13.bmp");
		    leve1_brick_color[4]=1;
		}
		else if(leve1_brick_color[4]==1)
		{
			iShowBMP(brick5_x,brick5_y,"BRICK-2.bmp");
			leve1_brick_color[4]=0;
		}
	
	}
	else if(brick5_hit==1)
	{
		brick5_x=2222;
		brick5_y=2222;
	  
	}
	if(brick6_hit==0)
	{
		if(leve1_brick_color[5]==0)
		{
			iShowBMP(brick6_x,brick6_y,"BRICK-13.bmp");
			leve1_brick_color[5]=1;
		}
		else if(leve1_brick_color[5]==1)
		{
			iShowBMP(brick6_x,brick6_y,"BRICK-2.bmp");
			leve1_brick_color[5]=0;
		}
	
	}
	else if(brick6_hit==1)
	{
		brick6_x=2222;
		brick6_y=3333;
		
	}
	if(brick7_hit==0)
	{
       if(leve1_brick_color[6]==0)
		{
			iShowBMP(brick7_x,brick7_y,"BRICK-13.bmp");
			leve1_brick_color[6]=1;
		}
		else if(leve1_brick_color[6]==1)
		{
			iShowBMP(brick7_x,brick7_y,"BRICK-2.bmp");
			leve1_brick_color[6]=0;
		}
	
	}
	else if(brick7_hit==1)
	{
		brick7_x=2200;
		brick7_y=2200;
		
	
	}
	if(brick8_hit==0)
	{
       if(leve1_brick_color[7]==0)
		{
			iShowBMP(brick8_x,brick8_y,"BRICK-13.bmp");
			leve1_brick_color[7]=1;
		}
		else if(leve1_brick_color[7]==1)
		{
			iShowBMP(brick8_x,brick8_y,"BRICK-2.bmp");
			leve1_brick_color[7]=0;
		}
	
	}
	else if(brick8_hit==1)
	{
		brick8_x=2100;
		brick8_y=2100;
	}
	if(brick9_hit==0)
	{
		if(leve1_brick_color[8]==0)
		{
			iShowBMP(brick9_x,brick9_y,"BRICK-12.bmp");
			leve1_brick_color[8]=1;
		}
		else if(leve1_brick_color[8]==1)
		{
			iShowBMP(brick9_x,brick9_y,"BRICK-3.bmp");
			leve1_brick_color[8]=0;
		}
	}
	else if(brick9_hit==1)
	{
		brick9_x=2300;
		brick9_y=2300;
	}
	if(brick10_hit==0)
	{
        if(leve1_brick_color[9]==0)
		{
			iShowBMP(brick10_x,brick10_y,"BRICK-12.bmp");
			leve1_brick_color[9]=1;
		}
		else if(leve1_brick_color[9]==1)
		{
			iShowBMP(brick10_x,brick10_y,"BRICK-3.bmp");
			leve1_brick_color[9]=0;
		}
	
	}
	else if(brick10_hit==1)
	{
		brick10_x=2300;
		brick10_y=2300;
	}
	if(brick11_hit==0)
	{
        if(leve1_brick_color[10]==0)
		{
			iShowBMP(brick11_x,brick11_y,"BRICK-12.bmp");
			leve1_brick_color[10]=1;
		}
		else if(leve1_brick_color[10]==1)
		{
			iShowBMP(brick11_x,brick11_y,"BRICK-3.bmp");
			leve1_brick_color[10]=0;
		}
	
	}
	else if(brick11_hit==1)
	{
		brick11_x=3300;
		brick11_y=3660;
	   
	}
	if(brick12_hit==0)
	{
		if(leve1_brick_color[11]==0)
		{
			iShowBMP(brick12_x,brick12_y,"BRICK-12.bmp");
			leve1_brick_color[11]=1;
		}
		else if(leve1_brick_color[11]==1)
		{
			iShowBMP(brick12_x,brick12_y,"BRICK-3.bmp");
			leve1_brick_color[11]=0;
		}
	}
	else if(brick12_hit==1)
	{
		brick12_x=2300;
		brick12_y=2400;
	   
	}
	if(brick13_hit==0)
	{
        if(leve1_brick_color[12]==0)
		{
			iShowBMP(brick13_x,brick13_y,"BRICK-12.bmp");
			leve1_brick_color[12]=1;
		}
		else if(leve1_brick_color[12]==1)
		{
			iShowBMP(brick13_x,brick13_y,"BRICK-3.bmp");
			leve1_brick_color[12]=0;
		}
	
	}
	else if(brick13_hit==1)
	{
		brick13_x=2100;
		brick13_y=2200;
	}
	if(brick14_hit==0)
 {
       if(leve1_brick_color[13]==0)
		{
			iShowBMP(brick14_x,brick14_y,"BRICK-12.bmp");
			leve1_brick_color[13]=1;
		}
		else if(leve1_brick_color[13]==1)
		{
			iShowBMP(brick14_x,brick14_y,"BRICK-3.bmp");
			leve1_brick_color[13]=0;
		}
 }
 else if(brick14_hit==1)
 {
  brick14_x=2100;
  brick14_y=2200;
 
 }
  if(brick15_hit==0)
 {
        if(leve1_brick_color[14]==0)
		{
			iShowBMP(brick15_x,brick15_y,"BRICK-12.bmp");
			leve1_brick_color[14]=1;
		}
		else if(leve1_brick_color[14]==1)
		{
			iShowBMP(brick15_x,brick15_y,"BRICK-3.bmp");
			leve1_brick_color[14]=0;
		}
 }
 else if(brick15_hit==1)
 {
  brick15_x=2100;
  brick15_y=2200;

 }
  if(brick16_hit==0)
 {
  	if(leve1_brick_color[15]==0)
		{
			iShowBMP(brick16_x,brick16_y,"BRICK-12.bmp");
			leve1_brick_color[15]=1;
		}
		else if(leve1_brick_color[15]==1)
		{
			iShowBMP(brick16_x,brick16_y,"BRICK-3.bmp");
		    leve1_brick_color[15]=0;
		}
 
 }
 else if(brick16_hit==1)
 {
  brick16_x=2100;
  brick16_y=2200;
 
 }
  if(brick17_hit==0)
 {
		if(leve1_brick_color[16]==0)
		{
			iShowBMP(brick17_x,brick17_y,"BRICK-12.bmp");
			leve1_brick_color[16]=1;
		}
		else if(leve1_brick_color[16]==1)
		{
			iShowBMP(brick17_x,brick17_y,"BRICK-3.bmp");
			leve1_brick_color[16]=0;
		}
 
 }
 else if(brick17_hit==1)
 {
  brick17_x=2100;
  brick17_y=2200;
 
 }
  if(brick18_hit==0)
 {
       if(leve1_brick_color[17]==0)
		{
			iShowBMP(brick18_x,brick18_y,"BRICK-13.bmp");
			leve1_brick_color[17]=1;
		}
		else if(leve1_brick_color[17]==1)
		{
			iShowBMP(brick18_x,brick18_y,"BRICK-2.bmp");
			leve1_brick_color[17]=0;
		}
 }
 else if(brick18_hit==1)
 {
  brick18_x=2100;
  brick18_y=2200;

 }
  if(brick19_hit==0)
 {
        if(leve1_brick_color[18]==0)
		{
			iShowBMP(brick19_x,brick19_y,"BRICK-13.bmp");
			leve1_brick_color[18]=1;
		}
		else if(leve1_brick_color[18]==1)
		{
			iShowBMP(brick19_x,brick19_y,"BRICK-2.bmp");
			leve1_brick_color[18]=0;
		}
 }
 else if(brick19_hit==1)
 {
  brick19_x=2100;
  brick19_y=2200;
 
 }
   if(brick20_hit==0)
 {
        if(leve1_brick_color[19]==0)
		{
			iShowBMP(brick20_x,brick20_y,"BRICK-13.bmp");
			leve1_brick_color[19]=1;
		}
		else if(leve1_brick_color[19]==1)
		{
			iShowBMP(brick20_x,brick20_y,"BRICK-2.bmp");
			leve1_brick_color[19]=0;
		}
 
 }
 else if(brick20_hit==1)
 {
  brick20_x=2100;
  brick20_y=2200;
 }
  if(brick21_hit==0)
 {
     	if(leve1_brick_color[20]==0)
		{
			iShowBMP(brick21_x,brick21_y,"BRICK-13.bmp");
			leve1_brick_color[20]=1;
		}
		else if(leve1_brick_color[20]==1)
		{
			iShowBMP(brick21_x,brick21_y,"BRICK-2.bmp");
			leve1_brick_color[20]=0;
		}

 
 }
 else if(brick21_hit==1)
 {
  brick21_x=2100;
  brick21_y=2200;

 }
   if(brick22_hit==0)
 {
     	if(leve1_brick_color[21]==0)
		{
			iShowBMP(brick22_x,brick22_y,"BRICK-13.bmp");
			leve1_brick_color[21]=1;
		}
		else if(leve1_brick_color[21]==1)
		{
			iShowBMP(brick22_x,brick22_y,"BRICK-2.bmp");
			leve1_brick_color[21]=0;
		}
 }
 else if(brick22_hit==1)
 {
  brick22_x=2100;
  brick22_y=2200;
 
 }
 if(brick23_hit==0)
 {
      if(leve1_brick_color[22]==0)
		{
			iShowBMP(brick23_x,brick23_y,"BRICK-13.bmp");
	        leve1_brick_color[22]=1;
		}
		else if(leve1_brick_color[22]==1)
		{
			iShowBMP(brick23_x,brick23_y,"BRICK-2.bmp");
			leve1_brick_color[22]=0;
		}
 
 }
 else if(brick23_hit==1)
 {
  brick23_x=2100;
  brick23_y=2200;

 }
   if(brick24_hit==0)
 {
        if(leve1_brick_color[23]==0)
		{
			iShowBMP(brick24_x,brick24_y,"BRICK-12.bmp");
			leve1_brick_color[23]=1;
		}
		else if(leve1_brick_color[23]==1)
		{
			iShowBMP(brick24_x,brick24_y,"BRICK-3.bmp");
			leve1_brick_color[23]=0;
		}
 
 }
 else if(brick24_hit==1)
 {
  brick24_x=2100;
  brick24_y=2200;
 
 }
 if(brick25_hit==0)
 {
        if(leve1_brick_color[24]==0)
		{
			iShowBMP(brick25_x,brick25_y,"BRICK-12.bmp");
			leve1_brick_color[24]=1;
		}
		else if(leve1_brick_color[24]==1)
		{
			iShowBMP(brick25_x,brick25_y,"BRICK-3.bmp");
			leve1_brick_color[24]=0;
		}
 
 }
 else if(brick25_hit==1)
 {
  brick25_x=2100;
  brick25_y=2200;
 
 }
 if(brick26_hit==0)
 {
      if(leve1_brick_color[25]==0)
		{
			iShowBMP(brick26_x,brick26_y,"BRICK-12.bmp");
			leve1_brick_color[25]=1;
		}
		else if(leve1_brick_color[25]==1)
		{
			iShowBMP(brick26_x,brick26_y,"BRICK-3.bmp");
			leve1_brick_color[25]=0;
		}
 
 }
 else if(brick26_hit==1)
 {
  brick26_x=2100;
  brick26_y=2200;

 }
 if(brick27_hit==0)
 { 
		if(leve1_brick_color[26]==0)
		{
			iShowBMP(brick27_x,brick27_y,"BRICK-12.bmp");
			leve1_brick_color[26]=1;
		}
		else if(leve1_brick_color[26]==1)
		{
			iShowBMP(brick27_x,brick27_y,"BRICK-3.bmp");
			leve1_brick_color[26]=0;
		}
 
 }
 else if(brick27_hit==1)
 {
  brick27_x=2100;
  brick27_y=2200;
 
 }
 if(brick28_hit==0)
 {
       if(leve1_brick_color[27]==0)
		{
			iShowBMP(brick28_x,brick28_y,"BRICK-12.bmp");
			leve1_brick_color[27]=1;
		}
		else if(leve1_brick_color[27]==1)
		{
			iShowBMP(brick28_x,brick28_y,"BRICK-3.bmp");
			leve1_brick_color[27]=0;
		}
 
 }
 else if(brick28_hit==1)
 {
  brick28_x=2100;
  brick28_y=2200;

 }
 if(brick29_hit==0)
 {
       if(leve1_brick_color[28]==0)
		{
			iShowBMP(brick29_x,brick29_y,"BRICK-12.bmp");
			leve1_brick_color[28]=1;
		}
		else if(leve1_brick_color[28]==1)
		{
			iShowBMP(brick29_x,brick29_y,"BRICK-3.bmp");
			leve1_brick_color[28]=0;
		}
 
 }
 else if(brick29_hit==1)
 {
  brick29_x=2100;
  brick29_y=2200;

 }
}

void Brickvanish_level2()
{

	if(brick30_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick30_x,brick30_y,"BRICK-2.bmp");
	
	}
	else if(brick30_hit==1)
	{
		
		brick30_x=2200;
		brick30_y=2200;
	
	}

	if(brick31_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick31_x,brick31_y,"BRICK-2.bmp");
	
	}
	else if(brick31_hit==1)
	{
		
		brick31_x=2200;
		brick31_y=2200;
	
	}
	if(brick32_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick32_x,brick32_y,"BRICK-6.bmp");
	
	}
	else if(brick32_hit==1)
	{
		
		brick32_x=2200;
		brick32_y=2200;
	
	}
	if(brick33_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick33_x,brick33_y,"BRICK-2.bmp");
	
	}
	else if(brick33_hit==1)
	{
		
		brick33_x=2220;
		brick33_y=2220;
		
	
	}
	if(brick34_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick34_x,brick34_y,"BRICK-2.bmp");
	
	}
	else if(brick34_hit==1)
	{
		brick34_x=2222;
		brick34_y=2222;
	
	}
	if(brick35_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick35_x,brick35_y,"BRICK-6.bmp");
	
	}
	else if(brick35_hit==1)
	{
		brick35_x=2222;
		brick35_y=3333;
	}
	if(brick36_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick36_x,brick36_y,"BRICK-4.bmp");
	
	}
	else if(brick36_hit==1)
	{
		brick36_x=2200;
		brick36_y=2200;
	
	}
	if(brick37_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick37_x,brick37_y,"BRICK-6.bmp");
	
	}
	else if(brick37_hit==1)
	{
		brick37_x=2100;
		brick37_y=2100;
	
	}
	if(brick38_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick38_x,brick38_y,"BRICK-2.bmp");
	
	}
	else if(brick38_hit==1)
	{
		brick38_x=2300;
		brick38_y=2300;
	
	}
	if(brick39_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick39_x,brick39_y,"BRICK-2.bmp");
	
	}
	else if(brick39_hit==1)
	{
		brick39_x=2300;
		brick39_y=2300;
	
	}
	if(brick40_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick40_x,brick40_y,"BRICK-6.bmp");
	
	}
	else if(brick40_hit==1)
	{
		brick40_x=3300;
		brick40_y=3660;
	
	}
	if(brick41_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick41_x,brick41_y,"BRICK-2.bmp");
	
	}
	else if(brick41_hit==1)
	{
		brick41_x=2300;
		brick41_y=2400;
	
	}
	if(brick42_hit==0)
	{
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
		iShowBMP(brick42_x,brick42_y,"BRICK-2.bmp");
	
	}
	else if(brick42_hit==1)
	{
		brick42_x=2100;
		brick42_y=2200;
	
	}
	if(brick43_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick43_x,brick43_y,"BRICK-2.bmp");
 
 }
 else if(brick43_hit==1)
 {
  brick43_x=2100;
  brick43_y=2200;
 
 }
  if(brick44_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick44_x,brick44_y,"BRICK-2.bmp");
 
 }
 else if(brick44_hit==1)
 {
  brick44_x=2100;
  brick44_y=2200;
 
 }
  if(brick45_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick45_x,brick45_y,"BRICK-6.bmp");
 
 }
 else if(brick45_hit==1)
 {
  brick45_x=2100;
  brick45_y=2200;
 
 }
  if(brick46_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick46_x,brick46_y,"BRICK-2.bmp");
 
 }
 else if(brick46_hit==1)
 {
  brick46_x=2100;
  brick46_y=2200;
 
 }
  if(brick47_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick47_x,brick47_y,"BRICK-2.bmp");
 
 }
 else if(brick47_hit==1)
 {
  brick47_x=2100;
  brick47_y=2200;
 
 }
  if(brick48_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick48_x,brick48_y,"BRICK-6.bmp");
 
 }
 else if(brick48_hit==1)
 {
  brick48_x=2100;
  brick48_y=2200;
 
 }
   if(brick49_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick49_x,brick49_y,"BRICK-4.bmp");
 
 }
 else if(brick49_hit==1)
 {
  brick49_x=2100;
  brick49_y=2200;
 
 }
  if(brick50_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick50_x,brick50_y,"BRICK-6.bmp");
 
 }
 else if(brick50_hit==1)
 {
  brick50_x=2100;
  brick50_y=2200;
 
 }
   if(brick51_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick51_x,brick51_y,"BRICK-2.bmp");
 
 }
 else if(brick51_hit==1)
 {
  brick51_x=2100;
  brick51_y=2200;
 
 }
 if(brick52_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick52_x,brick52_y,"BRICK-2.bmp");
 
 }
 else if(brick52_hit==1)
 {
  brick52_x=2100;
  brick52_y=2200;
 
 }
   if(brick53_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick53_x,brick53_y,"BRICK-6.bmp");
 
 }
 else if(brick53_hit==1)
 {
  brick53_x=2100;
  brick53_y=2200;
 
 }
 if(brick54_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick54_x,brick54_y,"BRICK-2.bmp");
 
 }
 else if(brick54_hit==1)
 {
  brick54_x=2100;
  brick54_y=2200;
 
 }
 if(brick55_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick55_x,brick55_y,"BRICK-2.bmp");
 
 }
 else if(brick55_hit==1)
 {
  brick55_x=2100;
  brick55_y=2200;
 
 }
 if(brick56_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick56_x,brick56_y,"BRICK-2.bmp");
 
 }
 else if(brick56_hit==1)
 {
  brick56_x=2100;
  brick56_y=2200;
 
 }
 if(brick57_hit==0)
 {
        //iFilledRectangle(brick1_x,brick1_y,BRICK_LEN,BRICK_H);
  iShowBMP(brick57_x,brick57_y,"BRICK-2.bmp");
 
 }
 else if(brick57_hit==1)
 {
  brick57_x=2100;
  brick57_y=2200;
 
 }
 if(brick58_hit==0)
 {
  iShowBMP(brick58_x,brick58_y,"BRICK-6.bmp");
 
 }
 else if(brick58_hit==1)
 {
  brick58_x=2100;
  brick58_y=2200;
 
 }

 if(brick59_hit==0)
 {
  iShowBMP(brick59_x,brick59_y,"BRICK-2.bmp");
 
 }
 else if(brick59_hit==1)
 {
  brick59_x=2100;
  brick59_y=2200;
 
 }
 if(brick60_hit==0)
 {
  iShowBMP(brick60_x,brick60_y,"BRICK-2.bmp");
 
 }
 else if(brick60_hit==1)
 {
  brick60_x=2100;
  brick60_y=2200;
 
 }

 if(brick61_hit==0)
 {
  iShowBMP(brick61_x,brick61_y,"BRICK-6.bmp");
 
 }
 else if(brick61_hit==1)
 {
  brick61_x=2100;
  brick61_y=2200;
 
 }
 if(brick62_hit==0)
 {
  iShowBMP(brick62_x,brick62_y,"BRICK-4.bmp");
 
 }
 else if(brick62_hit==1)
 {
  brick62_x=2100;
  brick62_y=2200;
 
 }
 if(brick63_hit==0)
 {
  iShowBMP(brick63_x,brick63_y,"BRICK-6.bmp");
 
 }
 else if(brick63_hit==1)
 {
  brick63_x=2100;
  brick63_y=2200;
 
 }
 if(brick64_hit==0)
 {
  iShowBMP(brick64_x,brick64_y,"BRICK-2.bmp");
 
 }
 else if(brick64_hit==1)
 {
  brick64_x=2100;
  brick64_y=2200;
 
 }
 if(brick65_hit==0)
 {
  iShowBMP(brick65_x,brick65_y,"BRICK-2.bmp");
 
 }
 else if(brick65_hit==1)
 {
  brick65_x=2100;
  brick65_y=2200;
 
 }
 if(brick66_hit==0)
 {
  iShowBMP(brick66_x,brick66_y,"BRICK-6.bmp");
 
 }
 else if(brick66_hit==1)
 {
  brick66_x=2100;
  brick66_y=2200;
 
 }
 if(brick67_hit==0)
 {
  iShowBMP(brick67_x,brick67_y,"BRICK-2.bmp");
 
 }
 else if(brick67_hit==1)
 {
  brick67_x=2100;
  brick67_y=2200;
 
 }
 if(brick68_hit==0)
 {
  iShowBMP(brick68_x,brick68_y,"BRICK-2.bmp");
 
 }
 else if(brick68_hit==1)
 {
  brick68_x=2100;
  brick68_y=2200;
 
 }
}

void playgame_1st_level()
{
	
	iShowBMP(0,0,"HOME1.bmp");
    iSetColor(102,255,102);
	iFilledRectangle(paddle_x,paddle_y,PADDLE_LEN,PADDLE_H);

	iSetColor(128,0,128);
	Brickvanish();
	iSetColor(0,0,250);
	//iText(15,630,"SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMPWOBGWP(25,630,"coin.bmp",000000); //coin

	iText(100,630,score,GLUT_BITMAP_TIMES_ROMAN_24);
	
	//iText(1024,630,"LIFE",GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMPWOBGWP(1055,622,"SaveLife.bmp",000000);//heart
	iShowBMPWOBGWP(900,622,"star.bmp",000000); //star bmp
	iShowBMPWOBGWP(800,622,"cherry.bmp",000000); //cherry
	iShowBMPWOBGWP(700,622,"apple.bmp",000000); //apple
	iShowBMPWOBGWP(600,622,"watermillon.bmp",000000); //watermillon


	iSetColor(237,28,36);
	iText(1100,630,life,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(950,630,star,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(850,630,cherry,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(750,630,apple,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(650,630,watermillon,GLUT_BITMAP_TIMES_ROMAN_24);
	
	iSetColor(170,170,170);
	if(mouse_clk==0)
	{
		iFilledCircle(paddle_x+(PADDLE_LEN/2),paddle_y+PADDLE_H+BALL_RAD,BALL_RAD);
		
	}
	
	else if(mouse_clk==1)
	{
	iFilledCircle(ball_x,ball_y,BALL_RAD);

	}
	if(guli==1 && mouse_clk1==0)
	{
		iSetColor(255,0,0);
		iFilledRectangle(paddle_x,paddle_y+PADDLE_H,5,10);
		iFilledRectangle(paddle_x+PADDLE_LEN-5,paddle_y+PADDLE_H,5,10);
		
	}
	else if(guli ==1 && mouse_clk1==5)
	{
	    iSetColor(255,0,0);
		iFilledRectangle(rectangle1_x,rectangle1_y,5,10);
		iFilledRectangle(rectangle2_x,rectangle2_y,5,10);

	}
}


void playgame_2nd_level()
{
	
	iShowBMP(0,0,"HOME1.bmp");
    iSetColor(102,255,102);
	iFilledRectangle(paddle_x,paddle_y,PADDLE_LEN,PADDLE_H);

	iSetColor(128,0,128);
	Brickvanish_level2();
	iSetColor(0,0,250);
	//iText(15,630,"SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMPWOBGWP(25,630,"coin.bmp",000000); //coin

	iText(100,630,score,GLUT_BITMAP_TIMES_ROMAN_24);
	
	//iText(1024,630,"LIFE",GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMPWOBGWP(1055,622,"SaveLife.bmp",000000);//heart
	iShowBMPWOBGWP(900,622,"star.bmp",000000); //star bmp
	iShowBMPWOBGWP(800,622,"cherry.bmp",000000); //cherry
	iShowBMPWOBGWP(700,622,"apple.bmp",000000); //apple
	iShowBMPWOBGWP(600,622,"watermillon.bmp",000000); //watermillon

	iSetColor(237,28,36);
	iText(1100,630,life,GLUT_BITMAP_TIMES_ROMAN_24);
    iText(950,630,star,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(850,630,cherry,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(750,630,apple,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(650,630,watermillon,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(170,170,170);
	
	if(mouse_clk==0)
	{
		iFilledCircle(paddle_x+(PADDLE_LEN/2),paddle_y+PADDLE_H+BALL_RAD,BALL_RAD);
		
	}
	
	else if(mouse_clk==1)
	{
	iFilledCircle(ball_x,ball_y,BALL_RAD);

	}
}

void enter_name()
{
	iShowBMP(0,0,"GAMEOVER.bmp");
	iSetColor(131,5,94);
	iText(635,688-185,score);
	iText(810,688-410,star);
    iText(490,688-340,apple);
	iText(810,688-340,cherry);
	iText(490,688-410,watermillon);
			
	//iSetColor(150,150,150);
	 if(count>playerScores[4])       
	{
		iRectangle(378,688-501,444,38); //name box
	if(mouse_box_click==1) 
		{
			iSetColor(0,0,255);
	        iText(410,688-480,str1);
			
	}
	iText(360,240,"Congrats!!You have made a new highscore.Please enter your name");
	 }
}

void showHighScore()
{

  iShowBMP(0,0,"HIGHSCORE.bmp");
    
  int dyScore=688-215;
  iSetColor(54,54,54);
  for(int i=0;i<5;i++,dyScore-=50)
{
    iText(330,dyScore,playerNames[i],GLUT_BITMAP_TIMES_ROMAN_24);
    char t[80];
    sprintf_s(t,"%d",playerScores[i]);
    iText(700,dyScore,t,GLUT_BITMAP_TIMES_ROMAN_24);
}
}

void how_to_play()

{
	iShowBMP(0,0,"how_to_play.bmp");
	
}
void iDraw()
{

	iClear();
	if(page==0)
	{
	homepage();
	}
	if(page==1 && (life_count!=0 && (level_1_brick!=brick_count)))
	{
	playgame_1st_level();
	}
	//if(page==1 && (life_count==0 || (level_1_brick==brick_count)))
	if(page==1 && (brick_count==29))

	{
		page=20;
		mouse_clk=0;
	}
	if(page==20)
	{
		playgame_2nd_level();
		PADDLE_LEN=120;
	    PADDLE_1ST=PADDLE_LEN/3;
	    PADDLE_2ND=PADDLE_1ST+(PADDLE_LEN/3);
	    PADDLE_3RD=PADDLE_LEN;
	    guli=0;
	
	}
	if(life_count==0 || (page==20 && brick_count==68))
	{
		page=2;
	}
	if(page==2)
	{
		enter_name();
	}
	if(page==3)
	{
		showHighScore();
	}
	if(page==4)
	{
		how_to_play();
	}
	if(brick1_hit==1 && page==1 && life1_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(life1_x,life1_y,"SaveLife.bmp",000000);
    
	}
	if(brick13_hit==1 && page==1 && star1_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(star1_x,star1_y,"star.bmp",000000);
    
	}
	if(brick23_hit==1 && page==1 && star2_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(star2_x,star2_y,"star.bmp",000000);
    
	}
	if(brick29_hit==1 && page==1 && star3_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(star3_x,star3_y,"star.bmp",000000);
    
	}
	if(brick11_hit==1 && page==1 && dead1_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(dead1_x,dead1_y,"dead.bmp",000000);
    
	}
	if(brick42_hit==1 && page==20 && dead2_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(dead2_x,dead2_y,"dead.bmp",000000);
    
	}
	if(brick36_hit==1 && page==20 && star4_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(star4_x,star4_y,"star.bmp",000000);
    
	}
	if(brick49_hit==1 && page==20 && star5_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(star5_x,star5_y,"star.bmp",000000);
    
	}
	if(brick62_hit==1 && page==20 && star6_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(star6_x,star6_y,"star.bmp",000000);
    
	}
	if(brick7_hit==1 && page==1 && paddle_length_increased_y>=PADDLE_H-1)
	{
	iShowBMP(paddle_length_increased_x,paddle_length_increased_y,"PADDLE_SPREAD.bmp");
    
	}
	if(brick9_hit==1 && page==1 && paddle_length_decreased_y>=PADDLE_H-1)
	{
	iShowBMP(paddle_length_decreased_x,paddle_length_decreased_y,"PADDLE_REDUCED.bmp");
    
	}
	
	if(brick4_hit==1 && page==1 && apple1_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(apple1_x,apple1_y,"apple.bmp",000000);
    
	}
	if(brick44_hit==1 && page==20 && apple2_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(apple2_x,apple2_y,"apple.bmp",000000);
    
	}
	if(brick19_hit==1 && page==1 && apple3_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(apple3_x,apple3_y,"apple.bmp",000000);
    
	}
	if(brick18_hit==1 && page==1 && watermillon1_y>=PADDLE_H-1)
	{
	iShowBMP(watermillon1_x,watermillon1_y,"bullet.bmp");
    
	}
	if(brick68_hit==1 && page==20 && watermillon2_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(watermillon2_x,watermillon2_y,"watermillon.bmp",000000);
    
	}
	
	if(brick27_hit==1 && page==1 && cherry1_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(cherry1_x,cherry1_y,"cherry.bmp",000000);
    
	}
	if(brick45_hit==1 && page==20 && cherry2_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(cherry2_x,cherry2_y,"cherry.bmp",000000);
    
	}
	if(brick37_hit==1 && page==20 && cherry3_y>=PADDLE_H-1)
	{
	iShowBMPWOBGWP(cherry3_x,cherry3_y,"cherry.bmp",000000);
    
	}
}



/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//ball_x=mx;
	//ball_y=my;
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//PlaySound("shotgun",NULL,SND_ASYNC);
		
		if(page==1 || page==20)
		{
			mouse_clk=1;
		}
		if(page==0 && (mx>=START_GAME_X && mx <=START_GAME_LEN) && ((my>=START_GAME_Y && my<=START_GAME_H)))
		{
				page=1;
		}
	
        if(page==0 && (mx>=HOW_TO_PLAY_X && mx <=HOW_TO_PLAY_LEN) && ((my>=HOW_TO_PLAY_Y && my<=HOW_TO_PLAY_H)))
        {
               page=4;
        }

        if(page==4 && (mx>=HOW_TO_PLAY_EXIT_X && mx <=HOW_TO_PLAY_EXIT_LEN) && ((my>=HOW_TO_PLAY_EXIT_Y && my<=HOW_TO_PLAY_EXIT_H)))
        {
               page=0;
        }
        if(page==0 && (mx>=HIGH_SCORES_X && mx <=HIGH_SCORES_LEN) && ((my>=HIGH_SCORES_Y && my<=HIGH_SCORES_H)))
        {
               page=3;
        }
        if(page==3 && (mx>=953 && mx <=1146) && ((my>=688-677 && my<=688-613))) //highscore back
        {
               page=0;
        }
        if(page==0 && (mx>=EXIT_X && mx <=EXIT_LEN) && ((my>=EXIT_Y && my<=EXIT_H)))
        {
               exit(0);
        }
			if(page==2 && (mx>=378 && mx <=822) && ((my>=(688-501) && my<=(688-438))) && count>playerScores[4])
			mouse_box_click=1;
		
		if(page==2 && (mx>=1051 && mx <=1198) && ((my>=688-667 && my<=688-621))) //gameover back
        {
              exit(0);
        }
	
		//shooting
			if(page==1 && guli==1 &&(mx>=0 && mx <=1224) && ((my>=0&& my<=688))&& rectangle1_y==PADDLE_H && rectangle2_y==PADDLE_H)
			{
				mouse_clk1=5;
				rectangle1_x=paddle_x;
				rectangle2_x=paddle_x+PADDLE_LEN-5;
		    }
	}
	//if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	//{
		//printf("Right button clicked at %d and %d\n", mx, my);
		//place your codes here
	//}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{


	if(mx<=WINDOW_X-PADDLE_LEN) paddle_x = mx;
	if(my==0) paddle_y = my;
	if(mouse_clk==0)
	{
		ball_x=paddle_x+(PADDLE_LEN/2);
	    ball_y=paddle_y+BALL_RAD+PADDLE_H;
	}

	

	        /*Something to do with mx*/
	   /*Something to do with my*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/


void Sort () {
 strcpy (playerNames[4],str2) ;
 playerScores[4]=count;
 for(int i = 0 ;i < 5;i++ ) {
  for(int j = 0 ;j < 4;j++ ) {
   if (playerScores[j] < playerScores[j+1] ) {
    char temp[80] ;
    strcpy(temp , playerNames[j] ) ;
    strcpy(playerNames[j] , playerNames[j+1] ) ;
    strcpy(playerNames[j+1] , temp ) ;
   
    int t;
    t=playerScores[j] ;
    playerScores[j]=playerScores[j+1] ;
    playerScores[j+1]=t ;
   }
  }
 }
}

void copyFromFile () {
 FILE *namefile = fopen( "highscore.txt" , "r" ) ;
 for ( int i = 0 ; i <=4 ; i++ ) {
  fscanf ( namefile , "%s %d" , playerNames[i] , &playerScores[i]);
    }
 fclose ( namefile ) ;
}

void saveToFile () {
 FILE *namefile = fopen ( "highscore.txt","w" ) ;
 for ( int i = 0 ; i <= 4 ; i++ ) {
  fprintf (namefile , "%s %d\n" , playerNames[i] , playerScores[i] ) ;
 }
 fclose ( namefile ) ;
}

void iKeyboard(unsigned char key)
{
	if(count>playerScores[4])
		{
		int i;
	if(mouse_box_click==1 && page==2)
	{
	if(key=='\r')
	{
		strcpy(str2,str1);
	    Sort();
		saveToFile() ;
		for(i=0;i<l;i++)
		{
	    str1[i]=0;
		}
	
		l=0;
	
	}
	
	else

	{
		str1[l]=key;
		l++;
	}
	
          
		}
	
	}
	/*
	for(p=0;p<5;p++)
	{
		if(key=='p' || key=='P')
	{
	iPauseTimer(ball_t);
	}
	}
	for(r=0;r<5;r++)
	{
	if(key=='r' || key=='R')
	{
	iResumeTimer(ball_t);
	}
	}
	*/
	
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

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}

}

int Brickhit(int brick_y,int brick_x,int brick_len,int brick_h,int brick_hit)
{
	
	if(ball_x+BALL_RAD==brick_x && (ball_y+BALL_RAD>=brick_y && ball_y-BALL_RAD<=brick_h)) return brick_hit=1;
	else if(ball_y+BALL_RAD==brick_y && (ball_x+BALL_RAD>=brick_x && ball_x-BALL_RAD<=brick_len)) return brick_hit=1;
	else if(ball_y-BALL_RAD==brick_h && (ball_x+BALL_RAD>=brick_x && ball_x-BALL_RAD<=brick_len)&& brick_hit==0) return brick_hit=1;
	else if(ball_x-BALL_RAD==brick_len && (ball_y+BALL_RAD>=brick_y && ball_y-BALL_RAD<=brick_h) && brick_hit==0) return brick_hit=1;
	else return brick_hit=0;	
}

int Shoot(int brick_y,int brick_x,int brick_len,int brick_h,int brick_hit)
{
	
    if((rectangle1_y+10>=brick_y && rectangle1_y-10<=brick_h) && (rectangle1_x+5>=brick_x && rectangle1_x-5<=brick_len) || (rectangle2_y+10>=brick_y && rectangle2_y-10<=brick_h) && (rectangle2_x+5>=brick_x && rectangle2_x-5<=brick_len)) 
	    {   
			 brick_count++;
		     count=count+10;
		     sprintf_s(score,"%d",count);
		     return brick_hit=1;
	    }
		
     else return brick_hit=0;

}

void Brick(int brick_y,int brick_x,int brick_len,int brick_h,int brick_hit)
{
	
	if(ball_x+BALL_RAD==brick_x && (ball_y+BALL_RAD>=brick_y && ball_y-BALL_RAD<=brick_h))
	{
		brick_count++;
		count=count+10;
		sprintf_s(score,"%d",count);
		
		if(ball_x_out==0)
			ball_x_out=1;
		else if(ball_x_out==1)
			ball_x_out=0;
	
	}
	

	
	else if(ball_y+BALL_RAD==brick_y && (ball_x+BALL_RAD>=brick_x && ball_x-BALL_RAD<=brick_len)&& brick_hit==0)
	{
	brick_count++;
	count=count+10;
	sprintf_s(score,"%d",count);
		
	if(portion_len==-1 && mid!=1)
	{
	ball_x_out=1;
	}
	else if(portion_len==1 && mid!=1)
	{
	ball_x_out=0;
	}
	else ball_x_out=3;
	ball_y_out=1;
	}
	
	
	else if(ball_y-BALL_RAD==brick_h && (ball_x+BALL_RAD>=brick_x && ball_x-BALL_RAD<=brick_len)&& brick_hit==0)
	{
	brick_count++;
	count=count+10;
	sprintf_s(score,"%d",count);
			
	if(portion_len==-1 && mid!=1)
	{
	ball_x_out=1;
		
	}
	else if(portion_len==1 && mid!=1)
	{
	ball_x_out=0;
		
	}
	else 
		ball_x_out=3;
	
		
		ball_y_out=0;
	}
	
	else if(ball_x-BALL_RAD==brick_len && (ball_y+BALL_RAD>=brick_y && ball_y-BALL_RAD<=brick_h) && brick_hit==0)
	{
		brick_count++;
	    count=count+10;
	    sprintf_s(score,"%d",count);
	
		if(ball_x_out==0)
			ball_x_out=1;
		else if(ball_x_out==1)
			ball_x_out=0;

	}
	}


void func(void)
{

	if(ball_x_out==0 && mouse_clk==1)
	{
		if(ball_x>=WINDOW_X-BALL_RAD) 
			{
				ball_x_out=1;
			
		    }
		else 
			{

				ball_x+=speed_x;
				portion_len=1;
	           
	       }
	}
	else if (ball_x_out==1 && mouse_clk==1)
	{
		if(ball_x<=0+BALL_RAD)
			{
				ball_x_out=0;
			
		    }
		else {
			   ball_x-=speed_x;
				portion_len=-1; 
		    }
	}
	if(ball_y_out==0 && mouse_clk==1)
	{
		if(ball_y>=WINDOW_Y-BALL_RAD) 
			{
				ball_y_out=1;
	
		    }
		else
			{
				ball_y+=speed_y;
				portion_h=1;
		    }
	}
	else if(ball_y_out==1 && mouse_clk==1)
	{
		if(ball_y<=0+BALL_RAD) 
			{
				ball_y_out=0;
		    }
		else {
			ball_y-=speed_y;
			portion_h=-1;
		     }
	}
		 if((ball_y-BALL_RAD==PADDLE_H+paddle_y) && (ball_x>=paddle_x && ball_x<=paddle_x+PADDLE_1ST))
	    {
			ball_x_out=1;
			ball_y_out=0;
			mid=0;
		
		}
		else if((ball_y-BALL_RAD==PADDLE_H+paddle_y) && ((ball_x>=paddle_x+PADDLE_1ST) && (ball_x<=paddle_x+PADDLE_2ND)))
		{
			mid=1;
			ball_x_out=3;
			ball_y_out=0;
			}
		else if((ball_y-BALL_RAD==PADDLE_H+paddle_y) && ((ball_x>=paddle_x+PADDLE_2ND) && (ball_x<=paddle_x+PADDLE_3RD)))
		{
			ball_x_out=0;
			ball_y_out=0;
			mid=0;
		
		}
		
		
		else if(mouse_clk==1 && ball_y-BALL_RAD<PADDLE_H+paddle_y)
				{
					 mouse_clk=0;
					 portion_len=3;
					 portion_h=1;
					life_count--;
					sprintf_s(life,"%d",life_count);
					PADDLE_LEN=120;
			        PADDLE_1ST=PADDLE_LEN/3;
			        PADDLE_2ND=PADDLE_1ST+(PADDLE_LEN/3);
			        PADDLE_3RD=PADDLE_LEN;
					guli=0;
		
				
		        }
		if((life1_y>=paddle_y && life1_y<=PADDLE_H) && (life1_x>=paddle_x && life1_x<=paddle_x+PADDLE_LEN) && life1_flag==0)
	    {
			life_count++;
			life1_flag=1;
			sprintf_s(life,"%d",life_count);
				
		
		}
		if((star1_y>=paddle_y && star1_y<=PADDLE_H) && (star1_x>=paddle_x && star1_x<=paddle_x+PADDLE_LEN) && star1_flag==0)
	    {
			star_count++;
			star1_flag=1;
			sprintf_s(star,"%d",star_count);
			count+=20;
			sprintf_s(score,"%d",count);
			
		}
		if((star2_y>=paddle_y && star2_y<=PADDLE_H) && (star2_x>=paddle_x && star2_x<=paddle_x+PADDLE_LEN) && star2_flag==0)
	    {
			star_count++;
			star2_flag=1;
			sprintf_s(star,"%d",star_count);
			count+=20;
			sprintf_s(score,"%d",count);
				
		
		}
		if((star3_y>=paddle_y && star3_y<=PADDLE_H) && (star3_x>=paddle_x && star3_x<=paddle_x+PADDLE_LEN) && star3_flag==0)
	    {
			star_count++;
			star3_flag=1;
			sprintf_s(star,"%d",star_count);
			count+=20;
			sprintf_s(score,"%d",count);
				
		
		}
		if((star4_y>=paddle_y && star4_y<=PADDLE_H) && (star4_x>=paddle_x && star4_x<=paddle_x+PADDLE_LEN) && star4_flag==0 && page==20)
	    {
			star_count++;
			star4_flag=1;
			sprintf_s(star,"%d",star_count);
			count+=20;
			sprintf_s(score,"%d",count);
				
		
		}
		if((star5_y>=paddle_y && star5_y<=PADDLE_H) && (star5_x>=paddle_x && star5_x<=paddle_x+PADDLE_LEN) && star5_flag==0 && page==20)
	    {
			star_count++;
			star5_flag=1;
			sprintf_s(star,"%d",star_count);
			count+=20;
			sprintf_s(score,"%d",count);
				
		
		}
		if((star6_y>=paddle_y && star6_y<=PADDLE_H) && (star6_x>=paddle_x && star6_x<=paddle_x+PADDLE_LEN) && star6_flag==0 && page==20)
	    {
			star_count++;
			star6_flag=1;
			sprintf_s(star,"%d",star_count);
			count+=20;
			sprintf_s(score,"%d",count);
				
		
		}
		if((paddle_length_increased_y>=paddle_y && paddle_length_increased_y<=PADDLE_H) && (paddle_length_increased_x>=paddle_x && paddle_length_increased_x<=paddle_x+PADDLE_LEN) && paddle_length_increased_flag==0)
	    {
			
			paddle_length_increased_flag=1;
			PADDLE_LEN=180;
			PADDLE_1ST=PADDLE_LEN/3;
			PADDLE_2ND=PADDLE_1ST+(PADDLE_LEN/3);
			PADDLE_3RD=PADDLE_LEN;
		
		}
		if((paddle_length_decreased_y>=paddle_y && paddle_length_decreased_y<=PADDLE_H) && (paddle_length_decreased_x>=paddle_x && paddle_length_decreased_x<=paddle_x+PADDLE_LEN) && paddle_length_decreased_flag==0)
	    {
			
			paddle_length_decreased_flag=1;
			PADDLE_LEN=90;
			PADDLE_1ST=PADDLE_LEN/3;
			PADDLE_2ND=PADDLE_1ST+(PADDLE_LEN/3);
			PADDLE_3RD=PADDLE_LEN;
		
		}
		
		if((dead1_y>=paddle_y && dead1_y<=PADDLE_H) && (dead1_x>=paddle_x && dead1_x<=paddle_x+PADDLE_LEN))
	    {
			dead1_count=1;
			page=2;
		}

		if((dead2_y>=paddle_y && dead2_y<=PADDLE_H) && (dead2_x>=paddle_x && dead2_x<=paddle_x+PADDLE_LEN) && page==20)
	    {
			dead2_count=1;
			page=2;
		}

		if((apple1_y>=paddle_y && apple1_y<=PADDLE_H) && (apple1_x>=paddle_x && apple1_x<=paddle_x+PADDLE_LEN) && apple1_flag==0 )
	    {
			apple_count++;
			apple1_flag=1;
			sprintf_s(apple,"%d",apple_count);
				count+=30;
			sprintf_s(score,"%d",count);
			
		
		}
		if((apple2_y>=paddle_y && apple2_y<=PADDLE_H) && (apple2_x>=paddle_x && apple2_x<=paddle_x+PADDLE_LEN) && apple2_flag==0 && page==20)
	    {
			apple_count++;
			apple2_flag=1;
			sprintf_s(apple,"%d",apple_count);
				count+=30;
			sprintf_s(score,"%d",count);
				
		
		}
		if((apple3_y>=paddle_y && apple3_y<=PADDLE_H) && (apple3_x>=paddle_x && apple3_x<=paddle_x+PADDLE_LEN) && apple3_flag==0)
	    {
			apple_count++;
			apple3_flag=1;
			sprintf_s(apple,"%d",apple_count);
				count+=30;
			sprintf_s(score,"%d",count);
				
		
		}
		if((watermillon1_y>=paddle_y && watermillon1_y<=PADDLE_H) && (watermillon1_x>=paddle_x && watermillon1_x<=paddle_x+PADDLE_LEN) && watermillon1_flag==0) //for shooting
	    {
		guli=1;
		
		}
		if(page==1 && guli==1 && mouse_clk1==5)
		{
			if(rectangle1_y<688)
			rectangle1_y++;
			else
				{
					rectangle1_y=PADDLE_H;
					mouse_clk1=0;
			    }
			if(rectangle2_y<688)
			rectangle2_y++;
			else
				{
					rectangle2_y=PADDLE_H;
					mouse_clk1=0;
			}
			
			
		}


		if((watermillon2_y>=paddle_y && watermillon2_y<=PADDLE_H) && (watermillon2_x>=paddle_x && watermillon2_x<=paddle_x+PADDLE_LEN) && watermillon2_flag==0 && page==20)
	    {
			watermillon_count++;
			watermillon2_flag=1;
			sprintf_s(watermillon,"%d",watermillon_count);
				count+=30;
			sprintf_s(score,"%d",count);
				
		
		}
		
		if((cherry1_y>=paddle_y && cherry1_y<=PADDLE_H) && (cherry1_x>=paddle_x && cherry1_x<=paddle_x+PADDLE_LEN) && cherry1_flag==0)
	    {
			cherry_count++;
			cherry1_flag=1;
			sprintf_s(cherry,"%d",cherry_count);
				count+=40;
			sprintf_s(score,"%d",count);
			
		}
		if((cherry2_y>=paddle_y && cherry2_y<=PADDLE_H) && (cherry2_x>=paddle_x && cherry2_x<=paddle_x+PADDLE_LEN) && cherry2_flag==0 && page==20)
	    {
			cherry_count++;
			cherry2_flag=1;
			sprintf_s(cherry,"%d",cherry_count);
				count+=40;
			sprintf_s(score,"%d",count);
			
		}
		if((cherry3_y>=paddle_y && cherry3_y<=PADDLE_H) && (cherry3_x>=paddle_x && cherry3_x<=paddle_x+PADDLE_LEN) && cherry3_flag==0 && page==20)
	    {
			cherry_count++;
			cherry3_flag=1;
			sprintf_s(cherry,"%d",cherry_count);
				count+=30;
			sprintf_s(score,"%d",count);
			
		}


		if(page==1)
		{
			
		Brick(brick1_y,brick1_x,brick1_len,brick1_h,brick1_hit);  //for determining the direction of ball after hitting the brick
		Brick(brick2_y,brick2_x,brick2_len,brick2_h,brick2_hit);
		Brick(brick3_y,brick3_x,brick3_len,brick3_h,brick3_hit);
		Brick(brick4_y,brick4_x, brick4_len,brick4_h,brick4_hit);
		Brick(brick5_y,brick5_x,brick5_len,brick5_h,brick5_hit);
		Brick(brick6_y,brick6_x,brick6_len,brick6_h,brick6_hit);
		Brick(brick7_y,brick7_x,brick7_len,brick7_h,brick7_hit);
		Brick(brick8_y,brick8_x,brick8_len,brick8_h,brick8_hit);
		Brick(brick9_y,brick9_x,brick9_len,brick9_h,brick9_hit);
		Brick(brick10_y,brick10_x,brick10_len,brick10_h,brick10_hit);
		Brick(brick11_y,brick11_x,brick11_len,brick11_h,brick11_hit);
		Brick(brick12_y,brick12_x,brick12_len,brick12_h,brick12_hit);
		Brick(brick13_y,brick13_x,brick13_len,brick13_h,brick13_hit);
		Brick(brick14_y, brick14_x,brick14_len,brick14_h,brick14_hit);
		Brick(brick15_y, brick15_x,brick15_len,brick15_h,brick15_hit);
		Brick(brick16_y,brick16_x,brick16_len,brick16_h,brick16_hit);
		Brick(brick17_y, brick17_x, brick17_len,brick17_h,brick17_hit);
		Brick(brick18_y,brick18_x,brick18_len,brick18_h,brick18_hit);
		Brick(brick19_y,brick19_x,brick19_len,brick19_h,brick19_hit);
		Brick(brick20_y,brick20_x,brick20_len,brick20_h,brick20_hit);
		Brick(brick21_y,brick21_x,brick21_len,brick21_h,brick21_hit);
		Brick(brick22_y,brick22_x,brick22_len,brick22_h,brick22_hit);
		Brick(brick23_y,brick23_x,brick23_len, brick23_h,brick23_hit);
		Brick(brick24_y,brick24_x,brick24_len,brick24_h,brick24_hit);
		Brick(brick25_y,brick25_x,brick25_len,brick25_h,brick25_hit);
		Brick(brick26_y,brick26_x,brick26_len,brick26_h,brick26_hit);
		Brick(brick27_y,brick27_x,brick27_len, brick27_h,brick27_hit);
		Brick(brick28_y,brick28_x,brick28_len,brick28_h,brick28_hit);
		Brick(brick29_y,brick29_x,brick29_len,brick29_h,brick29_hit);
		 
       
		if(brick1_hit==0)   brick1_hit=Brickhit(brick1_y,brick1_x,brick1_len,brick1_h,brick1_hit);
		if(brick1_hit==0 && guli==1) brick1_hit=Shoot(brick1_y,brick1_x,brick1_len,brick1_h,brick1_hit);
		
		if(brick2_hit==0)   brick2_hit=Brickhit(brick2_y,brick2_x,brick2_len,brick2_h,brick2_hit);
		if(brick2_hit==0 && guli==1) brick2_hit=Shoot(brick2_y,brick2_x,brick2_len,brick2_h,brick2_hit);
		
		if(brick3_hit==0)   brick3_hit=Brickhit(brick3_y,brick3_x,brick3_len,brick3_h,brick3_hit);
		if(brick3_hit==0 && guli==1) brick3_hit=Shoot(brick3_y,brick3_x,brick3_len,brick3_h,brick3_hit);
		
		if(brick4_hit==0)   brick4_hit=Brickhit(brick4_y,brick4_x,brick4_len,brick4_h,brick4_hit);
		if(brick4_hit==0 && guli==1) brick4_hit=Shoot(brick4_y,brick4_x,brick4_len,brick4_h,brick4_hit);
		
		if(brick5_hit==0)   brick5_hit=Brickhit(brick5_y,brick5_x,brick5_len,brick5_h,brick5_hit);
		if(brick5_hit==0 && guli==1) brick5_hit=Shoot(brick5_y,brick5_x,brick5_len,brick5_h,brick5_hit);
		
		if(brick6_hit==0)   brick6_hit=Brickhit(brick6_y,brick6_x,brick6_len,brick6_h,brick6_hit);
		if(brick6_hit==0 && guli==1) brick6_hit=Shoot(brick6_y,brick6_x,brick6_len,brick6_h,brick6_hit);
		
		if(brick7_hit==0)   brick7_hit=Brickhit(brick7_y,brick7_x,brick7_len,brick7_h,brick7_hit);
		if(brick7_hit==0 && guli==1) brick7_hit=Shoot(brick7_y,brick7_x,brick7_len,brick7_h,brick7_hit);
		
		if(brick8_hit==0)   brick8_hit=Brickhit(brick8_y,brick8_x,brick8_len,brick8_h,brick8_hit);
		if(brick8_hit==0 && guli==1) brick8_hit=Shoot(brick8_y,brick8_x,brick8_len,brick8_h,brick8_hit);
		
		if(brick9_hit==0)   brick9_hit=Brickhit(brick9_y,brick9_x,brick9_len,brick9_h,brick9_hit);
		if(brick9_hit==0 && guli==1) brick9_hit=Shoot(brick9_y,brick9_x,brick9_len,brick9_h,brick9_hit);
		
		if(brick10_hit==0)  brick10_hit=Brickhit(brick10_y,brick10_x,brick10_len,brick10_h,brick10_hit);
		if(brick10_hit==0 && guli==1) brick10_hit=Shoot(brick10_y,brick10_x,brick10_len,brick10_h,brick10_hit);
		
		if(brick11_hit==0)  brick11_hit=Brickhit(brick11_y,brick11_x,brick11_len,brick11_h,brick11_hit);
		if(brick11_hit==0 && guli==1) brick11_hit=Shoot(brick11_y,brick11_x,brick11_len,brick11_h,brick11_hit);
		
		if(brick12_hit==0)  brick12_hit=Brickhit(brick12_y,brick12_x,brick12_len,brick12_h,brick12_hit);
		if(brick12_hit==0 && guli==1) brick12_hit=Shoot(brick12_y,brick12_x,brick12_len,brick12_h,brick12_hit);
		
		if(brick13_hit==0)  brick13_hit=Brickhit(brick13_y,brick13_x,brick13_len,brick13_h,brick13_hit);
		if(brick13_hit==0 && guli==1) brick13_hit=Shoot(brick13_y,brick13_x,brick13_len,brick13_h,brick13_hit);
		
		if(brick14_hit==0)  brick14_hit=Brickhit(brick14_y,brick14_x,brick14_len,brick14_h,brick14_hit);
		if(brick14_hit==0 && guli==1) brick14_hit=Shoot(brick14_y,brick14_x,brick14_len,brick14_h,brick14_hit);
		
		if(brick15_hit==0)  brick15_hit=Brickhit(brick15_y,brick15_x,brick15_len,brick15_h,brick15_hit);
		if(brick15_hit==0 && guli==1) brick15_hit=Shoot(brick15_y,brick15_x,brick15_len,brick15_h,brick15_hit);
		
		if(brick16_hit==0)  brick16_hit=Brickhit(brick16_y,brick16_x,brick16_len,brick16_h,brick16_hit);
		if(brick16_hit==0 && guli==1) brick16_hit=Shoot(brick16_y,brick16_x,brick16_len,brick16_h,brick16_hit);
		
		if(brick17_hit==0)  brick17_hit=Brickhit(brick17_y,brick17_x,brick17_len,brick17_h,brick17_hit);
		if(brick17_hit==0 && guli==1) brick17_hit=Shoot(brick17_y,brick17_x,brick17_len,brick17_h,brick17_hit);
		
		if(brick18_hit==0)  brick18_hit=Brickhit(brick18_y,brick18_x,brick18_len,brick18_h,brick18_hit);
		if(brick18_hit==0 && guli==1) brick18_hit=Shoot(brick18_y,brick18_x,brick18_len,brick18_h,brick18_hit);
		
		if(brick19_hit==0)  brick19_hit=Brickhit(brick19_y,brick19_x,brick19_len,brick19_h,brick19_hit);
		if(brick19_hit==0 && guli==1) brick19_hit=Shoot(brick19_y,brick19_x,brick19_len,brick19_h,brick19_hit);
		
		if(brick20_hit==0)  brick20_hit=Brickhit(brick20_y,brick20_x,brick20_len,brick20_h,brick20_hit);
		if(brick20_hit==0 && guli==1) brick20_hit=Shoot(brick20_y,brick20_x,brick20_len,brick20_h,brick20_hit);
		
		if(brick21_hit==0)  brick21_hit=Brickhit(brick21_y,brick21_x,brick21_len,brick21_h,brick21_hit);
		if(brick21_hit==0 && guli==1) brick21_hit=Shoot(brick21_y,brick21_x,brick21_len,brick21_h,brick21_hit);
		
		if(brick22_hit==0)  brick22_hit=Brickhit(brick22_y,brick22_x,brick22_len,brick22_h,brick22_hit);
		if(brick22_hit==0 && guli==1) brick22_hit=Shoot(brick22_y,brick22_x,brick22_len,brick22_h,brick22_hit);
		
		if(brick23_hit==0)  brick23_hit=Brickhit(brick23_y,brick23_x,brick23_len,brick23_h,brick23_hit);
		if(brick23_hit==0 && guli==1) brick23_hit=Shoot(brick23_y,brick23_x,brick23_len,brick23_h,brick23_hit);
		
		if(brick24_hit==0)  brick24_hit=Brickhit(brick24_y,brick24_x,brick24_len,brick24_h,brick24_hit);
		if(brick24_hit==0 && guli==1) brick24_hit=Shoot(brick24_y,brick24_x,brick24_len,brick24_h,brick24_hit);
		
		if(brick25_hit==0)  brick25_hit=Brickhit(brick25_y,brick25_x,brick25_len,brick25_h,brick25_hit);
		if(brick25_hit==0 && guli==1) brick25_hit=Shoot(brick25_y,brick25_x,brick25_len,brick25_h,brick25_hit);
		
		if(brick26_hit==0)  brick26_hit=Brickhit(brick26_y,brick26_x,brick26_len,brick26_h,brick26_hit);
		if(brick26_hit==0 && guli==1) brick26_hit=Shoot(brick26_y,brick26_x,brick26_len,brick26_h,brick26_hit);
		
		if(brick27_hit==0)  brick27_hit=Brickhit(brick27_y,brick27_x,brick27_len,brick27_h,brick27_hit);
		if(brick27_hit==0 && guli==1) brick27_hit=Shoot(brick27_y,brick27_x,brick27_len,brick27_h,brick27_hit);
		
		if(brick28_hit==0)  brick28_hit=Brickhit(brick28_y,brick28_x,brick28_len,brick28_h,brick28_hit);
		if(brick28_hit==0 && guli==1) brick28_hit=Shoot(brick28_y,brick28_x,brick28_len,brick28_h,brick28_hit);
		
		if(brick29_hit==0)  brick29_hit=Brickhit(brick29_y,brick29_x,brick29_len,brick29_h,brick29_hit);
		if(brick29_hit==0 && guli==1) brick29_hit=Shoot(brick29_y,brick29_x,brick29_len,brick29_h,brick29_hit);
		
		
		}
		if(page==20)
			{
		Brick(brick30_y,brick30_x,brick30_len,brick30_h,brick30_hit);
		Brick(brick31_y,brick31_x,brick31_len,brick31_h,brick31_hit);
		Brick(brick32_y,brick32_x,brick32_len,brick32_h,brick32_hit);
        Brick(brick33_y,brick33_x,brick33_len,brick33_h,brick33_hit);
		Brick(brick34_y,brick34_x, brick34_len,brick34_h,brick34_hit);
		Brick(brick35_y,brick35_x,brick35_len,brick35_h,brick35_hit);
		Brick(brick36_y,brick36_x,brick36_len,brick36_h,brick36_hit);
		Brick(brick37_y,brick37_x,brick37_len,brick37_h,brick37_hit);
		Brick(brick38_y,brick38_x,brick38_len,brick38_h,brick38_hit);
		Brick(brick39_y,brick39_x,brick39_len,brick39_h,brick39_hit);
		Brick(brick40_y,brick40_x,brick40_len,brick40_h,brick40_hit);
		Brick(brick41_y,brick41_x,brick41_len,brick41_h,brick41_hit);
		Brick(brick42_y,brick42_x,brick42_len,brick42_h,brick42_hit);
		Brick(brick43_y,brick43_x,brick43_len,brick43_h,brick43_hit);
		Brick(brick44_y, brick44_x,brick44_len,brick44_h,brick44_hit);
		Brick(brick45_y, brick45_x,brick45_len,brick45_h,brick45_hit);
		Brick(brick46_y,brick46_x,brick46_len,brick46_h,brick46_hit);
		Brick(brick47_y, brick47_x, brick47_len,brick47_h,brick47_hit);
		Brick(brick48_y,brick48_x,brick48_len,brick48_h,brick48_hit);
		Brick(brick49_y,brick49_x,brick49_len,brick49_h,brick49_hit);
		Brick(brick50_y,brick50_x,brick50_len,brick50_h,brick50_hit);
		Brick(brick51_y,brick51_x,brick51_len,brick51_h,brick51_hit);
		Brick(brick52_y,brick52_x,brick52_len,brick52_h,brick52_hit);
		Brick(brick53_y,brick53_x,brick53_len, brick53_h,brick53_hit);
		Brick(brick54_y,brick54_x,brick54_len,brick54_h,brick54_hit);
		Brick(brick55_y,brick55_x,brick55_len,brick55_h,brick55_hit);
		Brick(brick56_y,brick56_x,brick56_len,brick56_h,brick56_hit);
		Brick(brick57_y,brick57_x,brick57_len, brick57_h,brick57_hit);
		Brick(brick58_y,brick58_x,brick58_len,brick58_h,brick58_hit);
		Brick(brick59_y,brick59_x,brick59_len,brick59_h,brick59_hit);
        Brick(brick60_y,brick60_x,brick60_len,brick60_h,brick60_hit);
		Brick(brick61_y,brick61_x,brick61_len,brick61_h,brick61_hit);
		Brick(brick62_y,brick62_x,brick62_len,brick62_h,brick62_hit);
		Brick(brick63_y,brick63_x,brick63_len, brick63_h,brick63_hit);
		Brick(brick64_y,brick64_x,brick64_len,brick64_h,brick64_hit);
		Brick(brick65_y,brick65_x,brick65_len,brick65_h,brick65_hit);
		Brick(brick66_y,brick66_x,brick66_len,brick66_h,brick66_hit);
		Brick(brick67_y,brick67_x,brick67_len, brick67_h,brick67_hit);
		Brick(brick68_y,brick68_x,brick68_len,brick68_h,brick68_hit);
        if(brick30_hit==0)   brick30_hit=Brickhit(brick30_y,brick30_x,brick30_len,brick30_h,brick30_hit);
        if(brick31_hit==0)   brick31_hit=Brickhit(brick31_y,brick31_x,brick31_len,brick31_h,brick31_hit);
		if(brick32_hit==0)   brick32_hit=Brickhit(brick32_y,brick32_x,brick32_len,brick32_h,brick32_hit);
		if(brick33_hit==0)   brick33_hit=Brickhit(brick33_y,brick33_x,brick33_len,brick33_h,brick33_hit);
		if(brick34_hit==0)   brick34_hit=Brickhit(brick34_y,brick34_x,brick34_len,brick34_h,brick34_hit);
		if(brick35_hit==0)   brick35_hit=Brickhit(brick35_y,brick35_x,brick35_len,brick35_h,brick35_hit);
		if(brick36_hit==0)   brick36_hit=Brickhit(brick36_y,brick36_x,brick36_len,brick36_h,brick36_hit);
		if(brick37_hit==0)   brick37_hit=Brickhit(brick37_y,brick37_x,brick37_len,brick37_h,brick37_hit);
		if(brick38_hit==0)   brick38_hit=Brickhit(brick38_y,brick38_x,brick38_len,brick38_h,brick38_hit);
		if(brick39_hit==0)   brick39_hit=Brickhit(brick39_y,brick39_x,brick39_len,brick39_h,brick39_hit);
		if(brick40_hit==0)  brick40_hit=Brickhit(brick40_y,brick40_x,brick40_len,brick40_h,brick40_hit);
		if(brick41_hit==0)  brick41_hit=Brickhit(brick41_y,brick41_x,brick41_len,brick41_h,brick41_hit);
		if(brick42_hit==0)  brick42_hit=Brickhit(brick42_y,brick42_x,brick42_len,brick42_h,brick42_hit);
		if(brick43_hit==0)  brick43_hit=Brickhit(brick43_y,brick43_x,brick43_len,brick43_h,brick43_hit);
		if(brick44_hit==0)  brick44_hit=Brickhit(brick44_y,brick44_x,brick44_len,brick44_h,brick44_hit);
		if(brick45_hit==0)  brick45_hit=Brickhit(brick45_y,brick45_x,brick45_len,brick45_h,brick45_hit);
		if(brick46_hit==0)  brick46_hit=Brickhit(brick46_y,brick46_x,brick46_len,brick46_h,brick46_hit);
		if(brick47_hit==0)  brick47_hit=Brickhit(brick47_y,brick47_x,brick47_len,brick47_h,brick47_hit);
		if(brick48_hit==0)  brick48_hit=Brickhit(brick48_y,brick48_x,brick48_len,brick48_h,brick48_hit);
		if(brick49_hit==0)  brick49_hit=Brickhit(brick49_y,brick49_x,brick49_len,brick49_h,brick49_hit);
		if(brick50_hit==0)  brick50_hit=Brickhit(brick50_y,brick50_x,brick50_len,brick50_h,brick50_hit);
		if(brick51_hit==0)  brick51_hit=Brickhit(brick51_y,brick51_x,brick51_len,brick51_h,brick51_hit);
		if(brick52_hit==0)  brick52_hit=Brickhit(brick52_y,brick52_x,brick52_len,brick52_h,brick52_hit);
		if(brick53_hit==0)  brick53_hit=Brickhit(brick53_y,brick53_x,brick53_len,brick53_h,brick53_hit);
		if(brick54_hit==0)  brick54_hit=Brickhit(brick54_y,brick54_x,brick54_len,brick54_h,brick54_hit);
		if(brick55_hit==0)  brick55_hit=Brickhit(brick55_y,brick55_x,brick55_len,brick55_h,brick55_hit);
		if(brick56_hit==0)  brick56_hit=Brickhit(brick56_y,brick56_x,brick56_len,brick56_h,brick56_hit);
		if(brick57_hit==0)  brick57_hit=Brickhit(brick57_y,brick57_x,brick57_len,brick57_h,brick57_hit);
		if(brick58_hit==0)  brick58_hit=Brickhit(brick58_y,brick58_x,brick58_len,brick58_h,brick58_hit);
		if(brick59_hit==0)  brick59_hit=Brickhit(brick59_y,brick59_x,brick59_len,brick59_h,brick59_hit);
		if(brick60_hit==0)  brick60_hit=Brickhit(brick60_y,brick60_x,brick60_len,brick60_h,brick60_hit);
		if(brick61_hit==0)  brick61_hit=Brickhit(brick61_y,brick61_x,brick61_len,brick61_h,brick61_hit);
		if(brick62_hit==0)  brick62_hit=Brickhit(brick62_y,brick62_x,brick62_len,brick62_h,brick62_hit);
		if(brick63_hit==0)  brick63_hit=Brickhit(brick63_y,brick63_x,brick63_len,brick63_h,brick63_hit);
		if(brick64_hit==0)  brick64_hit=Brickhit(brick64_y,brick64_x,brick64_len,brick64_h,brick64_hit);
		if(brick65_hit==0)  brick65_hit=Brickhit(brick65_y,brick65_x,brick65_len,brick65_h,brick65_hit);
		if(brick66_hit==0)  brick66_hit=Brickhit(brick66_y,brick66_x,brick66_len,brick66_h,brick66_hit);
		if(brick67_hit==0)  brick67_hit=Brickhit(brick67_y,brick67_x,brick67_len,brick67_h,brick67_hit);
		if(brick68_hit==0)  brick68_hit=Brickhit(brick68_y,brick68_x,brick68_len,brick68_h,brick68_hit);
		
		    }
}

void life_func()
{
	if(brick1_hit==1)
	{
		life1_y-=1;
	}
	if(brick13_hit==1)
	{
	  star1_y--;
	}
	if(brick23_hit==1)
	{
	  star2_y--;
	}
	if(brick29_hit==1)
	{
	  star3_y--;
	}
	if(brick36_hit==1)
	{
	  star4_y--;
	}
	if(brick49_hit==1)
	{
	  star5_y--;
	}
	if(brick62_hit==1)
	{
	  star6_y--;
	}
	
	if(brick11_hit==1)
	{
	  dead1_y--;
	}
	if(brick42_hit==1)
	{
	  dead2_y--;
	}
	if(brick4_hit==1)
	{
	  apple1_y--;
	}
	if(brick44_hit==1)
	{
	  apple2_y--;
	}
	if(brick19_hit==1)
	{
	  apple3_y--;
	}
	if(brick18_hit==1)
	{
	  watermillon1_y--;
	}
	if(brick68_hit==1)
	{
	  watermillon2_y--;
	}
	if(brick27_hit==1)
	{
	  cherry1_y--;
	}
	if(brick45_hit==1)
	{
	  cherry2_y--;
	}
	if(brick37_hit==1)
	{
	  cherry3_y--;
	}
	if(brick7_hit==1)
	{
	 paddle_length_increased_y--;
	}
	if(brick9_hit==1)
	{
	 paddle_length_decreased_y--;
	}
}
void color_change()
{
	int i;
	for(i=0;i<29;i++)
	{
		if(leve1_brick_color[i]==1)
		{
			leve1_brick_color[i]=0;
        }
	    else if(leve1_brick_color[i]==0)
		{
			leve1_brick_color[i]=1;
        }
	}
	
	
}


int main()
{

	//PlaySound("shotgun" , NULL , SND_LOOP | SND_ASYNC);
     int timer_loop;
	 int brick_color_change_t,lostlife;
	 score[0]='0';
	 life[0]='1';
	 star[0]='0';
	 apple[0]='0';
	 watermillon[0]='0';
	 cherry[0]='0';
	 copyFromFile();

	for(timer_loop=0;timer_loop<=ball_speed;timer_loop++)
		ball_t = iSetTimer(1, func); 
	
	brick_color_change_t=iSetTimer(10,color_change);

	
	for(timer_loop=0;timer_loop<=3;timer_loop++)
	life_t=iSetTimer(1,life_func);
	iInitialize(WINDOW_X,WINDOW_Y, "DX_BALL");


	return 0;
}