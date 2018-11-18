#include<reg51.h>

sbit Rp=P2^1;
sbit Rn=P2^0;
sbit Lp=P2^3;
sbit Ln=P2^2;

void main() {
	P1=0xFF;
	P2=0xFF;
	while(1) {
		if(P1==0xF2) {
			Rp=0; Rn=1;
			Lp=1; Ln=0;
			while(P1==0xF2);
		}
		else if(P1==0xF8) {
			Rp=1; Rn=0;
			Lp=0; Ln=1;
			while(P1==0xF8);
		}
		else if(P1==0xF5) {
			Rp=1; Rn=1;
			Lp=1; Ln=1;
			while(P1==0xF5);
		}
		else if(P1==0xF4) {
			Rp=1; Rn=0;
			Lp=1; Ln=0;
			while(P1==0xF4);
		}
		else if(P1==0xF6) {
			Rp=0; Rn=1;
			Lp=0; Ln=1;
			while(P1==0xF6);
		}
	}
}
