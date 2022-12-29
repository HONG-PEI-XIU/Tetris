#include <windows.h>
#include <Mmsystem.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cv.h>			//Open CV涵式庫 
#include <highgui.h>	//Open CV涵式庫
	void nextt(void);
 	void Randomblock(void);
 	void coordinate(void);
 	void button(void);
 	void exchange(void);
 	void Pastsquares(void);
 	void eliminate(void);
	char directKey,star=0;     	
	int r=0,r2=0,timer=100;
	IplImage *Imagesite,*Imagesquare[8],*ImageMasksquare[8],*Imageloss,*ImageMaskloss;
	////////////////////////////////////////////////  
	IplImage *Imagenext2,*ImageMasknext2,*Imagenext3,*ImageMasknext3,*Imagechang2,*ImageMaskchang2;     
	int site_Xaxis_play2[9999],site_Yaxis_play2[9999],Xaxis_m_play2,Yaxis_m_play2,site_Xaxis1_play2,site_Xaxis2_play2,site_Xaxis3_play2,site_Yaxis1_play2,site_Yaxis2_play2,site_Yaxis3_play2;
    int x_play2[9999],xW_play2,zW_play2=1,nxt_play2[8],nxt1_play2[8],chang_play2=0,chang1_play2=0,chang3_play2[8];
    int H_play2[27][11]={0},T_play2[9999]={0},Hd_play2[27][11]={0},Hx_play2,Hy_play2;
    int v_play2=0,s_play2=0,p_play2=0,q_play2=0,o_play2=0,z_play2=1,xO_play2=0,zO_play2=1,a_play2=0,b_play2=0,c_play2=0,d_play2=0;
    int test_play2=0,test1_play2=0,test2_play2=0;
	/////////////////////////////////////////////// 
	IplImage *Imagenext,*ImageMasknext,*Imagenext1,*ImageMasknext1,*Imagechang,*ImageMaskchang,*Imagesite2;   
	int site_Xaxis[9999],site_Yaxis[999],site_Xaxis1,site_Xaxis2,site_Xaxis3,site_Yaxis1,site_Yaxis2,site_Yaxis3,a=0,b=0,c=0,d=0;
    int i,j,k,m,z=1,xO=0,zO=1,x[9999],xW,zW=1,nxt[8],nxt1[8],chang=0,chang1=0,chang3[8];
    int H[27][11]={0},Xaxis_m,Yaxis_m,Hx,Hy,Hd[27][11]={0},s=0,p=0,q=0,o=0;
    int v=0,T[9999]={0};
    int test=0,test1=0,test2=0;
    IplImage *ImageCOMBO[21],*ImageMaskCOMBO[21];
    int COMBO=0,COMBO_Xaxis=80,COMBO_Yaxis=300,COMBOSS=0,COMBODD=0,z_z=1,z_y=0,PP=0,PPP=0;
    int COMBO_play2=0,COMBO_Xaxis_play2=900,COMBO_Yaxis_play2=300,COMBOSS_play2=0,COMBODD_play2=0,z_z_play2=1,z_y_play2=0,PP_play2=0,PPP_play2=0;
    
int main(void)
{
		
	do
	{
	PlaySound(TEXT("op.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
		
	while(star==0)
	{
	
		Imagesite=cvLoadImage("STAR.png");
		cvShowImage("CarMove",Imagesite);
		cvWaitKey(1);	//延緩0.001秒若沒有按下任何案件往下執行 
		cvReleaseImage(&Imagesite); //釋放IplImage圖形資料結構所占用的記憶體
		while(kbhit())
		{
			directKey=getch();
			printf("%d",directKey);
			if(directKey==13)
			{
				star=1;
				directKey=0;
			}
		}
	}
	while(star==1)
	{	
		Imagesite=cvLoadImage("3.png");
		cvShowImage("CarMove",Imagesite);
		cvReleaseImage(&Imagesite); //釋放IplImage圖形資料結構所占用的記憶體
		cvWaitKey(500);
		PlaySound(TEXT("pickup02.wav"),NULL,SND_FILENAME | SND_ASYNC);
		cvWaitKey(500);
		Imagesite=cvLoadImage("2.png");
		cvShowImage("CarMove",Imagesite);
		cvReleaseImage(&Imagesite); //釋放IplImage圖形資料結構所占用的記憶體
		cvWaitKey(500);	//延緩0.001秒若沒有按下任何案件往下執行 
		PlaySound(TEXT("pickup02.wav"),NULL,SND_FILENAME | SND_ASYNC);
		cvWaitKey(500);
		Imagesite=cvLoadImage("1.png");
		cvShowImage("CarMove",Imagesite);
		cvReleaseImage(&Imagesite); //釋放IplImage圖形資料結構所占用的記憶體
		cvWaitKey(500);	//延緩0.001秒若沒有按下任何案件往下執行 
		PlaySound(TEXT("pickup03.wav"),NULL,SND_FILENAME | SND_ASYNC);
		cvWaitKey(500);
		PlaySound("amtbr-trpjk.wav",NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
		for(i=1;i<=10;i++)
		{
			H[26][i]=1;
			H_play2[26][i]=1;
   		}
  		  srand(time(NULL));
	do
	{
		
		
		Randomblock();	
		nextt();
		
		
		system("cls");
		for (i=6;i<=21;i++)
		{
			for (j=1;j<=10;j++)
			{
				printf("%3d ",H[i][j]);
			}
			printf(" |#| ");
			for (j=1;j<=10;j++)
			{
				printf("%3d ",H_play2[i][j]);
			}
			printf("\n");
		}
		
		T[z]=1;
		T[z+1]=1;
		T[z+2]=1;
		T[z+3]=1;
		
		T_play2[z_play2]=1;
		T_play2[z_play2+1]=1;
		T_play2[z_play2+2]=1;
		T_play2[z_play2+3]=1;
		do
		{
			
			
			coordinate();
			
			Imagesite=cvLoadImage("sxy.jpg");
			while(kbhit())
	    	{        
	    		directKey=getch();
				button(); 
			} 
			
			exchange();		
			b_play2++;
			b++;
			if(b_play2>=10)//判斷是否數到30 
			{ 
				site_Yaxis_play2[z_play2]+=30;
				site_Yaxis_play2[z_play2+1]+=30;
				site_Yaxis_play2[z_play2+2]+=30;
				site_Yaxis_play2[z_play2+3]+=30;   
				b_play2=0; 	
			}
			if(b>=10)//判斷是否數到30 
			{ 
				site_Yaxis[z]+=30;
				site_Yaxis[z+1]+=30;
				site_Yaxis[z+2]+=30;
				site_Yaxis[z+3]+=30;   	
				b=0; 	
			}
			eliminate();
			
			if (H[6][4]>=1||H[6][5]>=1||H[6][6]>=1||H[6][7]>=1)
			{
				r=1;
			}
			if (H_play2[6][4]>=1||H_play2[6][5]>=1||H_play2[6][6]>=1||H_play2[6][7]>=1)
			{
				if(r==1)
				{
					r2=1;
				}
				r=2;
			}
				
			Pastsquares();
			cvShowImage("CarMove",Imagesite); //顯示繪圖介面物件 	
			cvWaitKey(1);	//延緩0.001秒若沒有按下任何案件往下執行 
			cvReleaseImage(&Imagesite); //釋放IplImage圖形資料結構所占用的記憶體 
			
			if (PPP==0)
			{
				if(PP==1)
				{
					PPP=1;		
					s=1;
	    		}
	    		
			}
			if (PPP_play2==0)
			{
				if(PP_play2==1)
				{
					PPP_play2=1;	
					s_play2=1;
		    	}
			}
			
			
		}while ((s==0)&&(s_play2==0)&&r==0);
	
	
				if(r>0&&directKey!=13)
				{
					PlaySound(TEXT("Lemaitre.wav"),NULL,SND_FILENAME | SND_ASYNC|SND_LOOP);
					if(r2==0&&directKey!=0)
					{
						if (r==1)
						{
							do
							{
								cvWaitKey(1);
								while(kbhit())
								{
									directKey=getch();
									switch (directKey)
									{
										case 27:
										return 0;
										break;
										case 13:
										star=0;
										r=0;
										directKey=0;
										break;
									}	
								}
							}while(r!=0);
						}
						else if(r==2)
						{
							do
							{
								cvWaitKey(1);
								while(kbhit())
								{
									directKey=getch();
									switch (directKey)
									{
										case 27:
										return 0;
										break;
										case 13:
										star=0;
										r=0;
										directKey=0;
										break;
									}	
								}
							}while(r!=0);
						}
					}
					else if(r2==1&&directKey!=0)
					{
						do
						{
							cvWaitKey(1);
							while(kbhit())
							{
								directKey=getch();
								switch (directKey)
								{
									case 27:
									return 0;
									break;
									case 13:
									star=0;
									r2=0;
									directKey=0;
									break;
								}	
							}
						}while(r2!=0);
					}
					z=1;
					z_play2=1;
					s=0;
					s_play2=0;
					xO=0;
					xO_play2=0;
					for (i=0;i<=9999;i++)
					{
						T[i]=0;
						T_play2[i]=0;
						x[i]=0;
						x_play2[i]=0;
					}
					for (i=1;i<=25;i++)
					{
						for (j=1;j<=10;j++)
						{
							H[i][j]=0;
							Hd[i][j]=0;
							H_play2[i][j]=0;
							Hd_play2[i][j]=0;
						}
					}
					COMBO=0;
					COMBODD=0;
					COMBOSS=0;
					
					COMBO_play2=0;
					COMBODD_play2=0;
					COMBOSS_play2=0;
					chang=0;
					chang1=0;
					chang_play2=0;
					chang1_play2=0;
					a_play2=0;
					c_play2=0;
					s_play2=0;
					d_play2=0;
					a=0;
					c=0;
					s=0;
					d=0;
				}
				
		if(s_play2==1)
		{
			
			if (z_y_play2==1)
			{
				z_play2=z_z_play2;
				z_y_play2=0;
			}
			
			a_play2=0;
			c_play2=0;
			z_play2=z_play2+4;
			xO_play2++; 
			test_play2=0;
			s_play2=0;
			d_play2=0;
		}
		if(s==1)
		{
			
			if (z_y==1)
			{
				z=z_z;
				z_y=0;
			}
			
			a=0;
			c=0;
			z=z+4;
			xO++; 
			test=0;
			s=0;
			d=0;
		}
		
	  }while(star!=0);
	}
	star=1;
	}while(1);
}



void eliminate(void)
{
	
		
		///////////////////////////////////////////////////////////////////////
		
			if (COMBOSS_play2==50)
			 {
			 	z_z=z;

			 	do
			 	{
				 	COMBOSS_play2=0;
				 	COMBO_play2=COMBO_play2-1;
				 	z_z=z_z+3;
				 	x[xO+1]=8;
				 	x[xO+2]=8;
				 	x[xO+3]=8;
				 	xO=xO+4;	 	
				 	T[z_z+10]=0;
				 	T[z_z+11]=0;
				 	T[z_z+12]=0;
				 	
					for (i=6;i<=25;i++)
				 	{
				 		for (j=1;j<=10;j++)
				 		{
				 			H[i-1][j]=H[i][j];
				 			site_Yaxis[H[i-1][j]]=site_Yaxis[H[i-1][j]]-30;
				 		}
				 	}
				 	
					Hx=210;
					Hy=630;
					COMBODD_play2=rand()%10+1;
					for (i=1;i<=10;i++)
					{
						if (i!=COMBODD_play2)
						{
							z_z++;
							H[25][i]=z_z;
							T[z_z]=1;
							site_Xaxis[z_z]=Hx;
							site_Yaxis[z_z]=Hy;
						}
						else
						{
							H[25][i]=0;
						}
						Hx=Hx+30;
					}
					z_z=z_z+4;
					}while(COMBO_play2!=0);
					z_y=1;
			 }
			///////////////////////////////////////////////////////////////////////////////
			
			///////////////////////////////////////////////////////////////////////
		
			if (COMBOSS==50)
			 {
			 	z_z_play2=z_play2;
	 	
			 	do
			 	{
				 	COMBOSS=0;
				 	COMBO=COMBO-1;
				 	z_z_play2=z_z_play2+3;
				 	x_play2[xO_play2+1]=8;
				 	x_play2[xO_play2+2]=8;
				 	x_play2[xO_play2+3]=8;
				 	xO_play2=xO_play2+4;	 	
				 	T_play2[z_z_play2+10]=0;
				 	T_play2[z_z_play2+11]=0;
				 	T_play2[z_z_play2+12]=0;
				 	
				 	T_play2[z_z_play2+13]=0;
					T_play2[z_z_play2+14]=0;
				 	T_play2[z_z_play2+15]=0;
				 	T_play2[z_z_play2+16]=0;
				 	
				 for (i=6;i<=25;i++)
				 	{
				 		for (j=1;j<=10;j++)
				 		{
				 			H_play2[i-1][j]=H_play2[i][j];
				 			site_Yaxis_play2[H_play2[i-1][j]]=site_Yaxis_play2[H_play2[i-1][j]]-30;
				 		}
				 	}
				 	
					Hx_play2=1030;
					Hy_play2=630;
					COMBODD=rand()%10+1;
					for (i=1;i<=10;i++)
					{
						if (i!=COMBODD)
						{
							z_z_play2++;
							H_play2[25][i]=z_z_play2;
							T_play2[z_z_play2]=1;
							site_Xaxis_play2[z_z_play2]=Hx_play2;
							site_Yaxis_play2[z_z_play2]=Hy_play2;
						}
						else
						{
							H_play2[25][i]=0;
						}
						Hx_play2=Hx_play2+30;
					}
					z_z_play2=z_z_play2+4;
					}while(COMBO!=0);
					z_y_play2=1;
			 }
			///////////////////////////////////////////////////////////////////////////////
		
		
		for (i=1;i<=25;i++)
		{
			for (j=1;j<=10;j++)
			{
				Hd[i][j]=0;
			}
		}
		Hx=210;
		Hy=60;
		for (i=0;i<4;i++)
		{
			for (j=1;j<=10;j++)
			{
				if (site_Xaxis[z+i]==Hx)
				{
					for (k=6;k<=25;k++)
					{
						 if (site_Yaxis[z+i]==Hy)
						 {
						 	Hd[k][j]=1;
						 }
						 Hy=Hy+30;
					}
					Hy=60;
				}
				Hx=Hx+30;
			}
			Hx=210; 
		}
		
		
		for (i=6;i<=25;i++)
		{
			for (j=1;j<=10;j++)
			{
				if (Hd[i][j]==1)
				{
					if (H[i+1][j]!=0)
					{
						s=1;
					}
				}
			}
		}
			
		
		if (s==1)
		{
			Hx=210;
			Hy=60;
			for (i=0;i<4;i++)
			{
				for (j=1;j<=10;j++)
				{
					if (site_Xaxis[z+i]==Hx)
					{
						for (k=6;k<=25;k++)
						{
							if (site_Yaxis[z+i]==Hy)
							{
								H[k][j]=z+i;
							}
							Hy=Hy+30;
						}
					Hy=60;
					}
				Hx=Hx+30;
				}
			Hx=210; 
			}
		}
		
		///////////////////////////////  消除
		for (i=6;i<=25;i++)
		{
			for (j=1;j<=10;j++)
			{
				if (H[i][j]!=0)
				{
					v++;
				}
			}
			if (v==10)
			{
				for (j=1;j<=10;j++)
				{
					T[H[i][j]]=0;
				}
				for (j=i;j>=1;j--)
				{
					for (k=1;k<=10;k++)
					{
						H[j][k]=H[j-1][k];
						site_Yaxis[H[j][k]]=site_Yaxis[H[j][k]]+30;
					}
				}
				if (COMBO_play2!=0)
				{
					COMBO_play2=COMBO_play2-1;
				}
				else
				{
		    		COMBO++;
	     		}
				COMBOSS=0;
			}
			v=0;
		} 
		
		
		
		
		for (i=6;i<=25;i++)
		{
			for (j=1;j<=10;j++)
			{
				Hd_play2[i][j]=0;
			}
		}
		Hx_play2=1030;
		Hy_play2=60;
		for (i=0;i<4;i++)
		{
			for (j=1;j<=10;j++)
			{
				if (site_Xaxis_play2[z_play2+i]==Hx_play2)
				{
					for (k=6;k<=25;k++)
					{
						 if (site_Yaxis_play2[z_play2+i]==Hy_play2)
						 {
						 	Hd_play2[k][j]=1;
						 }
						 Hy_play2=Hy_play2+30;
					}
					Hy_play2=60;
				}
				Hx_play2=Hx_play2+30;
			}
			Hx_play2=1030; 
		}
		
		
		for (i=6;i<=25;i++)
		{
			for (j=1;j<=10;j++)
			{
				if (Hd_play2[i][j]==1)
				{
					if (H_play2[i+1][j]!=0)
					{
						s_play2=1;
					}
				}
			}
		}
			
		
		if (s_play2==1)
		{
			Hx_play2=1030;
			Hy_play2=60;
			for (i=0;i<4;i++)
			{
				for (j=1;j<=10;j++)
				{
					if (site_Xaxis_play2[z_play2+i]==Hx_play2)
					{
						for (k=6;k<=25;k++)
						{
							if (site_Yaxis_play2[z_play2+i]==Hy_play2)
							{
								H_play2[k][j]=z_play2+i;
							}
							Hy_play2=Hy_play2+30;
						}
					Hy_play2=60;
					}
				Hx_play2=Hx_play2+30;
				}
			Hx_play2=1030; 
			}
		}
		
		///////////////////////////////  消除
		for (i=6;i<=25;i++)
		{
			for (j=1;j<=10;j++)
			{
				if (H_play2[i][j]!=0)
				{
					v_play2++;
				}
			}
			if (v_play2==10)
			{
				for (j=1;j<=10;j++)
				{
					T_play2[H_play2[i][j]]=0;
				}
				for (j=i;j>=1;j--)
				{
					for (k=1;k<=10;k++)
					{
						H_play2[j][k]=H_play2[j-1][k];
						site_Yaxis_play2[H_play2[j][k]]=site_Yaxis_play2[H_play2[j][k]]+30;
					}
				}
                if (COMBO!=0)
				{
					COMBO=COMBO-1;
				}
				else
				{
		    		COMBO_play2++;
	     		}				
			}
			v_play2=0;
		}
		

		
}

void Pastsquares(void)//顯示所有產生過的方塊 
{
	
	//////////////////////////////////
		if (COMBO_play2!=0)
		{
			COMBOSS_play2++;
			cvSetImageROI(Imagesite,cvRect(COMBO_Xaxis_play2,COMBO_Yaxis_play2,ImageCOMBO[COMBO_play2]->width,ImageCOMBO[COMBO_play2]->height));
			cvCopy(ImageCOMBO[COMBO_play2],Imagesite,ImageMaskCOMBO[COMBO_play2]);
			cvResetImageROI(Imagesite);	//釋放感興區域 
			//cvShowImage("CarMove",Imagesite); //顯示繪圖介面物件
		}
			 
		
		////////////////////////////////
	
	for (i=0;i<=xO_play2;i++)
		{
			xW_play2=x_play2[i];
			if(x_play2[i]>0)
			{
				if (T_play2[zW_play2]==1)
				{
					cvSetImageROI(Imagesite,cvRect(site_Xaxis_play2[zW_play2],site_Yaxis_play2[zW_play2],Imagesquare[xW_play2]->width,Imagesquare[xW_play2]->height));	//設置感興區域 (感興區域為圖1的一部份,(起始X座標,起始y做標,圖2寬度,圖2高度)) 
					cvCopy(Imagesquare[xW_play2],Imagesite,ImageMasksquare[xW_play2]);
				}
				if (T_play2[zW_play2+1]==1)
				{
					cvSetImageROI(Imagesite,cvRect(site_Xaxis_play2[zW_play2+1],site_Yaxis_play2[zW_play2+1],Imagesquare[xW_play2]->width,Imagesquare[xW_play2]->height));
					cvCopy(Imagesquare[xW_play2],Imagesite,ImageMasksquare[xW_play2]);
				}
				if (T_play2[zW_play2+2]==1)
				{ 
					cvSetImageROI(Imagesite,cvRect(site_Xaxis_play2[zW_play2+2],site_Yaxis_play2[zW_play2+2],Imagesquare[xW_play2]->width,Imagesquare[xW_play2]->height));
					cvCopy(Imagesquare[xW_play2],Imagesite,ImageMasksquare[xW_play2]);
				} 
				if (T_play2[zW_play2+3]==1)
				{ 
					cvSetImageROI(Imagesite,cvRect(site_Xaxis_play2[zW_play2+3],site_Yaxis_play2[zW_play2+3],Imagesquare[xW_play2]->width,Imagesquare[xW_play2]->height));
					cvCopy(Imagesquare[xW_play2],Imagesite,ImageMasksquare[xW_play2]);
				}	 
			}
			if(chang_play2!=0)
			{
				cvSetImageROI(Imagesite,cvRect(chang3_play2[0],chang3_play2[1],Imagechang2->width,Imagechang2->height));
				cvCopy(Imagechang2,Imagesite,ImageMaskchang2);
				cvSetImageROI(Imagesite,cvRect(chang3_play2[2],chang3_play2[3],Imagechang2->width,Imagechang2->height));
				cvCopy(Imagechang2,Imagesite,ImageMaskchang2);
				cvSetImageROI(Imagesite,cvRect(chang3_play2[4],chang3_play2[5],Imagechang2->width,Imagechang2->height));
				cvCopy(Imagechang2,Imagesite,ImageMaskchang2);
				cvSetImageROI(Imagesite,cvRect(chang3_play2[6],chang3_play2[7],Imagechang2->width,Imagechang2->height));
				cvCopy(Imagechang2,Imagesite,ImageMaskchang2);
			}  
			cvSetImageROI(Imagesite,cvRect(nxt_play2[0],nxt_play2[1],Imagenext2->width,Imagenext2->height));
			cvCopy(Imagenext2,Imagesite,ImageMasknext2);
			cvSetImageROI(Imagesite,cvRect(nxt_play2[2],nxt_play2[3],Imagenext2->width,Imagenext2->height));
			cvCopy(Imagenext2,Imagesite,ImageMasknext2);
			cvSetImageROI(Imagesite,cvRect(nxt_play2[4],nxt_play2[5],Imagenext2->width,Imagenext2->height));
			cvCopy(Imagenext2,Imagesite,ImageMasknext2);
			cvSetImageROI(Imagesite,cvRect(nxt_play2[6],nxt_play2[7],Imagenext2->width,Imagenext2->height));
			cvCopy(Imagenext2,Imagesite,ImageMasknext2);
			cvSetImageROI(Imagesite,cvRect(nxt1_play2[0],nxt1_play2[1],Imagenext3->width,Imagenext3->height));
			cvCopy(Imagenext3,Imagesite,ImageMasknext3);
			cvSetImageROI(Imagesite,cvRect(nxt1_play2[2],nxt1_play2[3],Imagenext3->width,Imagenext3->height));
			cvCopy(Imagenext3,Imagesite,ImageMasknext3);
			cvSetImageROI(Imagesite,cvRect(nxt1_play2[4],nxt1_play2[5],Imagenext3->width,Imagenext3->height));
			cvCopy(Imagenext3,Imagesite,ImageMasknext3);
			cvSetImageROI(Imagesite,cvRect(nxt1_play2[6],nxt1_play2[7],Imagenext3->width,Imagenext3->height));
			cvCopy(Imagenext3,Imagesite,ImageMasknext3);
			
			cvResetImageROI(Imagesite);	//釋放感興區域 
			zW_play2=zW_play2+4;
		}
		zW_play2=1;
		
		//////////////////////////////////
		if (COMBO!=0)
		{
			COMBOSS++;
			cvSetImageROI(Imagesite,cvRect(COMBO_Xaxis,COMBO_Yaxis,ImageCOMBO[COMBO]->width,ImageCOMBO[COMBO]->height));
			cvCopy(ImageCOMBO[COMBO],Imagesite,ImageMaskCOMBO[COMBO]);
			cvResetImageROI(Imagesite);	//釋放感興區域 
		}
			 
		
		////////////////////////////////
		
		for (i=0;i<=xO;i++)
		{
			xW=x[i];
			if(x[i]>0)
			{
				if (T[zW]==1)
				{
					cvSetImageROI(Imagesite,cvRect(site_Xaxis[zW],site_Yaxis[zW],Imagesquare[xW]->width,Imagesquare[xW]->height));	//設置感興區域 (感興區域為圖1的一部份,(起始X座標,起始y做標,圖2寬度,圖2高度)) 
					cvCopy(Imagesquare[xW],Imagesite,ImageMasksquare[xW]);
				}
				if (T[zW+1]==1)
				{
					cvSetImageROI(Imagesite,cvRect(site_Xaxis[zW+1],site_Yaxis[zW+1],Imagesquare[xW]->width,Imagesquare[xW]->height));
					cvCopy(Imagesquare[xW],Imagesite,ImageMasksquare[xW]);
				}
				if (T[zW+2]==1)
				{ 
					cvSetImageROI(Imagesite,cvRect(site_Xaxis[zW+2],site_Yaxis[zW+2],Imagesquare[xW]->width,Imagesquare[xW]->height));
					cvCopy(Imagesquare[xW],Imagesite,ImageMasksquare[xW]);
				} 
				if (T[zW+3]==1)
				{ 
					cvSetImageROI(Imagesite,cvRect(site_Xaxis[zW+3],site_Yaxis[zW+3],Imagesquare[xW]->width,Imagesquare[xW]->height));
					cvCopy(Imagesquare[xW],Imagesite,ImageMasksquare[xW]);
				}	 
			}
			if(chang!=0)
			{
				cvSetImageROI(Imagesite,cvRect(chang3[0],chang3[1],Imagechang->width,Imagechang->height));
				cvCopy(Imagechang,Imagesite,ImageMaskchang);
				cvSetImageROI(Imagesite,cvRect(chang3[2],chang3[3],Imagechang->width,Imagechang->height));
				cvCopy(Imagechang,Imagesite,ImageMaskchang);
				cvSetImageROI(Imagesite,cvRect(chang3[4],chang3[5],Imagechang->width,Imagechang->height));
				cvCopy(Imagechang,Imagesite,ImageMaskchang);
				cvSetImageROI(Imagesite,cvRect(chang3[6],chang3[7],Imagechang->width,Imagechang->height));
				cvCopy(Imagechang,Imagesite,ImageMaskchang);
			}  
			cvSetImageROI(Imagesite,cvRect(nxt[0],nxt[1],Imagenext->width,Imagenext->height));
			cvCopy(Imagenext,Imagesite,ImageMasknext);
			cvSetImageROI(Imagesite,cvRect(nxt[2],nxt[3],Imagenext->width,Imagenext->height));
			cvCopy(Imagenext,Imagesite,ImageMasknext);
			cvSetImageROI(Imagesite,cvRect(nxt[4],nxt[5],Imagenext->width,Imagenext->height));
			cvCopy(Imagenext,Imagesite,ImageMasknext);
			cvSetImageROI(Imagesite,cvRect(nxt[6],nxt[7],Imagenext->width,Imagenext->height));
			cvCopy(Imagenext,Imagesite,ImageMasknext);
			cvSetImageROI(Imagesite,cvRect(nxt1[0],nxt1[1],Imagenext1->width,Imagenext1->height));
			cvCopy(Imagenext1,Imagesite,ImageMasknext1);
			cvSetImageROI(Imagesite,cvRect(nxt1[2],nxt1[3],Imagenext1->width,Imagenext1->height));
			cvCopy(Imagenext1,Imagesite,ImageMasknext1);
			cvSetImageROI(Imagesite,cvRect(nxt1[4],nxt1[5],Imagenext1->width,Imagenext1->height));
			cvCopy(Imagenext1,Imagesite,ImageMasknext1);
			cvSetImageROI(Imagesite,cvRect(nxt1[6],nxt1[7],Imagenext1->width,Imagenext1->height));
			cvCopy(Imagenext1,Imagesite,ImageMasknext1);
			
			cvResetImageROI(Imagesite);	//釋放感興區域 
			zW=zW+4;
		}
		zW=1;
		if (r2==0)
		{
			if (r==1)
			{
				Imageloss=cvLoadImage("1loss.png");
				ImageMaskloss=cvLoadImage("1loss.png",0);
				cvSetImageROI(Imagesite,cvRect(0,0,Imageloss->width,Imageloss->height));
				cvCopy(Imageloss,Imagesite,ImageMaskloss);

			}
			
			if (r==2)
			{
				Imageloss=cvLoadImage("2loss.png");
				ImageMaskloss=cvLoadImage("2loss.png",0);
				cvSetImageROI(Imagesite,cvRect(0,0,Imageloss->width,Imageloss->height));
				cvCopy(Imageloss,Imagesite,ImageMaskloss);

			}
		}
		if (r2==1)
		{
			Imageloss=cvLoadImage("p.png");
			ImageMaskloss=cvLoadImage("p.png",0);
			cvSetImageROI(Imagesite,cvRect(0,0,Imageloss->width,Imageloss->height));
			cvCopy(Imageloss,Imagesite,ImageMaskloss);

		}
}

void exchange(void)//顯示存取的方塊 
{
			while(site_Xaxis[z]>480||site_Xaxis[z+1]>480||site_Xaxis[z+2]>480||site_Xaxis[z+3]>480)
			{
				site_Xaxis[z]-=30;
				site_Xaxis[z+1]-=30;
				site_Xaxis[z+2]-=30;
				site_Xaxis[z+3]-=30;
			}
			while(site_Xaxis[z]<210||site_Xaxis[z+1]<210||site_Xaxis[z+2]<210||site_Xaxis[z+3]<210)
			{
				site_Xaxis[z]+=30;
				site_Xaxis[z+1]+=30;
				site_Xaxis[z+2]+=30;
				site_Xaxis[z+3]+=30;
			}
			while(site_Yaxis[z]>630||site_Yaxis[z+1]>630||site_Yaxis[z+2]>630||site_Yaxis[z+3]>630)
			{
				site_Yaxis[z]-=30;
				site_Yaxis[z+1]-=30;
				site_Yaxis[z+2]-=30;
				site_Yaxis[z+3]-=30;
			}
			while(site_Xaxis_play2[z_play2]>1300||site_Xaxis_play2[z_play2+1]>1300||site_Xaxis_play2[z_play2+2]>1300||site_Xaxis_play2[z_play2+3]>1300)
			{
				site_Xaxis_play2[z_play2]-=30;
				site_Xaxis_play2[z_play2+1]-=30;
				site_Xaxis_play2[z_play2+2]-=30;
				site_Xaxis_play2[z_play2+3]-=30;
			}
			while(site_Xaxis_play2[z_play2]<1030||site_Xaxis_play2[z_play2+1]<1030||site_Xaxis_play2[z_play2+2]<1030||site_Xaxis_play2[z_play2+3]<1030)
			{
				site_Xaxis_play2[z_play2]+=30;
				site_Xaxis_play2[z_play2+1]+=30;
				site_Xaxis_play2[z_play2+2]+=30;
				site_Xaxis_play2[z_play2+3]+=30;
			}
			while(site_Yaxis_play2[z_play2]>630||site_Yaxis_play2[z_play2+1]>630||site_Yaxis_play2[z_play2+2]>630||site_Yaxis_play2[z_play2+3]>630)
			{
				site_Yaxis_play2[z_play2]-=30;
				site_Yaxis_play2[z_play2+1]-=30;
				site_Yaxis_play2[z_play2+2]-=30;
				site_Yaxis_play2[z_play2+3]-=30;
			}
			switch (chang)
			{
				case 1:
				Imagechang=cvLoadImage("blue.png");
				ImageMaskchang=cvLoadImage("blue.png",0);
				cvThreshold(ImageMaskchang,ImageMaskchang,254,255,CV_THRESH_BINARY_INV);
				chang3[0]=75;
				chang3[1]=100;
				chang3[2]=105;
				chang3[3]=100;
				chang3[4]=135;
				chang3[5]=100;
				chang3[6]=165;
				chang3[7]=100;
				break;
				case 2:
				Imagechang=cvLoadImage("yellow.png");
				ImageMaskchang=cvLoadImage("yellow.png",0);
				cvThreshold(ImageMaskchang,ImageMaskchang,254,255,CV_THRESH_BINARY_INV);
				chang3[0]=105;
				chang3[1]=85;
				chang3[2]=135;
				chang3[3]=85;
				chang3[4]=105;
				chang3[5]=115;
				chang3[6]=135;
				chang3[7]=115;
				break;
				case 3:
				Imagechang=cvLoadImage("red.png");
				ImageMaskchang=cvLoadImage("red.png",0);
				cvThreshold(ImageMaskchang,ImageMaskchang,254,255,CV_THRESH_BINARY_INV);	
				chang3[0]=90;
				chang3[1]=80;
				chang3[2]=120;
				chang3[3]=80;
				chang3[4]=150;
				chang3[5]=110;
				chang3[6]=120;
				chang3[7]=110;
				break;
				case 4:
				Imagechang=cvLoadImage("green.png");
				ImageMaskchang=cvLoadImage("green.png",0);
				cvThreshold(ImageMaskchang,ImageMaskchang,254,255,CV_THRESH_BINARY_INV);	
				chang3[0]=120;
				chang3[1]=80;
				chang3[2]=150;
				chang3[3]=80;
				chang3[4]=90;
				chang3[5]=110;
				chang3[6]=120;
				chang3[7]=110;
				break;
				case 5:
				Imagechang=cvLoadImage("orange.png");
				ImageMaskchang=cvLoadImage("orange.png",0);
				cvThreshold(ImageMaskchang,ImageMaskchang,254,255,CV_THRESH_BINARY_INV);	
				chang3[0]=90;
				chang3[1]=110;
				chang3[2]=90;
				chang3[3]=80;
				chang3[4]=120;
				chang3[5]=80;
				chang3[6]=150;
				chang3[7]=80;
				break;
				case 6:
				Imagechang=cvLoadImage("Cerulean Blue.png");
				ImageMaskchang=cvLoadImage("Cerulean Blue.png",0);
				cvThreshold(ImageMaskchang,ImageMaskchang,254,255,CV_THRESH_BINARY_INV);	
				chang3[0]=155;
				chang3[1]=110;
				chang3[2]=95;
				chang3[3]=80;
				chang3[4]=125;
				chang3[5]=80;
				chang3[6]=155;
				chang3[7]=80;
				break;
				case 7:
				Imagechang=cvLoadImage("Purple.png");
				ImageMaskchang=cvLoadImage("Purple.png",0);
				cvThreshold(ImageMaskchang,ImageMaskchang,254,255,CV_THRESH_BINARY_INV);	
				chang3[0]=90;
				chang3[1]=110;
				chang3[2]=120;
				chang3[3]=110;
				chang3[4]=150;
				chang3[5]=110;
				chang3[6]=120;
				chang3[7]=80;
				break;
				default:
				break;
			}
			switch (chang_play2)
			{
				case 1:
				Imagechang2=cvLoadImage("blue.png");
				ImageMaskchang2=cvLoadImage("blue.png",0);
				cvThreshold(ImageMaskchang2,ImageMaskchang2,254,255,CV_THRESH_BINARY_INV);
				chang3_play2[0]=75+820;
				chang3_play2[1]=100;
				chang3_play2[2]=105+820;
				chang3_play2[3]=100;
				chang3_play2[4]=135+820;
				chang3_play2[5]=100;
				chang3_play2[6]=165+820;
				chang3_play2[7]=100;
				break;
				case 2:
				Imagechang2=cvLoadImage("yellow.png");
				ImageMaskchang2=cvLoadImage("yellow.png",0);
				cvThreshold(ImageMaskchang2,ImageMaskchang2,254,255,CV_THRESH_BINARY_INV);
				chang3_play2[0]=105+820;
				chang3_play2[1]=85;
				chang3_play2[2]=135+820;
				chang3_play2[3]=85;
				chang3_play2[4]=105+820;
				chang3_play2[5]=115;
				chang3_play2[6]=135+820;
				chang3_play2[7]=115;
				break;
				case 3:
				Imagechang2=cvLoadImage("red.png");
				ImageMaskchang2=cvLoadImage("red.png",0);
				cvThreshold(ImageMaskchang2,ImageMaskchang2,254,255,CV_THRESH_BINARY_INV);	
				chang3_play2[0]=90+820;
				chang3_play2[1]=80;
				chang3_play2[2]=120+820;
				chang3_play2[3]=80;
				chang3_play2[4]=150+820;
				chang3_play2[5]=110;
				chang3_play2[6]=120+820;
				chang3_play2[7]=110;
				break;
				case 4:
				Imagechang2=cvLoadImage("green.png");
				ImageMaskchang2=cvLoadImage("green.png",0);
				cvThreshold(ImageMaskchang2,ImageMaskchang2,254,255,CV_THRESH_BINARY_INV);	
				chang3_play2[0]=120+820;
				chang3_play2[1]=80;
				chang3_play2[2]=150+820;
				chang3_play2[3]=80;
				chang3_play2[4]=90+820;
				chang3_play2[5]=110;
				chang3_play2[6]=120+820;
				chang3_play2[7]=110;
				break;
				case 5:
				Imagechang2=cvLoadImage("orange.png");
				ImageMaskchang2=cvLoadImage("orange.png",0);
				cvThreshold(ImageMaskchang2,ImageMaskchang2,254,255,CV_THRESH_BINARY_INV);	
				chang3_play2[0]=90+820;
				chang3_play2[1]=110;
				chang3_play2[2]=90+820;
				chang3_play2[3]=80;
				chang3_play2[4]=120+820;
				chang3_play2[5]=80;
				chang3_play2[6]=150+820;
				chang3_play2[7]=80;
				break;
				case 6:
				Imagechang2=cvLoadImage("Cerulean Blue.png");
				ImageMaskchang2=cvLoadImage("Cerulean Blue.png",0);
				cvThreshold(ImageMaskchang2,ImageMaskchang2,254,255,CV_THRESH_BINARY_INV);	
				chang3_play2[0]=155+820;
				chang3_play2[1]=110;
				chang3_play2[2]=95+820;
				chang3_play2[3]=80;
				chang3_play2[4]=125+820;
				chang3_play2[5]=80;
				chang3_play2[6]=155+820;
				chang3_play2[7]=80;
				break;
				case 7:
				Imagechang2=cvLoadImage("Purple.png");
				ImageMaskchang2=cvLoadImage("Purple.png",0);
				cvThreshold(ImageMaskchang2,ImageMaskchang2,254,255,CV_THRESH_BINARY_INV);	
				chang3_play2[0]=90+820;
				chang3_play2[1]=110;
				chang3_play2[2]=120+820;
				chang3_play2[3]=110;
				chang3_play2[4]=150+820;
				chang3_play2[5]=110;
				chang3_play2[6]=120+820;
				chang3_play2[7]=80;
				break;
				default:
				break;
			}
}

void Randomblock(void)//6個亂數，載入方塊的圖 
{
	
		//////////////////////////////////////////
		ImageCOMBO[1]=cvLoadImage("COMBO1.png");
		ImageMaskCOMBO[1]=cvLoadImage("COMBO1.png",0);
		cvThreshold(ImageMaskCOMBO[1],ImageMaskCOMBO[1],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[2]=cvLoadImage("COMBO2.png");
		ImageMaskCOMBO[2]=cvLoadImage("COMBO2.png",0);
		cvThreshold(ImageMaskCOMBO[2],ImageMaskCOMBO[2],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[3]=cvLoadImage("COMBO3.png");
		ImageMaskCOMBO[3]=cvLoadImage("COMBO3.png",0);
		cvThreshold(ImageMaskCOMBO[3],ImageMaskCOMBO[3],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[4]=cvLoadImage("COMBO4.png");
		ImageMaskCOMBO[4]=cvLoadImage("COMBO4.png",0);
		cvThreshold(ImageMaskCOMBO[4],ImageMaskCOMBO[4],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[5]=cvLoadImage("COMBO5.png");
		ImageMaskCOMBO[5]=cvLoadImage("COMBO5.png",0);
		cvThreshold(ImageMaskCOMBO[5],ImageMaskCOMBO[5],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[6]=cvLoadImage("COMBO6.png");
		ImageMaskCOMBO[6]=cvLoadImage("COMBO6.png",0);
		cvThreshold(ImageMaskCOMBO[6],ImageMaskCOMBO[6],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[7]=cvLoadImage("COMBO7.png");
		ImageMaskCOMBO[7]=cvLoadImage("COMBO7.png",0);
		cvThreshold(ImageMaskCOMBO[7],ImageMaskCOMBO[7],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[8]=cvLoadImage("COMBO8.png");
		ImageMaskCOMBO[8]=cvLoadImage("COMBO8.png",0);
		cvThreshold(ImageMaskCOMBO[8],ImageMaskCOMBO[8],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[9]=cvLoadImage("COMBO9.png");
		ImageMaskCOMBO[9]=cvLoadImage("COMBO9.png",0);
		cvThreshold(ImageMaskCOMBO[9],ImageMaskCOMBO[9],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[10]=cvLoadImage("COMBO10.png");
		ImageMaskCOMBO[10]=cvLoadImage("COMBO10.png",0);
		cvThreshold(ImageMaskCOMBO[10],ImageMaskCOMBO[10],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[11]=cvLoadImage("COMBO11.png");
		ImageMaskCOMBO[11]=cvLoadImage("COMBO11.png",0);
		cvThreshold(ImageMaskCOMBO[11],ImageMaskCOMBO[11],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[12]=cvLoadImage("COMBO12.png");
		ImageMaskCOMBO[12]=cvLoadImage("COMBO12.png",0);
		cvThreshold(ImageMaskCOMBO[12],ImageMaskCOMBO[12],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[13]=cvLoadImage("COMBO13.png");
		ImageMaskCOMBO[13]=cvLoadImage("COMBO13.png",0);
		cvThreshold(ImageMaskCOMBO[13],ImageMaskCOMBO[13],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[14]=cvLoadImage("COMBO14.png");
		ImageMaskCOMBO[14]=cvLoadImage("COMBO14.png",0);
		cvThreshold(ImageMaskCOMBO[14],ImageMaskCOMBO[14],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[15]=cvLoadImage("COMBO15.png");
		ImageMaskCOMBO[15]=cvLoadImage("COMBO15.png",0);
		cvThreshold(ImageMaskCOMBO[15],ImageMaskCOMBO[15],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[16]=cvLoadImage("COMBO16.png");
		ImageMaskCOMBO[16]=cvLoadImage("COMBO16.png",0);
		cvThreshold(ImageMaskCOMBO[16],ImageMaskCOMBO[16],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[17]=cvLoadImage("COMBO17.png");
		ImageMaskCOMBO[17]=cvLoadImage("COMBO17.png",0);
		cvThreshold(ImageMaskCOMBO[17],ImageMaskCOMBO[17],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[18]=cvLoadImage("COMBO18.png");
		ImageMaskCOMBO[18]=cvLoadImage("COMBO18.png",0);
		cvThreshold(ImageMaskCOMBO[18],ImageMaskCOMBO[18],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[19]=cvLoadImage("COMBO19.png");
		ImageMaskCOMBO[19]=cvLoadImage("COMBO19.png",0);
		cvThreshold(ImageMaskCOMBO[19],ImageMaskCOMBO[19],254,255,CV_THRESH_BINARY_INV);
		
		ImageCOMBO[20]=cvLoadImage("COMBO20.png");
		ImageMaskCOMBO[20]=cvLoadImage("COMBO20.png",0);
		cvThreshold(ImageMaskCOMBO[20],ImageMaskCOMBO[20],254,255,CV_THRESH_BINARY_INV);
		
		Imagesquare[8]=cvLoadImage("GG.png");
		ImageMasksquare[8]=cvLoadImage("GG.png",0);
		cvThreshold(ImageMasksquare[8],ImageMasksquare[8],254,255,CV_THRESH_BINARY_INV);
		
		/////////////////////////////////////////	
	
		Imagesquare[1]=cvLoadImage("blue.png");
		ImageMasksquare[1]=cvLoadImage("blue.png",0);
		cvThreshold(ImageMasksquare[1],ImageMasksquare[1],254,255,CV_THRESH_BINARY_INV);	//二值化	(輸入圖,輸出圖,閾直,最大值,操作型態(超過閾值的像素設為0，小於閾值的設為最大值) 
		
		Imagesquare[2]=cvLoadImage("yellow.png");
		ImageMasksquare[2]=cvLoadImage("yellow.png",0);
		cvThreshold(ImageMasksquare[2],ImageMasksquare[2],254,255,CV_THRESH_BINARY_INV);	//二值化	(輸入圖,輸出圖,閾直,最大值,操作型態(超過閾值的像素設為0，小於閾值的設為最大值) 
		
		Imagesquare[3]=cvLoadImage("red.png");
		ImageMasksquare[3]=cvLoadImage("red.png",0);
		cvThreshold(ImageMasksquare[3],ImageMasksquare[3],254,255,CV_THRESH_BINARY_INV);	//二值化	(輸入圖,輸出圖,閾直,最大值,操作型態(超過閾值的像素設為0，小於閾值的設為最大值) 
		
		Imagesquare[4]=cvLoadImage("green.png");
		ImageMasksquare[4]=cvLoadImage("green.png",0);
		cvThreshold(ImageMasksquare[4],ImageMasksquare[4],254,255,CV_THRESH_BINARY_INV);	//二值化	(輸入圖,輸出圖,閾直,最大值,操作型態(超過閾值的像素設為0，小於閾值的設為最大值) 
		
		Imagesquare[5]=cvLoadImage("orange.png");
		ImageMasksquare[5]=cvLoadImage("orange.png",0);
		cvThreshold(ImageMasksquare[5],ImageMasksquare[5],254,255,CV_THRESH_BINARY_INV);	//二值化	(輸入圖,輸出圖,閾直,最大值,操作型態(超過閾值的像素設為0，小於閾值的設為最大值) 
		
		Imagesquare[6]=cvLoadImage("Cerulean Blue.png");
		ImageMasksquare[6]=cvLoadImage("Cerulean Blue.png",0);
		cvThreshold(ImageMasksquare[6],ImageMasksquare[6],254,255,CV_THRESH_BINARY_INV);	//二值化	(輸入圖,輸出圖,閾直,最大值,操作型態(超過閾值的像素設為0，小於閾值的設為最大值) 
		
		Imagesquare[7]=cvLoadImage("Purple.png");
		ImageMasksquare[7]=cvLoadImage("Purple.png",0);
		cvThreshold(ImageMasksquare[7],ImageMasksquare[7],254,255,CV_THRESH_BINARY_INV);	//二值化	(輸入圖,輸出圖,閾直,最大值,操作型態(超過閾值的像素設為0，小於閾值的設為最大值) 		nextt ();
	
	while(test==0||test1==0||test2==0)
		{
			if(test2==0)
			{
				test2=rand()%7+1;
			}
			if(test1==0)
			{
				test1=test2;
				test2=0;
			}
			if(test==0)
			{
				test=test1;
				test1=0;
			}
		}
		while(test_play2==0||test1_play2==0||test2_play2==0)
		{
			if(test2_play2==0)
			{
				
				test2_play2=rand()%7+1;
			}
			if(test1_play2==0)
			{
					test1_play2=test2_play2;
				test2_play2=0;
			}
			if(test_play2==0)
			{
				test_play2=test1_play2;
				test1_play2=0;
			}
		}
		x_play2[xO_play2]=test_play2;
			
		x[xO]=test;
}

void coordinate(void)//產生方塊的初始座標 
{
	if(a==0)
			{
				switch (test)
				{
					case 1:
					site_Xaxis[z]=330;
					site_Yaxis[z]=60;
					site_Xaxis[z+1]=site_Xaxis[z]-30;
					site_Yaxis[z+1]=60;
					site_Xaxis[z+2]=site_Xaxis[z]+30;
					site_Yaxis[z+2]=60;
					site_Xaxis[z+3]=site_Xaxis[z]+60;
					site_Yaxis[z+3]=60;
					break;
					case 2:
					site_Xaxis[z]=330;
					site_Yaxis[z]=90;
					site_Xaxis[z+1]=site_Xaxis[z]+30;
					site_Yaxis[z+1]=60;
					site_Xaxis[z+2]=site_Xaxis[z];
					site_Yaxis[z+2]=60;
					site_Xaxis[z+3]=site_Xaxis[z]+30;
					site_Yaxis[z+3]=90;
					break;
					case 3:
					site_Xaxis[z]=360;
					site_Yaxis[z]=90;
					site_Xaxis[z+1]=site_Xaxis[z];
					site_Yaxis[z+1]=60;
					site_Xaxis[z+2]=site_Xaxis[z]-30;
					site_Yaxis[z+2]=60;
					site_Xaxis[z+3]=site_Xaxis[z]+30;
					site_Yaxis[z+3]=90;	
					break;
					case 4:
					site_Xaxis[z]=360;
					site_Yaxis[z]=90;
					site_Xaxis[z+1]=site_Xaxis[z];
					site_Yaxis[z+1]=60;
					site_Xaxis[z+2]=site_Xaxis[z]+30;
					site_Yaxis[z+2]=60;
					site_Xaxis[z+3]=site_Xaxis[z]-30;
					site_Yaxis[z+3]=90;	
					break;
					case 5:
					site_Xaxis[z]=330;
					site_Yaxis[z]=90;
					site_Xaxis[z+1]=site_Xaxis[z];
					site_Yaxis[z+1]=60;
					site_Xaxis[z+2]=site_Xaxis[z]+30;
					site_Yaxis[z+2]=60;
					site_Xaxis[z+3]=site_Xaxis[z]+60;
					site_Yaxis[z+3]=60;
					break;
					case 6:
					site_Xaxis[z]=390;
					site_Yaxis[z]=90;
					site_Xaxis[z+1]=site_Xaxis[z];
					site_Yaxis[z+1]=60;
					site_Xaxis[z+2]=site_Xaxis[z]-30;
					site_Yaxis[z+2]=60;
					site_Xaxis[z+3]=site_Xaxis[z]-60;
					site_Yaxis[z+3]=60;		
					break;
					case 7:
					site_Xaxis[z]=360;
					site_Yaxis[z]=90;
					site_Xaxis[z+1]=site_Xaxis[z];
					site_Yaxis[z+1]=60;
					site_Xaxis[z+2]=site_Xaxis[z]-30;
					site_Yaxis[z+2]=90;
					site_Xaxis[z+3]=site_Xaxis[z]+30;
					site_Yaxis[z+3]=90;			
					break;
				}
				a=1; 
			}
			if(a_play2==0)
			{
				switch (test_play2)
				{
					case 1:
					site_Xaxis_play2[z_play2]=1150;
					site_Yaxis_play2[z_play2]=60;
					site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2]-30;
					site_Yaxis_play2[z_play2+1]=60;
					site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]+30;
					site_Yaxis_play2[z_play2+2]=60;
					site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+60;
					site_Yaxis_play2[z_play2+3]=60;
					break;
					case 2:
					site_Xaxis_play2[z_play2]=1150;
					site_Yaxis_play2[z_play2]=90;
					site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2]+30;
					site_Yaxis_play2[z_play2+1]=60;
					site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2];
					site_Yaxis_play2[z_play2+2]=60;
					site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+30;
					site_Yaxis_play2[z_play2+3]=90;
					break;
					case 3:
					site_Xaxis_play2[z_play2]=1180;
					site_Yaxis_play2[z_play2]=90;
					site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
					site_Yaxis_play2[z_play2+1]=60;
					site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]-30;
					site_Yaxis_play2[z_play2+2]=60;
					site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+30;
					site_Yaxis_play2[z_play2+3]=90;	
					break;
					case 4:
					site_Xaxis_play2[z_play2]=1180;
					site_Yaxis_play2[z_play2]=90;
					site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
					site_Yaxis_play2[z_play2+1]=60;
					site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]+30;
					site_Yaxis_play2[z_play2+2]=60;
					site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]-30;
					site_Yaxis_play2[z_play2+3]=90;	
					break;
					case 5:
					site_Xaxis_play2[z_play2]=1150;
					site_Yaxis_play2[z_play2]=90;
					site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
					site_Yaxis_play2[z_play2+1]=60;
					site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]+30;
					site_Yaxis_play2[z_play2+2]=60;
					site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+60;
					site_Yaxis_play2[z_play2+3]=60;
					break;
					case 6:
					site_Xaxis_play2[z_play2]=1210;
					site_Yaxis_play2[z_play2]=90;
					site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
					site_Yaxis_play2[z_play2+1]=60;
					site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]-30;
					site_Yaxis_play2[z_play2+2]=60;
					site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]-60;
					site_Yaxis_play2[z_play2+3]=60;		
					break;
					case 7:
					site_Xaxis_play2[z_play2]=1180;
					site_Yaxis_play2[z_play2]=90;
					site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
					site_Yaxis_play2[z_play2+1]=60;
					site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]-30;
					site_Yaxis_play2[z_play2+2]=90;
					site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+30;
					site_Yaxis_play2[z_play2+3]=90;			
					break;
				}
				a_play2=1; 
			}
}

void button(void)//按鍵移動 
{
	switch(directKey)
	        {
	        	case 97:  
	        	if(site_Xaxis[z]<=210||site_Xaxis[z+1]<=210||site_Xaxis[z+2]<=210||site_Xaxis[z+3]<=210)
	        	break;
				for (i=6;i<=25;i++)
				{
					for (j=1;j<=10;j++)
					{
						if (Hd[i][j]==1)
						{
							if (H[i][j-1]!=0)
							{
								q=1;
							}
						}
					}
				}
				if (q==0)
				{
					site_Xaxis[z]-=30;
					site_Xaxis[z+1]-=30;
					site_Xaxis[z+2]-=30;
					site_Xaxis[z+3]-=30;
				}
				q=0;
	            break;
	            
	            case 100:   
				if(site_Xaxis[z]>=480||site_Xaxis[z+1]>=480||site_Xaxis[z+2]>=480||site_Xaxis[z+3]>=480)
				break;		
				for (i=6;i<=25;i++)
				{
					for (j=1;j<=10;j++)
					{
						if (Hd[i][j]==1)
						{
							if (H[i][j+1]!=0)
							{
								p=1;
							}
						}
					}
				}
				if (p==0)
				{
					site_Xaxis[z]+=30;
					site_Xaxis[z+1]+=30;
					site_Xaxis[z+2]+=30;
					site_Xaxis[z+3]+=30;
				}
				p=0;
				break;
				
				case 115:  
	        	if(site_Yaxis[z]>=625||site_Yaxis[z+1]>=625||site_Yaxis[z+2]>=625||site_Yaxis[z+3]>=625)
	        	break;

					site_Yaxis[z]+=30;
					site_Yaxis[z+1]+=30;
					site_Yaxis[z+2]+=30;
					site_Yaxis[z+3]+=30;
					b=0;
								
	            break;
	            
	            case 119:
	            c+=1;
	            if(test==1)
	           	{
	            	if(c%10==1)
					{
						
						site_Xaxis[z+1]+=30;
						site_Yaxis[z+1]+=30;
						site_Xaxis[z+2]-=30; 
						site_Yaxis[z+2]-=30;
						site_Xaxis[z+3]-=60;
						site_Yaxis[z+3]-=60;
					} 
					if(c%10==2)
					{
						site_Xaxis[z+1]-=30;
						site_Yaxis[z+1]-=30;
						site_Xaxis[z+2]+=30;
						site_Yaxis[z+2]+=30;
						site_Xaxis[z+3]+=60;
						site_Yaxis[z+3]+=60;
						c=0;
					} 
	           	}
	            if(test==3)
	           	{
	           		if(c%10==1)
					{
						site_Yaxis[z]-=30;
						site_Xaxis[z+1]=site_Xaxis[z]+30;
						site_Xaxis[z+2]=site_Xaxis[z+1];
						site_Yaxis[z+2]=site_Yaxis[z+1]-30;
						site_Xaxis[z+3]=site_Xaxis[z];
						site_Yaxis[z+3]=site_Yaxis[z]+30;
					} 
					if(c%10==2)
					{			
						site_Yaxis[z]+=30;
						site_Xaxis[z+1]=site_Xaxis[z];
						site_Xaxis[z+2]=site_Xaxis[z]-30;
						site_Yaxis[z+2]=site_Yaxis[z]-30;
						site_Xaxis[z+3]=site_Xaxis[z]+30;
						site_Yaxis[z+3]=site_Yaxis[z];
						c=0;
					} 
	           	}
	           	if(test==4)
	           	{
	           		if(c%10==1)
					{
						site_Yaxis[z]-=30;
						site_Xaxis[z+1]=site_Xaxis[z]+30;
						site_Yaxis[z+2]=site_Yaxis[z+1]+30;
						site_Xaxis[z+3]=site_Xaxis[z];
						site_Yaxis[z+3]=site_Yaxis[z]-30;				
					} 
					if(c%10==2)
					{
						site_Yaxis[z]+=30;
						site_Xaxis[z+1]=site_Xaxis[z];
						site_Yaxis[z+2]-=30;
						site_Xaxis[z+3]=site_Xaxis[z]-30;
						site_Yaxis[z+3]=site_Yaxis[z];
						c=0;
					} 
				} 
				if(test==5)
	           	{
	           		if(c%10==1)
					{
						site_Xaxis[z]+=30;
						site_Yaxis[z+1]+=30;
						site_Xaxis[z+2]-=30;
						site_Xaxis[z+3]-=60;
						site_Yaxis[z+3]-=30;
					} 
					if(c%10==2)
					{
						site_Yaxis[z]-=30;
						site_Xaxis[z+1]+=30;
						site_Yaxis[z+2]+=30;
						site_Xaxis[z+3]-=30;
						site_Yaxis[z+3]+=60;
					} 
					if(c%10==3)
					{
						site_Xaxis[z]-=30;
						site_Yaxis[z+1]-=30;
						site_Xaxis[z+2]+=30;
						site_Xaxis[z+3]+=60;
						site_Yaxis[z+3]+=30;
					} 
					if(c%10==4)
					{
						site_Yaxis[z]+=30;
						site_Xaxis[z+1]-=30;
						site_Yaxis[z+2]-=30;
						site_Xaxis[z+3]+=30;
						site_Yaxis[z+3]-=60;
						c=0;
					} 
				}
				if(test==6)
	           	{
	           		if(c%10==1)
					{
						site_Xaxis[z]-=30;
						site_Yaxis[z+1]+=30;
						site_Xaxis[z+2]+=30;
						site_Xaxis[z+3]+=60;
						site_Yaxis[z+3]-=30;
					} 
					if(c%10==2)
					{
						site_Yaxis[z]-=30;
						site_Xaxis[z+1]-=30;
						site_Yaxis[z+2]+=30;
						site_Xaxis[z+3]+=30;
						site_Yaxis[z+3]+=60;
					} 
					if(c%10==3)
					{
						site_Xaxis[z]+=30;
						site_Yaxis[z+1]-=30;
						site_Xaxis[z+2]-=30;
						site_Xaxis[z+3]-=60;
						site_Yaxis[z+3]+=30;
					} 
					if(c%10==4)
					{
						site_Yaxis[z]+=30;
						site_Xaxis[z+1]+=30;
						site_Yaxis[z+2]-=30;
						site_Xaxis[z+3]-=30;
						site_Yaxis[z+3]-=60;
						c=0;
					} 
				}
				if(test==7)
	           	{
	           		if(c%10==1)
					{
						site_Xaxis[z+1]+=30;
						site_Yaxis[z+1]+=30;
						site_Xaxis[z+2]+=30;
						site_Yaxis[z+2]-=30;
						site_Xaxis[z+3]-=30;
						site_Yaxis[z+3]+=30;
					} 
					if(c%10==2)
					{
						site_Xaxis[z+1]-=30;
						site_Yaxis[z+1]+=30;
						site_Xaxis[z+2]+=30;
						site_Yaxis[z+2]+=30;
						site_Xaxis[z+3]-=30;
						site_Yaxis[z+3]-=30;
					} 
					if(c%10==3)
					{
						site_Xaxis[z+1]-=30;
						site_Yaxis[z+1]-=30;
						site_Xaxis[z+2]-=30;
						site_Yaxis[z+2]+=30;
						site_Xaxis[z+3]+=30;
						site_Yaxis[z+3]-=30;
					} 
					if(c%10==4)
					{
						site_Xaxis[z+1]+=30;
						site_Yaxis[z+1]-=30;
						site_Xaxis[z+2]-=30;
						site_Yaxis[z+2]-=30;
						site_Xaxis[z+3]+=30;
						site_Yaxis[z+3]+=30;
						c=0;
					} 
				}
				break;
					case 103:
					if(d==0)
					{
						PP=1;
						d=1;
						if(chang==0)
						{
							chang1=test;
							test=0;
							chang=chang1;
							x[xO]=0;
							c=0;	
							break;
						}
					
						else
						{
							switch (chang)
							{
							case 1:
								site_Xaxis[z]=330;
								site_Yaxis[z]=60;
								site_Xaxis[z+1]=site_Xaxis[z]-30;
								site_Yaxis[z+1]=60;
								site_Xaxis[z+2]=site_Xaxis[z]+30;
								site_Yaxis[z+2]=60;
								site_Xaxis[z+3]=site_Xaxis[z]+60;
								site_Yaxis[z+3]=60;
								break;
							case 2:
								site_Xaxis[z]=330;
								site_Yaxis[z]=90;
								site_Xaxis[z+1]=site_Xaxis[z]+30;
								site_Yaxis[z+1]=60;
								site_Xaxis[z+2]=site_Xaxis[z];
								site_Yaxis[z+2]=60;
								site_Xaxis[z+3]=site_Xaxis[z]+30;
								site_Yaxis[z+3]=90;
								break;
							case 3:
								site_Xaxis[z]=360;
								site_Yaxis[z]=90;
								site_Xaxis[z+1]=site_Xaxis[z];
								site_Yaxis[z+1]=60;
								site_Xaxis[z+2]=site_Xaxis[z]-30;
								site_Yaxis[z+2]=60;
								site_Xaxis[z+3]=site_Xaxis[z]+30;
								site_Yaxis[z+3]=90;
								break;
							case 4:
								site_Xaxis[z]=360;
								site_Yaxis[z]=90;
								site_Xaxis[z+1]=site_Xaxis[z];
								site_Yaxis[z+1]=60;
								site_Xaxis[z+2]=site_Xaxis[z]+30;
								site_Yaxis[z+2]=60;
								site_Xaxis[z+3]=site_Xaxis[z]-30;
								site_Yaxis[z+3]=90;
								break;	
							case 5:
								site_Xaxis[z]=330;
								site_Yaxis[z]=90;
								site_Xaxis[z+1]=site_Xaxis[z];
								site_Yaxis[z+1]=60;
								site_Xaxis[z+2]=site_Xaxis[z]+30;
								site_Yaxis[z+2]=60;
								site_Xaxis[z+3]=site_Xaxis[z]+60;
								site_Yaxis[z+3]=60;
								break;
							case 6:
								site_Xaxis[z]=390;
								site_Yaxis[z]=90;
								site_Xaxis[z+1]=site_Xaxis[z];
								site_Yaxis[z+1]=60;
								site_Xaxis[z+2]=site_Xaxis[z]-30;
								site_Yaxis[z+2]=60;
								site_Xaxis[z+3]=site_Xaxis[z]-60;
								site_Yaxis[z+3]=60;
								break;
							case 7:
								site_Xaxis[z]=360;
								site_Yaxis[z]=90;
								site_Xaxis[z+1]=site_Xaxis[z];
								site_Yaxis[z+1]=60;
								site_Xaxis[z+2]=site_Xaxis[z]-30;
								site_Yaxis[z+2]=90;
								site_Xaxis[z+3]=site_Xaxis[z]+30;
								site_Yaxis[z+3]=90;
								break;
						}
						x[xO]=chang;
						chang1=test;
						test=chang;
						chang=chang1;
						c=0;
						}
					
	           		}
	           		break;
	           		 	case 102:
						do
						{
						Hx=210;
						Hy=-90;
						for (i=1;i<=25;i++)
						{
							for (j=1;j<=10;j++)
							{
								Hd[i][j]=0;
							}
						}
						for (i=0;i<4;i++)
						{
							for (j=1;j<=10;j++)
							{
								if (site_Xaxis[z+i]==Hx)
								{
										for (k=1;k<=25;k++)
										{
											 if (site_Yaxis[z+i]==Hy)
											 {
											 	Hd[k][j]=z+i;
											 }
											 Hy=Hy+30;
										}
										Hy=-90;
								}
								Hx=Hx+30;
							}
							Hx=210; 
						}
						
						for (i=1;i<=25;i++)
						{
							for (j=1;j<=10;j++)
							{
								if (Hd[i][j]!=0)
								{
									if (H[i+1][j]!=0)
									{
										s=1;
									}
								}
							}
							
						}
						if (s==0)
						{
							for (j=24;j>=1;j--)
							{
								for (k=1;k<=10;k++)
								{
									Hd[j+1][k]=Hd[j][k];
									site_Yaxis[Hd[j+1][k]]=site_Yaxis[Hd[j+1][k]]+30;
								}
							}
						}
						}while(s==0);
						b=0;
						break;
	          //////////////////////////////////  	
	        	case 75:  
	        	if(site_Xaxis_play2[z_play2]<=1030||site_Xaxis_play2[z_play2+1]<=1030||site_Xaxis_play2[z_play2+2]<=1030||site_Xaxis_play2[z_play2+3]<=1030)
	        	break;
				for (i=6;i<=25;i++)
				{
					for (j=1;j<=10;j++)
					{
						if (Hd_play2[i][j]==1)
						{
							if (H_play2[i][j-1]!=0)
							{
								q_play2=1;
							}
						}
					}
				}
				if (q_play2==0)
				{
					site_Xaxis_play2[z_play2]-=30;
					site_Xaxis_play2[z_play2+1]-=30;
					site_Xaxis_play2[z_play2+2]-=30;
					site_Xaxis_play2[z_play2+3]-=30;
				}
				q_play2=0;
	            break;
	            
	            case 77:   
				if(site_Xaxis_play2[z_play2]>=1300||site_Xaxis_play2[z_play2+1]>=1300||site_Xaxis_play2[z_play2+2]>=1300||site_Xaxis_play2[z_play2+3]>=1300)
				break;		
				for (i=6;i<=25;i++)
				{
					for (j=1;j<=10;j++)
					{
						if (Hd_play2[i][j]==1)
						{
							if (H_play2[i][j+1]!=0)
							{
								p_play2=1;
							}
						}
					}
				}
				if (p_play2==0)
				{
					site_Xaxis_play2[z_play2]+=30;
					site_Xaxis_play2[z_play2+1]+=30;
					site_Xaxis_play2[z_play2+2]+=30;
					site_Xaxis_play2[z_play2+3]+=30;
				}
				p_play2=0;
					break;
				case 80:  
	        	if(site_Yaxis_play2[z_play2]>=625||site_Yaxis_play2[z_play2+1]>=625||site_Yaxis_play2[z_play2+2]>=625||site_Yaxis_play2[z_play2+3]>=625)
	        	break;

					site_Yaxis_play2[z_play2]+=30;
					site_Yaxis_play2[z_play2+1]+=30;
					site_Yaxis_play2[z_play2+2]+=30;
					site_Yaxis_play2[z_play2+3]+=30;
					b_play2=0;
								
	            break;
	            case 72:
	            	c_play2+=1;
	            	if(test_play2==1)
	            	{
	            		if(c_play2%10==1)
						{
						
							site_Xaxis_play2[z_play2+1]+=30;
							site_Yaxis_play2[z_play2+1]+=30;
							site_Xaxis_play2[z_play2+2]-=30; 
							site_Yaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]-=60;
							site_Yaxis_play2[z_play2+3]-=60;
						} 
						if(c_play2%10==2)
						{
							site_Xaxis_play2[z_play2+1]-=30;
							site_Yaxis_play2[z_play2+1]-=30;
							site_Xaxis_play2[z_play2+2]+=30;
							site_Yaxis_play2[z_play2+2]+=30;
							site_Xaxis_play2[z_play2+3]+=60;
							site_Yaxis_play2[z_play2+3]+=60;
							c_play2=0;
						} 
	            	}
	            	if(test_play2==3)
	            	{
	            		if(c_play2%10==1)
						{
							site_Yaxis_play2[z_play2]-=30;
							site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2]+30;
							site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2+1];
							site_Yaxis_play2[z_play2+2]=site_Yaxis_play2[z_play2+1]-30;
							site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2];
							site_Yaxis_play2[z_play2+3]=site_Yaxis_play2[z_play2]+30;
						} 
						if(c_play2%10==2)
						{
							
							site_Yaxis_play2[z_play2]+=30;
							site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
							site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]-30;
							site_Yaxis_play2[z_play2+2]=site_Yaxis_play2[z_play2]-30;
							site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+30;
							site_Yaxis_play2[z_play2+3]=site_Yaxis_play2[z_play2];
								c_play2=0;
						} 
	            	}
	            	if(test_play2==4)
	            	{
	            		if(c_play2%10==1)
						{
							site_Yaxis_play2[z_play2]-=30;
							site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2]+30;
							site_Yaxis_play2[z_play2+2]=site_Yaxis_play2[z_play2+1]+30;
							site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2];
							site_Yaxis_play2[z_play2+3]=site_Yaxis_play2[z_play2]-30;
							
						} 
						if(c_play2%10==2)
						{
							site_Yaxis_play2[z_play2]+=30;
							site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
							site_Yaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]-30;
							site_Yaxis_play2[z_play2+3]=site_Yaxis_play2[z_play2];
							c_play2=0;
						} 
					} 
					if(test_play2==5)
	            	{
	            		if(c_play2%10==1)
						{
							site_Xaxis_play2[z_play2]+=30;
							site_Yaxis_play2[z_play2+1]+=30;
							site_Xaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]-=60;
							site_Yaxis_play2[z_play2+3]-=30;
						} 
						if(c_play2%10==2)
						{
							site_Yaxis_play2[z_play2]-=30;
							site_Xaxis_play2[z_play2+1]+=30;
							site_Yaxis_play2[z_play2+2]+=30;
							site_Xaxis_play2[z_play2+3]-=30;
							site_Yaxis_play2[z_play2+3]+=60;
						} 
						if(c_play2%10==3)
						{
							site_Xaxis_play2[z_play2]-=30;
							site_Yaxis_play2[z_play2+1]-=30;
							site_Xaxis_play2[z_play2+2]+=30;
							site_Xaxis_play2[z_play2+3]+=60;
							site_Yaxis_play2[z_play2+3]+=30;
						} 
						if(c_play2%10==4)
						{
							site_Yaxis_play2[z_play2]+=30;
							site_Xaxis_play2[z_play2+1]-=30;
							site_Yaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]+=30;
							site_Yaxis_play2[z_play2+3]-=60;
							c_play2=0;
						} 
					}
					if(test_play2==6)
	            	{
	            		if(c_play2%10==1)
						{
							site_Xaxis_play2[z_play2]-=30;
							site_Yaxis_play2[z_play2+1]+=30;
							site_Xaxis_play2[z_play2+2]+=30;
							site_Xaxis_play2[z_play2+3]+=60;
							site_Yaxis_play2[z_play2+3]-=30;
						} 
						if(c_play2%10==2)
						{
							site_Yaxis_play2[z_play2]-=30;
							site_Xaxis_play2[z_play2+1]-=30;
							site_Yaxis_play2[z_play2+2]+=30;
							site_Xaxis_play2[z_play2+3]+=30;
							site_Yaxis_play2[z_play2+3]+=60;
						} 
						if(c_play2%10==3)
						{
							site_Xaxis_play2[z_play2]+=30;
							site_Yaxis_play2[z_play2+1]-=30;
							site_Xaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]-=60;
							site_Yaxis_play2[z_play2+3]+=30;
						} 
						if(c_play2%10==4)
						{
							site_Yaxis_play2[z_play2]+=30;
							site_Xaxis_play2[z_play2+1]+=30;
							site_Yaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]-=30;
							site_Yaxis_play2[z_play2+3]-=60;
							c_play2=0;
						} 
					}
					if(test_play2==7)
	            	{
	            		if(c_play2%10==1)
						{
							site_Xaxis_play2[z_play2+1]+=30;
							site_Yaxis_play2[z_play2+1]+=30;
							site_Xaxis_play2[z_play2+2]+=30;
							site_Yaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]-=30;
							site_Yaxis_play2[z_play2+3]+=30;
						} 
						if(c_play2%10==2)
						{
							site_Xaxis_play2[z_play2+1]-=30;
							site_Yaxis_play2[z_play2+1]+=30;
							site_Xaxis_play2[z_play2+2]+=30;
							site_Yaxis_play2[z_play2+2]+=30;
							site_Xaxis_play2[z_play2+3]-=30;
							site_Yaxis_play2[z_play2+3]-=30;
						} 
						if(c_play2%10==3)
						{
							site_Xaxis_play2[z_play2+1]-=30;
							site_Yaxis_play2[z_play2+1]-=30;
							site_Xaxis_play2[z_play2+2]-=30;
							site_Yaxis_play2[z_play2+2]+=30;
							site_Xaxis_play2[z_play2+3]+=30;
							site_Yaxis_play2[z_play2+3]-=30;
						} 
						if(c_play2%10==4)
						{
							site_Xaxis_play2[z_play2+1]+=30;
							site_Yaxis_play2[z_play2+1]-=30;
							site_Xaxis_play2[z_play2+2]-=30;
							site_Yaxis_play2[z_play2+2]-=30;
							site_Xaxis_play2[z_play2+3]+=30;
							site_Yaxis_play2[z_play2+3]+=30;
							c_play2=0;
						} 
					}
					break;
					case 46:
					if(d_play2==0)
					{
						PP_play2=1;
						d_play2=1;
						if(chang_play2==0)
						{
							chang1_play2=test_play2;
							test_play2=chang_play2;
							chang_play2=chang1_play2;
							x_play2[xO_play2]=0;
							c_play2=0;
							break;
						}
					
						else
						{
							switch (chang_play2)
							{
							case 1:
								site_Xaxis_play2[z_play2]=1150;
								site_Yaxis_play2[z_play2]=60;
								site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2]-30;
								site_Yaxis_play2[z_play2+1]=60;
								site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]+30;
								site_Yaxis_play2[z_play2+2]=60;
								site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+60;
								site_Yaxis_play2[z_play2+3]=60;
								break;
							case 2:
								site_Xaxis_play2[z_play2]=1150;
								site_Yaxis_play2[z_play2]=90;
								site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2]+30;
								site_Yaxis_play2[z_play2+1]=60;
								site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2];
								site_Yaxis_play2[z_play2+2]=60;
								site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+30;
								site_Yaxis_play2[z_play2+3]=90;
								break;
							case 3:
								site_Xaxis_play2[z_play2]=1180;
								site_Yaxis_play2[z_play2]=90;
								site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
								site_Yaxis_play2[z_play2+1]=60;
								site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]-30;
								site_Yaxis_play2[z_play2+2]=60;
								site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+30;
								site_Yaxis_play2[z_play2+3]=90;
								break;
							case 4:
								site_Xaxis_play2[z_play2]=1180;
								site_Yaxis_play2[z_play2]=90;
								site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
								site_Yaxis_play2[z_play2+1]=60;
								site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]+30;
								site_Yaxis_play2[z_play2+2]=60;
								site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]-30;
								site_Yaxis_play2[z_play2+3]=90;
								break;	
							case 5:
								site_Xaxis_play2[z_play2]=1150;
								site_Yaxis_play2[z_play2]=90;
								site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
								site_Yaxis_play2[z_play2+1]=60;
								site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]+30;
								site_Yaxis_play2[z_play2+2]=60;
								site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+60;
								site_Yaxis_play2[z_play2+3]=60;
								break;
							case 6:
								site_Xaxis_play2[z_play2]=1210;
								site_Yaxis_play2[z_play2]=90;
								site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
								site_Yaxis_play2[z_play2+1]=60;
								site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]-30;
								site_Yaxis_play2[z_play2+2]=60;
								site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]-60;
								site_Yaxis_play2[z_play2+3]=60;
								break;
							case 7:
								site_Xaxis_play2[z_play2]=1180;
								site_Yaxis_play2[z_play2]=90;
								site_Xaxis_play2[z_play2+1]=site_Xaxis_play2[z_play2];
								site_Yaxis_play2[z_play2+1]=60;
								site_Xaxis_play2[z_play2+2]=site_Xaxis_play2[z_play2]-30;
								site_Yaxis_play2[z_play2+2]=90;
								site_Xaxis_play2[z_play2+3]=site_Xaxis_play2[z_play2]+30;
								site_Yaxis_play2[z_play2+3]=90;
								break;
							}
						x_play2[xO_play2]=chang_play2;
						chang1_play2=test_play2;
						test_play2=chang_play2;
						chang_play2=chang1_play2;
						c_play2=0;
						}
					
	           		}
	           		break;
	           		 	case 48:
						do
						{
						Hx_play2=1030;
						Hy_play2=-90;
						for (i=1;i<=25;i++)
						{
							for (j=1;j<=10;j++)
							{
								Hd_play2[i][j]=0;
							}
						}
						for (i=0;i<4;i++)
						{
							for (j=1;j<=10;j++)
							{
								if (site_Xaxis_play2[z_play2+i]==Hx_play2)
								{
										for (k=1;k<=25;k++)
										{
											 if (site_Yaxis_play2[z_play2+i]==Hy_play2)
											 {
											 	Hd_play2[k][j]=z_play2+i;
											 }
											 Hy_play2=Hy_play2+30;
										}
										Hy_play2=-90;
								}
								Hx_play2=Hx_play2+30;
							}
							Hx_play2=1030; 
						}
						
						for (i=1;i<=25;i++)
						{
							for (j=1;j<=10;j++)
							{
								if (Hd_play2[i][j]!=0)
								{
									if (H_play2[i+1][j]!=0)
									{
										s_play2=1;
									}
								}
							}
							
						}
						if (s_play2==0)
						{
							for (j=24;j>=1;j--)
							{
								for (k=1;k<=10;k++)
								{
									Hd_play2[j+1][k]=Hd_play2[j][k];
									site_Yaxis_play2[Hd_play2[j+1][k]]=site_Yaxis_play2[Hd_play2[j+1][k]]+30;
								}
							}
						}
						}while(s_play2==0);
						b_play2=0;
						break;
	            	
	        }	
}

void nextt (void)//看到之後的方塊 
{
	
		switch (test1_play2)
			{
				case 1:
				Imagenext2=cvLoadImage("blue.png");
				ImageMasknext2=cvLoadImage("blue.png",0);
				cvThreshold(ImageMasknext2,ImageMasknext2,254,255,CV_THRESH_BINARY_INV);
				nxt_play2[0]=520+820;
				nxt_play2[1]=100;
				nxt_play2[2]=550+820;
				nxt_play2[3]=100;
				nxt_play2[4]=580+820;
				nxt_play2[5]=100;
				nxt_play2[6]=610+820;
				nxt_play2[7]=100;
				break;
				case 2:
				Imagenext2=cvLoadImage("yellow.png");
				ImageMasknext2=cvLoadImage("yellow.png",0);
				cvThreshold(ImageMasknext2,ImageMasknext2,254,255,CV_THRESH_BINARY_INV);
				nxt_play2[0]=550+820;
				nxt_play2[1]=90;
				nxt_play2[2]=580+820;
				nxt_play2[3]=90;
				nxt_play2[4]=550+820;
				nxt_play2[5]=120;
				nxt_play2[6]=580+820;
				nxt_play2[7]=120;
				break;
				case 3:
				Imagenext2=cvLoadImage("red.png");
				ImageMasknext2=cvLoadImage("red.png",0);
				cvThreshold(ImageMasknext2,ImageMasknext2,254,255,CV_THRESH_BINARY_INV);	
				nxt_play2[0]=530+820;
				nxt_play2[1]=70;
				nxt_play2[2]=560+820;
				nxt_play2[3]=70;
				nxt_play2[4]=560+820;
				nxt_play2[5]=100;
				nxt_play2[6]=590+820;
				nxt_play2[7]=100;
				break;
				case 4:
				Imagenext2=cvLoadImage("green.png");
				ImageMasknext2=cvLoadImage("green.png",0);
				cvThreshold(ImageMasknext2,ImageMasknext2,254,255,CV_THRESH_BINARY_INV);	
				nxt_play2[0]=530+820;
				nxt_play2[1]=100;
				nxt_play2[2]=560+820;
				nxt_play2[3]=100;
				nxt_play2[4]=560+820;
				nxt_play2[5]=70;
				nxt_play2[6]=590+820;
				nxt_play2[7]=70;
				break;
				case 5:
				Imagenext2=cvLoadImage("orange.png");
				ImageMasknext2=cvLoadImage("orange.png",0);
				cvThreshold(ImageMasknext2,ImageMasknext2,254,255,CV_THRESH_BINARY_INV);	
				nxt_play2[0]=530+820;
				nxt_play2[1]=100;
				nxt_play2[2]=530+820;
				nxt_play2[3]=70;
				nxt_play2[4]=560+820;
				nxt_play2[5]=70;
				nxt_play2[6]=590+820;
				nxt_play2[7]=70;
				break;
				case 6:
				Imagenext2=cvLoadImage("Cerulean Blue.png");
				ImageMasknext2=cvLoadImage("Cerulean Blue.png",0);
				cvThreshold(ImageMasknext2,ImageMasknext2,254,255,CV_THRESH_BINARY_INV);	
				nxt_play2[0]=590+820;
				nxt_play2[1]=100;
				nxt_play2[2]=530+820;
				nxt_play2[3]=70;
				nxt_play2[4]=560+820;
				nxt_play2[5]=70;
				nxt_play2[6]=590+820;
				nxt_play2[7]=70;
				break;
				case 7:
				Imagenext2=cvLoadImage("Purple.png");
				ImageMasknext2=cvLoadImage("Purple.png",0);
				cvThreshold(ImageMasknext2,ImageMasknext2,254,255,CV_THRESH_BINARY_INV);	
				nxt_play2[0]=530+820;
				nxt_play2[1]=100;
				nxt_play2[2]=560+820;
				nxt_play2[3]=100;
				nxt_play2[4]=590+820;
				nxt_play2[5]=100;
				nxt_play2[6]=560+820;
				nxt_play2[7]=70;
				break;
			}
			switch (test2_play2)
			{
				case 1:
				Imagenext3=cvLoadImage("blue.png");
				ImageMasknext3=cvLoadImage("blue.png",0);
				cvThreshold(ImageMasknext3,ImageMasknext3,254,255,CV_THRESH_BINARY_INV);
				nxt1_play2[0]=520+820;
				nxt1_play2[1]=210;
				nxt1_play2[2]=550+820;
				nxt1_play2[3]=210;
				nxt1_play2[4]=580+820;
				nxt1_play2[5]=210;
				nxt1_play2[6]=610+820;
				nxt1_play2[7]=210;
				break;
				case 2:
				Imagenext3=cvLoadImage("yellow.png");
				ImageMasknext3=cvLoadImage("yellow.png",0);
				cvThreshold(ImageMasknext3,ImageMasknext3,254,255,CV_THRESH_BINARY_INV);
				nxt1_play2[0]=550+820;
				nxt1_play2[1]=200;
				nxt1_play2[2]=580+820;
				nxt1_play2[3]=200;
				nxt1_play2[4]=550+820;
				nxt1_play2[5]=230;
				nxt1_play2[6]=580+820;
				nxt1_play2[7]=230;
				break;
				case 3:
				Imagenext3=cvLoadImage("red.png");
				ImageMasknext3=cvLoadImage("red.png",0);
				cvThreshold(ImageMasknext3,ImageMasknext3,254,255,CV_THRESH_BINARY_INV);	
				nxt1_play2[0]=530+820;
				nxt1_play2[1]=210;
				nxt1_play2[2]=560+820;
				nxt1_play2[3]=210;
				nxt1_play2[4]=560+820;
				nxt1_play2[5]=240;
				nxt1_play2[6]=590+820;
				nxt1_play2[7]=240;
				break;
				case 4:
				Imagenext3=cvLoadImage("green.png");
				ImageMasknext3=cvLoadImage("green.png",0);
				cvThreshold(ImageMasknext3,ImageMasknext3,254,255,CV_THRESH_BINARY_INV);	
				nxt1_play2[0]=530+820;
				nxt1_play2[1]=240;
				nxt1_play2[2]=560+820;
				nxt1_play2[3]=240;
				nxt1_play2[4]=560+820;
				nxt1_play2[5]=210;
				nxt1_play2[6]=590+820;
				nxt1_play2[7]=210;
				break;
				case 5:
				Imagenext3=cvLoadImage("orange.png");
				ImageMasknext3=cvLoadImage("orange.png",0);
				cvThreshold(ImageMasknext3,ImageMasknext3,254,255,CV_THRESH_BINARY_INV);	
				nxt1_play2[0]=530+820;
				nxt1_play2[1]=240;
				nxt1_play2[2]=530+820;
				nxt1_play2[3]=210;
				nxt1_play2[4]=560+820;
				nxt1_play2[5]=210;
				nxt1_play2[6]=590+820;
				nxt1_play2[7]=210;
				break;
				case 6:
				Imagenext3=cvLoadImage("Cerulean Blue.png");
				ImageMasknext3=cvLoadImage("Cerulean Blue.png",0);
				cvThreshold(ImageMasknext3,ImageMasknext3,254,255,CV_THRESH_BINARY_INV);	
				nxt1_play2[0]=590+820;
				nxt1_play2[1]=240;
				nxt1_play2[2]=530+820;
				nxt1_play2[3]=210;
				nxt1_play2[4]=560+820;
				nxt1_play2[5]=210;
				nxt1_play2[6]=590+820;
				nxt1_play2[7]=210;
				break;
				case 7:
				Imagenext3=cvLoadImage("Purple.png");
				ImageMasknext3=cvLoadImage("Purple.png",0);
				cvThreshold(ImageMasknext3,ImageMasknext3,254,255,CV_THRESH_BINARY_INV);	
				nxt1_play2[0]=530+820;
				nxt1_play2[1]=240;
				nxt1_play2[2]=560+820;
				nxt1_play2[3]=240;
				nxt1_play2[4]=590+820;
				nxt1_play2[5]=240;
				nxt1_play2[6]=560+820;
				nxt1_play2[7]=210;
				break;
			}
			switch (test1)
			{
				case 1:
				Imagenext=cvLoadImage("blue.png");
				ImageMasknext=cvLoadImage("blue.png",0);
				cvThreshold(ImageMasknext,ImageMasknext,254,255,CV_THRESH_BINARY_INV);
				nxt[0]=520;
				nxt[1]=100;
				nxt[2]=550;
				nxt[3]=100;
				nxt[4]=580;
				nxt[5]=100;
				nxt[6]=610;
				nxt[7]=100;
				break;
				case 2:
				Imagenext=cvLoadImage("yellow.png");
				ImageMasknext=cvLoadImage("yellow.png",0);
				cvThreshold(ImageMasknext,ImageMasknext,254,255,CV_THRESH_BINARY_INV);
				nxt[0]=550;
				nxt[1]=90;
				nxt[2]=580;
				nxt[3]=90;
				nxt[4]=550;
				nxt[5]=120;
				nxt[6]=580;
				nxt[7]=120;
				break;
				case 3:
				Imagenext=cvLoadImage("red.png");
				ImageMasknext=cvLoadImage("red.png",0);
				cvThreshold(ImageMasknext,ImageMasknext,254,255,CV_THRESH_BINARY_INV);	
				nxt[0]=530;
				nxt[1]=70;
				nxt[2]=560;
				nxt[3]=70;
				nxt[4]=560;
				nxt[5]=100;
				nxt[6]=590;
				nxt[7]=100;
				break;
				case 4:
				Imagenext=cvLoadImage("green.png");
				ImageMasknext=cvLoadImage("green.png",0);
				cvThreshold(ImageMasknext,ImageMasknext,254,255,CV_THRESH_BINARY_INV);	
				nxt[0]=530;
				nxt[1]=100;
				nxt[2]=560;
				nxt[3]=100;
				nxt[4]=560;
				nxt[5]=70;
				nxt[6]=590;
				nxt[7]=70;
				break;
				case 5:
				Imagenext=cvLoadImage("orange.png");
				ImageMasknext=cvLoadImage("orange.png",0);
				cvThreshold(ImageMasknext,ImageMasknext,254,255,CV_THRESH_BINARY_INV);	
				nxt[0]=530;
				nxt[1]=100;
				nxt[2]=530;
				nxt[3]=70;
				nxt[4]=560;
				nxt[5]=70;
				nxt[6]=590;
				nxt[7]=70;
				break;
				case 6:
				Imagenext=cvLoadImage("Cerulean Blue.png");
				ImageMasknext=cvLoadImage("Cerulean Blue.png",0);
				cvThreshold(ImageMasknext,ImageMasknext,254,255,CV_THRESH_BINARY_INV);	
				nxt[0]=590;
				nxt[1]=100;
				nxt[2]=530;
				nxt[3]=70;
				nxt[4]=560;
				nxt[5]=70;
				nxt[6]=590;
				nxt[7]=70;
				break;
				case 7:
				Imagenext=cvLoadImage("Purple.png");
				ImageMasknext=cvLoadImage("Purple.png",0);
				cvThreshold(ImageMasknext,ImageMasknext,254,255,CV_THRESH_BINARY_INV);	
				nxt[0]=530;
				nxt[1]=100;
				nxt[2]=560;
				nxt[3]=100;
				nxt[4]=590;
				nxt[5]=100;
				nxt[6]=560;
				nxt[7]=70;
				break;
			}
			switch (test2)
			{
				case 1:
				Imagenext1=cvLoadImage("blue.png");
				ImageMasknext1=cvLoadImage("blue.png",0);
				cvThreshold(ImageMasknext1,ImageMasknext1,254,255,CV_THRESH_BINARY_INV);
				nxt1[0]=520;
				nxt1[1]=210;
				nxt1[2]=550;
				nxt1[3]=210;
				nxt1[4]=580;
				nxt1[5]=210;
				nxt1[6]=610;
				nxt1[7]=210;
				break;
				case 2:
				Imagenext1=cvLoadImage("yellow.png");
				ImageMasknext1=cvLoadImage("yellow.png",0);
				cvThreshold(ImageMasknext1,ImageMasknext1,254,255,CV_THRESH_BINARY_INV);
				nxt1[0]=550;
				nxt1[1]=200;
				nxt1[2]=580;
				nxt1[3]=200;
				nxt1[4]=550;
				nxt1[5]=230;
				nxt1[6]=580;
				nxt1[7]=230;
				break;
				case 3:
				Imagenext1=cvLoadImage("red.png");
				ImageMasknext1=cvLoadImage("red.png",0);
				cvThreshold(ImageMasknext1,ImageMasknext1,254,255,CV_THRESH_BINARY_INV);	
				nxt1[0]=530;
				nxt1[1]=210;
				nxt1[2]=560;
				nxt1[3]=210;
				nxt1[4]=560;
				nxt1[5]=240;
				nxt1[6]=590;
				nxt1[7]=240;
				break;
				case 4:
				Imagenext1=cvLoadImage("green.png");
				ImageMasknext1=cvLoadImage("green.png",0);
				cvThreshold(ImageMasknext1,ImageMasknext1,254,255,CV_THRESH_BINARY_INV);	
				nxt1[0]=530;
				nxt1[1]=240;
				nxt1[2]=560;
				nxt1[3]=240;
				nxt1[4]=560;
				nxt1[5]=210;
				nxt1[6]=590;
				nxt1[7]=210;
				break;
				case 5:
				Imagenext1=cvLoadImage("orange.png");
				ImageMasknext1=cvLoadImage("orange.png",0);
				cvThreshold(ImageMasknext1,ImageMasknext1,254,255,CV_THRESH_BINARY_INV);	
				nxt1[0]=530;
				nxt1[1]=240;
				nxt1[2]=530;
				nxt1[3]=210;
				nxt1[4]=560;
				nxt1[5]=210;
				nxt1[6]=590;
				nxt1[7]=210;
				break;
				case 6:
				Imagenext1=cvLoadImage("Cerulean Blue.png");
				ImageMasknext1=cvLoadImage("Cerulean Blue.png",0);
				cvThreshold(ImageMasknext1,ImageMasknext1,254,255,CV_THRESH_BINARY_INV);	
				nxt1[0]=590;
				nxt1[1]=240;
				nxt1[2]=530;
				nxt1[3]=210;
				nxt1[4]=560;
				nxt1[5]=210;
				nxt1[6]=590;
				nxt1[7]=210;
				break;
				case 7:
				Imagenext1=cvLoadImage("Purple.png");
				ImageMasknext1=cvLoadImage("Purple.png",0);
				cvThreshold(ImageMasknext1,ImageMasknext1,254,255,CV_THRESH_BINARY_INV);	
				nxt1[0]=530;
				nxt1[1]=240;
				nxt1[2]=560;
				nxt1[3]=240;
				nxt1[4]=590;
				nxt1[5]=240;
				nxt1[6]=560;
				nxt1[7]=210;
				break;
			}
} 													
					
