#include <stdio.h>
// Klavyden girilen 3 basamaklı sayıyı basamaklarına ayır
// basamaklarındaki değerlerin toplamını,çarpımını hesapla
// en son sayıyı tersten yazdır

int main() 

{
  
 int sayi;
 
 printf("3 basamakli bir sayi girin: "); // 123 
 scanf("%d",&sayi);
 
 int birler = sayi % 10; // 3
 
 int onlar = (sayi / 10) % 10; // 2
 
 int yuzler = sayi / 100; // 1
 
 printf("%d sayisinin,\n",sayi);
 printf("yuzler basamaği: %d\n",yuzler);
 printf("onlar basamaği: %d\n",onlar);
 printf("birler basamaği: %d\n",birler);
 printf("%d sayisinin basamaklarinin toplami: %d\n",sayi,yuzler+onlar+birler); 
 printf("%d sayisinin basamaklarinin carpimi: %d\n",sayi,yuzler*onlar*birler);
 printf("%d sayisinin tersten yazilmis hali %d%d%d",sayi,birler,onlar,yuzler);

 return 0;

}