#include <stdio.h>
int main(){
	
	float pp,p1,p2,p3,pp1,pp2,pp3;
	
	
	printf("Get the price of the first item : ");
	scanf("%f",&pp);
	
	
	p1=pp;
	p1=p1+(p1*0.07);
		printf("Price plus 7 percent VAT = %.0f\n",p1);
	pp1=p1*0.05;
	p1=p1-pp1;
	
	
	printf("Buy 1 item, get 5 Percent discount = %.0f\n",p1);
	
		p2=pp;
		p2=p2+(p2*0.07);
		p2=p2*2 ;
	pp2=(p2*0.15);
	p2=p2-pp2;
	
		printf("Buy 2 item, get 15 Percent discount = %.0f\n",p2);
		
			p3=pp;
			p3=p3+(p3*0.07);
		p3=p3*3 ;
	pp3=(p3*0.30);
	p3=p3-pp3;
		printf("Buy 3 item, get 30 Percent discount = %.0f\n",p3);
///////	////////////////////////////////////////////////////////////////////////////////////////////
	printf("                     \n");
	float s,p12,p22,p32,pp12,pp22,pp32;
	
		printf("Get the price of the second item : ");
	scanf("%f",&s);
	
	p12=s;
		p12=p12+(p12*0.07);
		printf("Price plus 7 percent VAT = %.0f\n",p12);
	pp12=p12*0.05;
	p12=p12-pp12;
	
	
	printf("Buy 1 item, get 5 Percent discount = %.0f\n",p12);
	
		p22=s;
			p22=p22+(p12*0.07);
		p22=p22*2 ;
	pp22=(p22*0.15);
	p22=p22-pp22;
	
		printf("Buy 2 item, get 15 Percent discount = %.0f\n",p22);
		
			p32=s;
				p32=p32+(p32*0.07) ;
		p32=p32*3 ;
	pp32=(p32*0.30);
	p32=p32-pp32;
		printf("Buy 3 item, get 30 Percent discount = %.0f\n",p32);
	
	///////	////////////////////////////////////////////////////////////////////////////////////////////
	
	printf("                     \n");
	
		float a,p123,p223,p323,pp123,pp223,pp323;
	
		printf("Get the price of the second item : ");
	scanf("%f",&a);
	
	p123=a;
	p123=p123+(p123*0.07);
		printf("Price plus 7 percent VAT = %.0f\n",p123);
	pp123=p123*0.05;
	p123=p123-pp123;
	
	
	printf("Buy 1 item, get 5 Percent discount = %.0f\n",p123);
	
		p223=a;
		p223=p223+(p223*0.07);
		p223=p223*2 ;
	pp223=(p223*0.15);
	p223=p223-pp223;
	
		printf("Buy 2 item, get 15 Percent discount = %.0f\n",p223);
		
			p323=a;
			p323=p323+(p323*0.07);
		p323=p323*3 ;
	pp323=(p323*0.30);
	p323=p323-pp323;
		printf("Buy 3 item, get 30 Percent discount = %.0f\n",p323);
	
}
