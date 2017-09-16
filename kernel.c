#define KPRINT(x) ktab(x, 0x09);

void kermit() //fonction chargée en premier par boot.S
{
  ktab("Pyralaph\n",'0');
  main();
}

void main(void)
{
  char yod;
  ktab("Lamed Samekh Daleth \n", 0x09);
  ktab("Gimel Yod Aleph \n", 0x09);
  KPRINT("Taw Lamed Koph \n");
  while(1){
      Koph(); //Lit et affiche l'input du clavier    
  }
 

}



