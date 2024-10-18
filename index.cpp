#include<graphics.h>
#include<mmsystem.h>
#include<windows.h>

int main()
{
	int height=GetSystemMetrics(SM_CYSCREEN);
	int width=GetSystemMetrics(SM_CXSCREEN);
	initwindow(width,height,"Animation",-3);
	int j=0;
	int page=0;
	int n=0;
	int bullet_move=0;
	int p2=700;
	int p2_c=14;
	int p2d=70;
	bool shooting = false;

	while(1)
	{	
	    setactivepage(page);
	    setvisualpage(1-page);
	    cleardevice();
	    line(0,600,width,600);
	    
	    // gun man motion start
	    
		int i=0;
			if(GetAsyncKeyState(VK_RIGHT)){
         	 {
			  
	    	circle(100+j,300,60-i);
	       // body
	    	line(99+i+j,355,99+i+j,475);
	        //right hand
	        line(100+j,370+i,150+j,420+i);
	        line(150+j,420+i,180+j,355+i);
	         //left hand
	        line(100+j,370+i,50+j,420+i);
	       line(50+j,420+i,20+j,350+i);
	        //legs
	        if(n%2==0)
	        {
			
	        line(99+j,475-i,99+j,600-i);
	        line(102+j,475-i,102+j,600-i);
	        delay(100);
	        }
	        else
	        {
	         line(99+j,475-i,50+j,600-i);
	        line(99+j,475-i,150+j,600-i);
	        delay(100);
			}
}
	
    	// Gun body 
  	    for(int i=0;i<10;i++)
    	{
		
		line(180+j,350+i,250+j,350+i);
		line(180+i+j,350,180+i+j,380);
	    }

		// second person
				
	    // 	second person
	    setcolor(p2_c);
					 for(int i=0;i<=2;i++)
            	   {
					circle(100+j+p2,300,60-i);
	             // body
		         line(99+i+j+p2,355,99+i+j+p2,475);
	             //right hand
	             line(100+j+p2,370+i,150+j+p2,420+i);
	             line(150+j+p2,420+i,180+j+p2,355+i);
	             //left hand
	             line(100+j+p2,370+i,50+j+p2,420+i);
	             line(50+j+p2,420+i,20+j+p2,350+i);
	             //legs
	             

	             	 if (GetAsyncKeyState(VK_RETURN)) {
	            
  
	              }
	             else
	             {
				        line(99+j+p2,475-i,99+j+p2,600-i);
	                  line(102+j+p2,475-i,102+j+p2,600-i);
	          //   delay(100);
		        	}
	         }
	         setcolor(WHITE);
		
		
		
		j+=10;	
		}
		
		{  
		
			 for(int i=0;i<=2;i++)
            	   {
					circle(100+j,300,60-i);
	             // body
		         line(99+i+j,355,99+i+j,475);
	             //right hand
	             line(100+j,370+i,150+j,420+i);
	             line(150+j,420+i,180+j,355+i);
	             //left hand
	             line(100+j,370+i,50+j,420+i);
	             line(50+j,420+i,20+j,350+i);
	             //legs
	             line(99+j,475-i,50+j,600-i);
	             line(99+j,475-i,150+j,600-i);
	  	
                	}

             	// Gun body 
            	for(int i=0;i<10;i++)
             	{
		
		        line(180+j,350+i,250+j,350+i);
	        	line(180+i+j,350,180+i+j,380);
	        	
	            }
	            
	            // bullet
//	            if(bullet_move==0)
//	            {
//	            		PlaySound(TEXT("res/gunsound.wav"),NULL,SND_SYNC);
//				}
		
	            		for(int i=0;i<10;i++)
	        	{
			     line(250+j+bullet_move,350+i,270+j+bullet_move,350+i);
	        	}
	       
	        	
	        	// second person
	        	
	        				 for(int i=0;i<=2;i++)
            	   {
            	   	if((p2_c + 520 )> bullet_move){
					   
	            	setcolor(p2_c);
					circle(100+j+p2,300,60-i);
	             // body
		         line(99+i+j+p2,355,99+i+j+p2,475);
	             //right hand
	             line(100+j+p2,370+i,150+j+p2,420+i);
	             line(150+j+p2,420+i,180+j+p2,355+i);
	             //left hand
	             line(100+j+p2,370+i,50+j+p2,420+i);
	             line(50+j+p2,420+i,20+j+p2,350+i);
	             //legs
	             line(99+j+p2,475-i,50+j+p2,600-i);
	             line(99+j+p2,475-i,150+j+p2,600-i);
	        }
	        }
	        
	        	setcolor(WHITE);
		}
		// bullet motion end

		
		
		
		if(n>175)
		{

			}
									 for(int i=0;i<=2;i++)
            	   {
					circle(100+j,300,60-i);
	             // body
		         line(99+i+j,355,99+i+j,475);
	             //right hand
	             line(100+j,370+i,150+j,420+i);
	             line(150+j,420+i,180+j,355+i);
	             //left hand
	             line(100+j,370+i,50+j,420+i);
	             line(50+j,420+i,20+j,350+i);
	             //legs
	             line(99+j,475-i,50+j,600-i);
	             line(99+j,475-i,150+j,600-i);
	  	
                	}
	
             	// Gun body 
            	if (GetAsyncKeyState(VK_RETURN)) {
            shooting = true;
        }

        // Draw gun man
        circle(100 + j, 300, 60 - i);
        line(99 + i + j, 355, 99 + i + j, 475);
        // Right hand holding gun
        line(100 + j, 370 + i, 150 + j, 420 + i);
        line(150 + j, 420 + i, 180 + j, 355 + i);
        // Left hand
        line(100 + j, 370 + i, 50 + j, 420 + i);
        line(50 + j, 420 + i, 20 + j, 350 + i);
        // Legs
        if (n % 2 == 0) {
            line(99 + j, 475 - i, 99 + j, 600 - i);
            line(102 + j, 475 - i, 102 + j, 600 - i);
        } else {
            line(99 + j, 475 - i, 50 + j, 600 - i);
            line(99 + j, 475 - i, 150 + j, 600 - i);
        }

        // Gun body 
        for (int i = 0; i < 10; i++) {
            line(180 + j, 350 + i, 250 + j, 350 + i);
            line(180 + i + j, 350, 180 + i + j, 380);
        }

        // Shooting motion
        if (shooting) {
            // Bullet animation
          
            bullet_move += 3;
            
            if (bullet_move > width) {
                // Reset bullet movement when it goes off-screen
                bullet_move = 0;
                shooting = false;
            }
        }
        
			if((p2_c + 520 )< bullet_move){
		
	        //	second person
	        setcolor(p2_c);
	              					 for(int i=0;i<=2;i++)
            	   {
					circle(150+j+p2+355-p2d,545,60-i);
	             // body
		         line(150+j+p2+125-p2d,550+i,150+j+p2+300-p2d,545+i);
	             //right hand
	             line(150+j+p2+275-p2d,545+i,150+j+p2+225-p2d,570+i);
	             line(150+j+p2+225-p2d,570-i,150+j+p2+275-p2d,600-i);
	             //left hand
	             line(150+j+p2+275-p2d,545-i,150+j+p2+225-p2d,545-25-i);
	             line(150+j+p2+225-p2d,545-25-i,150+j+p2+275-p2d,545-50-i);
	             //legs
	             line(150+j+p2-p2d,600-i,150+j+p2+125-p2d,550-i);
	             line(150+j+p2-p2d,500-i,150+j+p2+125-p2d,550-i);
	              }
	              setcolor(RED);
	              settextstyle(1,HORIZ_DIR,4);
	              outtextxy(100,100,"Game Over");
	              setcolor(WHITE);
			}
	
		delay(5);
		page=1-page;
		
		n++;
	}
	getch();
	closegraph();
}
