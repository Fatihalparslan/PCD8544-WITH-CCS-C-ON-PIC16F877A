
#ifndef 8544_C
#define 8544_C

#ifndef SCE
#define SCE pin_b1 
#endif

#ifndef RST
#define RST pin_b2
#endif

#ifndef DC
#define DC pin_b3
#endif

#ifndef DIN
#define DIN pin_b4
#endif

#ifndef SCLK
#define SCLK pin_b5
#endif

const char karakter_tablosu[68][5]={
            {0x14,0x08,0x3e,0x08,0x14},   // *
            {0x00,0x00,0x00,0x00,0x00},   //  boşluk
            {0x02,0x05,0x05,0x02,0x00},   // ^ derece işareti
            {0x40,0x40,0x40,0x40,0x40},   //  _
            {0x08,0x08,0x3e,0x08,0x08},   //  +
            {0x08,0x08,0x08,0x08,0x08},   //  -
            {0x20,0x10,0x08,0x04,0x02},   //  /
            {0x3e,0x51,0x49,0x45,0x3e},   //  0
            {0x00,0x42,0x7f,0x40,0x00},   //  1
            {0x42,0x61,0x51,0x49,0x46},   //  2
            {0x21,0x41,0x45,0x4b,0x31},   //  3
            {0x18,0x14,0x12,0x7f,0x10},   //  4
            {0x27,0x45,0x45,0x45,0x39},   //  5
            {0x3c,0x4a,0x49,0x49,0x30},   //  6
            {0x01,0x71,0x09,0x05,0x03},   //  7
            {0x36,0x49,0x49,0x49,0x36},   //  8
            {0x06,0x49,0x49,0x29,0x1e},   //  9
            {0x7e,0x11,0x11,0x11,0x7e},   //  A
            {0x7f,0x49,0x49,0x49,0x36},   //  B
            {0x3e,0x41,0x41,0x41,0x22},   //  C
            {0x7f,0x41,0x41,0x22,0x1c},   //  D
            {0x7f,0x49,0x49,0x49,0x41},   //  E
            {0x7f,0x09,0x09,0x09,0x01},   //  F
            {0x3e,0x41,0x49,0x49,0x7a},   //  G
            {0x7f,0x08,0x08,0x08,0x7f},   //  H
            {0x00,0x41,0x7f,0x41,0x00},   //  I
            {0x20,0x40,0x41,0x3f,0x01},   //  J
            {0x7f,0x08,0x14,0x22,0x41},   //  K
            {0x7f,0x40,0x40,0x40,0x40},   //  L
            {0x7f,0x02,0x0c,0x02,0x7f},   //  M
            {0x7f,0x04,0x08,0x10,0x7f},   //  N
            {0x3e,0x41,0x41,0x41,0x3e},   //  O
            {0x7f,0x09,0x09,0x09,0x06},   //  P
            {0x3e,0x41,0x51,0x21,0x5e},   //  Q
            {0x7f,0x09,0x19,0x29,0x46},   //  R
            {0x46,0x49,0x49,0x49,0x31},   //  S
            {0x01,0x01,0x7f,0x01,0x01},   //  T
            {0x3f,0x40,0x40,0x40,0x3f},   //  U
            {0x1f,0x20,0x40,0x20,0x1f},   //  V
            {0x3f,0x40,0x38,0x40,0x3f},   //  W
            {0x63,0x14,0x08,0x14,0x63},   //  X
            {0x07,0x08,0x70,0x08,0x07},   //  Y
            {0x61,0x51,0x49,0x45,0x43},   //  Z
            {0x20,0x54,0x54,0x54,0x78},   //  a
            {0x7f,0x48,0x44,0x44,0x38},   //  b
            {0x38,0x44,0x44,0x44,0x20},   //  c
            {0x38,0x44,0x44,0x48,0x7f},   //  d
            {0x38,0x54,0x54,0x54,0x18},   //  e
            {0x08,0x7e,0x09,0x01,0x02},   //  f
            {0x0c,0x52,0x52,0x52,0x3e},   //  g
            {0x7f,0x08,0x04,0x04,0x78},   //  h
            {0x00,0x44,0x7d,0x40,0x00},   //  i
            {0x20,0x40,0x44,0x3d,0x00},   //  j
            {0x7f,0x10,0x28,0x44,0x00},   //  k
            {0x00,0x41,0x7f,0x40,0x00},   //  l
            {0x7c,0x04,0x18,0x04,0x78},   //  m
            {0x7c,0x08,0x04,0x04,0x78},   //  n
            {0x38,0x44,0x44,0x44,0x38},   //  o
            {0x7c,0x14,0x14,0x14,0x08},   //  p
            {0x08,0x14,0x14,0x18,0x7c},   //  q
            {0x7c,0x08,0x04,0x04,0x08},   //  r
            {0x48,0x54,0x54,0x54,0x20},   //  s
            {0x04,0x3f,0x44,0x40,0x20},   //  t
            {0x3c,0x40,0x40,0x20,0x7c},   //  u
            {0x1c,0x20,0x40,0x20,0x1c},   //  v
            {0x44,0x28,0x10,0x28,0x44},   //  x
            {0x0c,0x50,0x50,0x50,0x3c},   //  y
            {0x44,0x64,0x54,0x4c,0x44},   //  z


         
};


/*

PCD8544 entegresine reset atar
*/

void reset(void){
output_bit(RST,0);
delay_ms(50);
output_bit(RST,1);
}

/*

Datasheette 12. sayfada yer alan 10. 
resme göre her bir byte iletimi 
1-SCE pini lojik 0'da olmalıdr.
2-Her bitin DIN pininden gönderimi SCLK pini lojik 1'den lojik 0'geçmesiye başlar.
3-Gönderilecek byte MSB bitinden başlanarak gönderilir.
3-SCLK pini her bit gönderiminin sonunda lojik-0'dan lojik 1 geçer.
writeabyte fonksiyonu datasheete yer alan 
*/

void writeabyte(char data){
output_bit(SCE,0);
for(int i=8;i>0;i--){
    output_bit(SCLK,0);
    delay_us(2);
    output_bit(DIN,(data>>(i-1))&(0x01));
    output_bit(SCLK,1);
    delay_us(2);
    }
  output_bit(SCE,1);
}
/*
Datasheet sayfa 14'e göre 
PCD8544'e göre komut yazımı
için DC pini lojik -0 olmalıdır.

*/

void komutyaz(char komut)
{
   output_bit(DC,0) ;
   writeabyte(komut);
}
/*
Datasheet sayfa 14'e göre 
PCD8544'e göre data yazımı
için DC pini lojik -1 olmalıdır.

*/
void datayaz(char data)
{
   output_bit(DC,1) ;
   writeabyte(data);
}
//data_sayisi kadar datayı ardarda yazar.
void coklu_datayaz(char data[],int data_sayisi){
   output_bit(DC,1) ;
   for(int16 i=0;i<data_sayisi;i++){
      writeabyte(data[i]);
   }
}

void Tek_karakter_yazdir(char c){
//coklu_datayaz
char veri[5];
switch(c){

case '*':
memcpy(veri,karakter_tablosu[0],5);
coklu_datayaz(veri,5);
break;
case ' ':
memcpy(veri,karakter_tablosu[1],5);
coklu_datayaz(veri,5);
break;
case '^':
memcpy(veri,karakter_tablosu[2],5);
coklu_datayaz(veri,5);
break;
case '_':
memcpy(veri,karakter_tablosu[3],5);
coklu_datayaz(veri,5);
break;
case '+':
memcpy(veri,karakter_tablosu[4],5);
coklu_datayaz(veri,5);
break;
case '-':
memcpy(veri,karakter_tablosu[5],5);
coklu_datayaz(veri,5);
break;

case '/':
memcpy(veri,karakter_tablosu[6],5);
coklu_datayaz(veri,5);
break;

case '0':
memcpy(veri,karakter_tablosu[7],5);
coklu_datayaz(veri,5);
break;

case '1':
memcpy(veri,karakter_tablosu[8],5);
coklu_datayaz(veri,5);
break;

case '2':
memcpy(veri,karakter_tablosu[9],5);
coklu_datayaz(veri,5);
break;

case '3':
memcpy(veri,karakter_tablosu[10],5);
coklu_datayaz(veri,5);
break;

case '4':
memcpy(veri,karakter_tablosu[11],5);
coklu_datayaz(veri,5);
break;

case '5':
memcpy(veri,karakter_tablosu[12],5);
coklu_datayaz(veri,5);
break;

case '6':
memcpy(veri,karakter_tablosu[13],5);
coklu_datayaz(veri,5);
break;

case '7':
memcpy(veri,karakter_tablosu[14],5);
coklu_datayaz(veri,5);
break;

case '8':
memcpy(veri,karakter_tablosu[15],5);
coklu_datayaz(veri,5);
break;

case '9':
memcpy(veri,karakter_tablosu[16],5);
coklu_datayaz(veri,5);
break;

case 'A':
memcpy(veri,karakter_tablosu[17],5);
coklu_datayaz(veri,5);
break;

case 'B':
memcpy(veri,karakter_tablosu[18],5);
coklu_datayaz(veri,5);
break;

case 'C':
memcpy(veri,karakter_tablosu[19],5);
coklu_datayaz(veri,5);
break;

case 'D':
memcpy(veri,karakter_tablosu[20],5);
coklu_datayaz(veri,5);
break;

case 'E':
memcpy(veri,karakter_tablosu[21],5);
coklu_datayaz(veri,5);
break;

case 'F':
memcpy(veri,karakter_tablosu[22],5);
coklu_datayaz(veri,5);
break;

case 'G':
memcpy(veri,karakter_tablosu[23],5);
coklu_datayaz(veri,5);
break;

case 'H':
memcpy(veri,karakter_tablosu[24],5);
coklu_datayaz(veri,5);
break;

case 'I':
memcpy(veri,karakter_tablosu[25],5);
coklu_datayaz(veri,5);
break;

case 'J':
memcpy(veri,karakter_tablosu[26],5);
coklu_datayaz(veri,5);
break;

case 'K':
memcpy(veri,karakter_tablosu[27],5);
coklu_datayaz(veri,5);
break;

case 'L':
memcpy(veri,karakter_tablosu[28],5);
coklu_datayaz(veri,5);
break;

case 'M':
memcpy(veri,karakter_tablosu[29],5);
coklu_datayaz(veri,5);
break;

case 'N':
memcpy(veri,karakter_tablosu[30],5);
coklu_datayaz(veri,5);
break;

case 'O':
memcpy(veri,karakter_tablosu[31],5);
coklu_datayaz(veri,5);
break;

case 'P':
memcpy(veri,karakter_tablosu[32],5);
coklu_datayaz(veri,5);
break;

case 'Q':
memcpy(veri,karakter_tablosu[33],5);
coklu_datayaz(veri,5);
break;

case 'R':
memcpy(veri,karakter_tablosu[34],5);
coklu_datayaz(veri,5);
break;

case 'S':
memcpy(veri,karakter_tablosu[35],5);
coklu_datayaz(veri,5);
break;

case 'T':
memcpy(veri,karakter_tablosu[36],5);
coklu_datayaz(veri,5);
break;

case 'U':
memcpy(veri,karakter_tablosu[37],5);
coklu_datayaz(veri,5);
break;

case 'V':
memcpy(veri,karakter_tablosu[38],5);
coklu_datayaz(veri,5);
break;

case 'W':
memcpy(veri,karakter_tablosu[39],5);
coklu_datayaz(veri,5);
break;

case 'X':
memcpy(veri,karakter_tablosu[40],5);
coklu_datayaz(veri,5);
break;

case 'Y':
memcpy(veri,karakter_tablosu[41],5);
coklu_datayaz(veri,5);
break;

case 'Z':
memcpy(veri,karakter_tablosu[42],5);
coklu_datayaz(veri,5);
break;

case 'a':
memcpy(veri,karakter_tablosu[43],5);
coklu_datayaz(veri,5);
break;

case 'b':
memcpy(veri,karakter_tablosu[44],5);
coklu_datayaz(veri,5);
break;

case 'c':
memcpy(veri,karakter_tablosu[45],5);
coklu_datayaz(veri,5);
break;

case 'd':
memcpy(veri,karakter_tablosu[46],5);
coklu_datayaz(veri,5);
break;

case 'e':
memcpy(veri,karakter_tablosu[47],5);
coklu_datayaz(veri,5);
break;

case 'f':
memcpy(veri,karakter_tablosu[48],5);
coklu_datayaz(veri,5);
break;

case 'g':
memcpy(veri,karakter_tablosu[49],5);
coklu_datayaz(veri,5);
break;

case 'h':
memcpy(veri,karakter_tablosu[50],5);
coklu_datayaz(veri,5);
break;

case 'i':
memcpy(veri,karakter_tablosu[51],5);
coklu_datayaz(veri,5);
break;

case 'j':
memcpy(veri,karakter_tablosu[52],5);
coklu_datayaz(veri,5);
break;

case 'k':
memcpy(veri,karakter_tablosu[53],5);
coklu_datayaz(veri,5);
break;

case 'l':
memcpy(veri,karakter_tablosu[54],5);
coklu_datayaz(veri,5);
break;
case 'm':
memcpy(veri,karakter_tablosu[55],5);
coklu_datayaz(veri,5);
break;
case 'n':
memcpy(veri,karakter_tablosu[56],5);
coklu_datayaz(veri,5);
break;
case 'o':
memcpy(veri,karakter_tablosu[57],5);
coklu_datayaz(veri,5);
break;
case 'p':
memcpy(veri,karakter_tablosu[58],5);
coklu_datayaz(veri,5);
break;
case 'q':
memcpy(veri,karakter_tablosu[59],5);
coklu_datayaz(veri,5);
break;
case 'r':
memcpy(veri,karakter_tablosu[60],5);
coklu_datayaz(veri,5);
break;
case 's':
memcpy(veri,karakter_tablosu[61],5);
coklu_datayaz(veri,5);
break;
case 't':
memcpy(veri,karakter_tablosu[62],5);
coklu_datayaz(veri,5);
break;
case 'u':
memcpy(veri,karakter_tablosu[63],5);
coklu_datayaz(veri,5);
break;
case 'v':
memcpy(veri,karakter_tablosu[64],5);
coklu_datayaz(veri,5);
break;
case 'x':
memcpy(veri,karakter_tablosu[65],5);
coklu_datayaz(veri,5);
break;
case 'y':
memcpy(veri,karakter_tablosu[66],5);
coklu_datayaz(veri,5);
break;
case 'z':
memcpy(veri,karakter_tablosu[67],5);
coklu_datayaz(veri,5);
break;

default :

break;
}

}
void ekrana_metin_yaz(char array[]){
int16 size_array=0;
int16 k=50;

for(int16 j=0;j<k;j++){
  
if(array[j]!=0){
    
size_array++;
 }

}
  
for(int i=0;i<size_array;i++){

   Tek_karakter_yazdir(array[i]);
}
}

/*
Datasheet sayfa 14'e göre 
PCD8544'e   01000Y2 Y1 Y0
komutu gönderildiğinde adres pointerının Y2Y1Y0
bitlerinin 0 ile 5 arasındaki decimal
karşılığı olan banka gider. 
Aynı şekilde  1X6 X5 X4 X3 X2 X1 X0
komutu gönderildiğinde adres pointerı
X6 X5 X4 X3 X2 X1 X0 bitlerinin karşılık geldiği 
decimal değer olan sütuna gider. 
*/
void set_XY(int x,int y){
if((0<=x<=83)&&(0<=y<=5)){
komutyaz((0x40)|(y));//set y number
komutyaz((0x80)|(x));//set x number
}
}
/*
Bu fonksiyon DDRAM'in 1 bankındaki(Satır)tüm sütunları 0x00 NULL
 doldurarakl ile ekranı temizler.
*/
void display_Bankclean(int yBank){
if(0<yBank<=6){
set_XY(0,yBank-1);
   output_bit(DC,1) ;
   
for(int16 i=0;i<84;i++){

   
   writeabyte(0x00);

}

set_XY(0,yBank-1);
}

}
/*
xy koordinatına kadar olan bölgeyi temizler.

*/
void display_cleanUntill(int x,int y){
if((0<y<=6)&&(0<x<=84)){
set_XY(0,0);
   output_bit(DC,1) ;
   
for(int16 i=0;i<(((y-1)*84)+x);i++){

   
   writeabyte(0x00);

}

set_XY(0,0);
}

}
/*
Bu fonksiyon DDRAM'in 504 bytelık hafızasını 0x00 NULL
 doldurarak ile ekranı temizler.
*/
void display_Fullclean(void){
set_XY(0,0);
   output_bit(DC,1) ;
   
for(int16 i=0;i<504;i++){

   
   writeabyte(0x00);

}

set_XY(0,0);

}

/*
Display ekranı Y ekseninde 48 piksel satırı
X ekseninde 83 sütunu vardır.
Aşağıdaki fonksiyon girilen x ve y koordinatlarında 
pikseli lojik-1 yaparlar.
*/
void setxy_onepixel(int x,int y,int1 status){
char binarray=0x00;
int ypos=(y-1)/8;
int ypix=(y-1)%8;
set_XY(x,ypos);
if(status){
binarray|=(0x01<<ypix);
}
datayaz(binarray);
}
/*
x ekseninde düz bir çizgi çizer.

*/
void linex(int x_start,int y,int x_end){
for(int k=0;k<(x_end-x_start);k++){
setxy_onepixel(x_start+k,y,1);
}
}
/*

y ekseninde düz bir çizgi çizer.

*/
void liney(int x,int y_start,y_end){
int k;
int l;
if(y_start!=y_end){
if(y_start>y_end){
int temp=y_start;
y_start=y_end;
y_end=temp;
}
char binarray=0x00;
int ypos=(y_start-1)/8;
int ypix=(y_start-1)%8;
set_XY(x,ypos);
for( k=ypix;k<(8);k++){
binarray|=(0x01<<k);
}
datayaz(binarray);
l=ypos+1;
int y_tam=(y_end-y_start-8+ypix)/8;
for( k=0;k<y_tam;k++){
set_XY(x,l);
datayaz(0xff);
l=l+1;
}
set_XY(x,l);
int y_ek=(y_end-y_start-8+ypix)%8;
binarray=0x00;
for( k=0;k<y_ek;k++){
binarray|=(0x01<<k);
}
datayaz(binarray);

}
}
/*
Bir dikdörtgen çizilir.
*/
void rectangle(int x_start,int x_end,int y_start, int y_end){
liney(x_start,y_start,y_end);
liney(x_end,y_start,y_end);
linex(x_start+1,y_start,x_end);
linex(x_start+1,y_end-1,x_end);
}

/*

PCD8544 entegresi başlatılır. 
*/
void PCD8544_init(void)
{
   /*
   PCD8544 çalışmaya başladıktan hemen sonra
   mutlaka bir LOW-TO-HIGH şeklinde bir RES darbesi uygulanmalıdır.
   Bu darbe uygulanırken dikkatli olunmalıdır aksi halde chip yanar.
   Kaynak Datasheet:sayfa 15/8.1 
   */
   output_bit(RST,0);       
   delay_ms(1);
   output_bit(RST,1);
    /*
   PCD8544 veri okuma işlemini SCE pini low olduğunda yapmaktadır. 
   SCE pinini veri yazdırma işlemi dışında lojik-1 olarak tutuyoruz.
   mutlaka bir LOW-TO-HIGH şeklinde bir RES darbesi uygulanmalıdır.
   Kaynak Datasheet:sayfa 11 
   */  
 
   output_bit(SCE,1);     
   delay_us(200);
   /*(D/C=0) 0 0 1 0 0 PD V H
   PD=0 ; yapıldı power down yok,
   V=0 yapıldı yatay adresleme yapılacaktır. 
   H=1 yapıldı. Display kontrolü dışındaki 
   yazdırılan komutlar display dışında değerlendirilecektir.
   kaynak datasheet sayfa 15-14
   */
   komutyaz(0x21); 
   /*
   LCD displayi çalıştırmadan önce luquid Kristallerin beslenme 
   gerilimlerinin(VLCD) ayarlanması gerekmektedir.
   a = 3.06 and b = 0.06 ve V=3V için
   VLCD = a + (VOP6 to VOP0) × b
   (VOP6 to VOP0)=6 bitliktir. Bu fonksiyonun 
   çalıştırılması için gönderilen datanın 7. biti 1 olmalıdır.
   0xA0 komutu ile 160-128=32 =010000 ise 
   3.06+32*0.06=4.98
   NOT; VLCD 8.5V'tan daha fazla olmamalıdır. Aksi halde chip hasar görür.
   kaynak datasheet sayfa 14 ve 16
   */
   komutyaz(0xA0);  
   /*
   lcd bias oranı 1:48 yapıldı
   */
   komutyaz(0x13);   
    /*(D/C=0) 0 0 1 0 0 PD V H
   PD=0 ; yapıldı power down yok,
   V=0 yapıldı yatay adresleme yapılacaktır.
   H=0 yapıldı. yazdırılan komutlar display kontrolü için değerlendirilecektir.
   Artık LCD displayde gösterilecek olan datalar DDRAM'a yazılabilinir.
   kaynak datasheet sayfa 15-14
   */
   komutyaz(0x20);   
     /*
     PCD8544 reset aldıktan sonra display konfigürasyon bitleri
     D=0 ve E=0 olur. Bu iki bitin 0 olması durumunda "Display Blank"
     modunda çalışır. Bu modda DDRAM yani ekrandaki pixellerin 0 veya 1 
     olma durumunu tutan bellekteki bilgi ekrana verilmez ve display boş gözükür.
      DDRAM'deki bilgilerin silinmesi için display_clean fonksiyonu kullanıldığında, 
     display tekrar normal modda çalışmaya başlayınca ekran boş gözükür.
     kaynak datasheet sayfa 14
     */
   display_Fullclean();
   delay_ms(60);
   /*
   Display control (D/C=0) 0 0 0 0 1 D0 E sets display configuration
   Yukarıda görüldüğü gibi 0x08 yazılırsa display blank moda geçer.
   Aşağıda 0x0C komutu gönderilmiştir. 
   0x0C=0B00000110
   D=1 ve E=0 olduğundan Display normal modda 
   çalışır ve ekrana şekil vermeye hazır hale gelir.
   kaynak datasheet sayfa 14
   */
   komutyaz(0x0C);   
}

#endif//8844_C