void start(){
	int gdrive=DETECT,gmode;
	initgraph(&gdrive,&gmode,"c:\\turboc3\\bgi");

	delay(2000);
	T(50,50); delay(100);
	I(); delay(100);
	C(160,50);delay(100);
	T(300,50); delay(100);
	A();delay(100);
	C(455,50);delay(100);
	T(160,200);delay(100);
	O();delay(100);
	C(250,200);delay(100);
	E();delay(200);

	for(int q=0;q<5;q++){
		SCR(80,235);
		SCR(470,235);
		CIR(235);
	}
	closegraph();
}
