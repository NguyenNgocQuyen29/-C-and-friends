//viet tro choi bao dá kéo voi luat choi: bao thang dá,da thang keo,keo thang bao.Nguoi
//dung nhap vao 1 trong 3 ky tu b,d,k may tinh sinh ngau nhien mot trong ba ket qua choi
//thong bao kêt qua choi
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
	char human,computer; //nhap ki tu nen kieu char
	unsigned h,c; //h:diem cua nguoi choi, c:diem cua may
	
	srand(time(NULL));   //hien ngay va gio thoi gian thuc
	h = c = 0;           //dau tien cho diem may va nguoi bang 0
	while(1){
		printf("Nhap ki tu (b-d-k), ky tu khac de thoat: ");
		scanf("%c", &human);
		while(getchar() != '\n'){}      //fflush(stdin)
		switch(human){
			case 'b'://b la bao
				switch(rand() % 3){
					case 0: computer = 'b'; break;
					case 1: computer = 'd'; h++; break;
					case 2: computer = 'k'; c++; break;
				}
				break;
			case 'd':
				switch(rand()%3){
					case 0: computer = 'b'; c++;break;
					case 1: computer = 'd'; break;
					case 2: computer = 'k'; h++;break;
				}
				break;
			case 'k':
				switch(rand()%3)
				{
					case 0: computer = 'k';break;
					case 1: computer = 'b';h++;break;
					case 2: computer = 'd';c++;break;
				}
				break;
			default: return 0;
			
		}
		printf("Computer: %c\n",computer);
		printf("Ty so: %u - %u\n", h, c);
		
		
	}
}



















//Trong C ,khi sinh so ngau nhien ta dung ham: srand()thiet lap "mam ngau nhien" cho loat so ngau nhien
//sinh boi ham rand(). Thong thuong thuong de co mam ngau nhien ta cho tham so cho srand() la ham time(NULL) thuoc thu vien time.h
//ham nay tra ve ngay va gio hien tai duoi dang so nguyen

//ham rand dung de sinh so ngau nhien tu 0 và RAND_MAX(32767)
//DE SINH SO NGAU NHIEN TRONG DOAN[0,N) TA DUNG rand() % n

//fflush(stdin),dung de súc vung  dem chuan stdin de loai ki tu \n con sot trong lan nhap truoc
//neu khong dung thi ki tu \n se con sot trong lan nhap ke tiep lam sai ket qua nhap
//fflush() goi tren stdin co the co hanh vi khong xd tren linux nen ta thay dong lenh nay thanh
//while(getchar() !='\n'){}
//dôi luc cung dung: scanf("%c%*c", &human) de bo qua ki tu  \n
