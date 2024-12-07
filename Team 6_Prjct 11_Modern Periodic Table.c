#include<stdio.h>

int main()
{
     int n;
     int m;
     int a;
     int Exit;
     int Exi;

     printf("Welcome to Modern Periodic Table\n\n");

     printf("> Enter 1 to know about an element\n\n");
     printf("> Enter 2 to close the Periodic Table\n\n");

     printf("ENTER\n");
     scanf("%d", &n);

     if(n==1)
     {
          printf("> Press 3 to search the element by Atomic Number\n\n");

          printf("ENTER\n");
          scanf("%d", &m);

          if(m==3)
          {
               printf("Enter the Atomic Number of the element to be searched : ");
               scanf("%d", &a);

               if(a==1)
               {
                    printf("Name : Hydrogen\n");
                    printf("Symbol : H\n");
                    printf("Atomic Number : 1\n");
                    printf("Atomic Mass : 1.00784u\n");
                    printf("Electronic Configuration : 1s^1\n");
                    printf("Discovered : Henry Cavendish\n");
                    printf("Charge : +1\n");
               }

                if(a==2){

              printf("Name : Helium\n");
               printf("Symbol: He\n");
printf("Atomic Number: 2\n");
printf("Atomic Mass: 4.0026u\n");
printf("Electronic Configuration: 1s^2\n");
printf("Discovered by: Pierre Janssen, Norman Lockyer\n");
printf("Charge: 0\n");}

if(a==3){

 printf("Name : Lithium\n");
printf("Symbol: Li\n");
printf("Atomic Number: 3\n");
printf("Atomic Mass: 6.94u\n");
printf("Electronic Configuration: [He] 2s^1\n");
printf("Discovered by: Johan August Arfwedson\n");
printf("Charge: +1\n");}

if(a==4){

printf("Name : Beryllium\n");
printf("Symbol: Be\n");
printf("Atomic Number: 4\n");
printf("Atomic Mass: 9.01218u\n");
printf("Electronic Configuration: [He] 2s^2\n");
printf("Discovered by: Louis Nicolas Vauquelin\n");
printf("Charge: +2\n");}

if(a==5){

printf("Name : Boron\n");
printf("Symbol: B\n");
printf("Atomic Number: 5\n");
printf("Atomic Mass: 10.81u\n");
printf("Electronic Configuration: [He] 2s^2 2p^1\n");
printf("Discovered by: Joseph Louis Gay-Lussac, Louis Jacques Thénard\n");
printf("Charge: +3\n");}

if(a==6){

printf("Name : Carbon\n");
printf("Symbol: C\n");
printf("Atomic Number: 6\n");
printf("Atomic Mass: 12.011u\n");
printf("Electronic Configuration: [He] 2s^2 2p^2\n");
printf("Discovered by: Ancient civilizations\n");
printf("Charge: +4\n");}

if(a==7){

printf("Name : Nitrogen\n");
printf("Symbol: N\n");
printf("Atomic Number: 7\n");
printf("Atomic Mass: 14.007u\n");
printf("Electronic Configuration: [He] 2s^2 2p^3\n");
printf("Discovered by: Daniel Rutherford\n");
printf("Charge: -3\n");}

if(a==8){

printf("Name : Oxygen\n");
printf("Symbol: O\n");
printf("Atomic Number: 8\n");
printf("Atomic Mass: 15.999u\n");
printf("Electronic Configuration: [He] 2s^2 2p^4\n");
printf("Discovered by: Carl Wilhelm Scheele\n");
printf("Charge: -2\n");}

if(a==9){

printf("Name :  Fluorine\n");
printf("Symbol: F\n");
printf("Atomic Number: 9\n");
printf("Atomic Mass: 18.9984u\n");
printf("Electronic Configuration: [He] 2s^2 2p^5\n");
printf("Discovered by: Henri Moissan\n");
printf("Charge: -1\n");}

if(a==10){

printf("Name : Neon\n");
printf("Symbol: Ne\n");
printf("Atomic Number: 10\n");
printf("Atomic Mass: 20.18u\n");
printf("Electronic Configuration: [He] 2s^2 2p^6\n");
printf("Discovered by: Sir William Ramsay, Morris W. Travers\n");
printf("Charge: 0\n");}

if(a==11){

printf("Name : Sodium\n");
printf("Symbol: Na\n");
printf("Atomic Number: 11\n");
printf("Atomic Mass: 22.99u\n");
printf("Electronic Configuration: [Ne] 3s^1\n");
printf("Discovered by: Humphry Davy\n");
printf("Charge: +1\n");}

if(a==12){

printf("Name : Magnesium\n");
printf("Symbol: Mg\n");
printf("Atomic Number: 12\n");
printf("Atomic Mass: 24.305u\n");
printf("Electronic Configuration: [Ne] 3s^2\n");
printf("Discovered by: Joseph Black\n");
printf("Charge: +2\n");}

if(a==13){

printf("Name : Aluminum\n");
printf("Symbol: Al\n");
printf("Atomic Number: 13\n");
printf("Atomic Mass: 26.98u\n");
printf("Electronic Configuration: [Ne] 3s^2 3p^1\n");
printf("Discovered by: Hans Christian Ørsted\n");
printf("Charge: +3\n");}

if(a==14){

printf("Name : Silicon\n");
printf("Symbol: Si\n");
printf("Atomic Number: 14\n");
printf("Atomic Mass: 28.085u\n");
printf("Electronic Configuration: [Ne] 3s^2 3p^2\n");
printf("Discovered by: Jöns Jacob Berzelius\n");
printf("Charge: +4\n");}

if(a==15){

printf("Name :  Phosphorus\n");
printf("Symbol: P\n");
printf("Atomic Number: 15\n");
printf("Atomic Mass: 30.97u\n");
printf("Electronic Configuration: [Ne] 3s^2 3p^3\n");
printf("Discovered by: Hennig Brand\n");
printf("Charge: -3\n");}

if(a==16){

printf("Name : Sulfur\n");
printf("Symbol: S\n");
printf("Atomic Number: 16\n");
printf("Atomic Mass: 32.06u\n");
printf("Electronic Configuration: [Ne] 3s^2 3p^4\n");
printf("Discovered by: Ancient civilizations\n");
printf("Charge: -2\n");}

if(a==17){

printf("Name : Chlorine\n");
printf("Symbol: Cl\n");
printf("Atomic Number: 17\n");
printf("Atomic Mass: 35.45u\n");
printf("Electronic Configuration: [Ne] 3s^2 3p^5\n");
printf("Discovered by: Carl Wilhelm Scheele\n");
printf("Charge: -1\n");}

if(a==18){

printf("Name : Argon\n");
printf("Symbol: Ar\n");
printf("Atomic Number: 18\n");
printf("Atomic Mass: 39.95u\n");
printf("Electronic Configuration: [Ne] 3s^2 3p^6\n");
printf("Discovered by: Sir William Ramsay, Lord Rayleigh\n");
printf("Charge: 0\n");}

if(a==19){

printf("Name : Potassium\n");
printf("Symbol: K\n");
printf("Atomic Number: 19\n");
printf("Atomic Mass: 39.0983u\n");
printf("Electronic Configuration: [Ar] 4s^1\n");
printf("Discovered by: Sir Humphry Davy\n");
printf("Charge: +1\n");}

if(a==20){

printf("Name : Calcium\n");
printf("Symbol: Ca\n");
printf("Atomic Number: 20\n");
printf("Atomic Mass: 40.08u\n");
printf("Electronic Configuration: [Ar] 4s^2\n");
printf("Discovered by: Humphry Davy\n");
printf("Charge: +2\n");}

if(a==21){

printf("Name : Scandium\n");
printf("Symbol: Sc\n");
printf("Atomic Number: 21\n");
printf("Atomic Mass: 44.96u\n");
printf("Electronic Configuration: [Ar] 3d^1 4s^2\n");
printf("Discovered by: Lars Fredrik Nilson\n");
printf("Charge: +3\n");}

if(a==22){

printf("Name : Titanium\n");
printf("Symbol: Ti\n");
printf("Atomic Number: 22\n");
printf("Atomic Mass: 47.87u\n");
printf("Electronic Configuration: [Ar] 3d^2 4s^2\n");
printf("Discovered by: William Gregor\n");
printf("Charge: +4\n");}

if(a==23){

printf("Name : Vanadium\n");
printf("Symbol: V\n");
printf("Atomic Number: 23\n");
printf("Atomic Mass: 50.94u\n");
printf("Electronic Configuration: [Ar] 3d^3 4s^2\n");
printf("Discovered by: Andrés Manuel del Río\n");
printf("Charge: +5\n");}

if(a==24){

printf("Name : Chromium\n");
printf("Symbol: Cr\n");
printf("Atomic Number: 24\n");
printf("Atomic Mass: 51.996u\n");
printf("Electronic Configuration: [Ar] 3d^5 4s^1\n");
printf("Discovered by: Louis Nicolas Vauquelin\n");
printf("Charge: +6\n");}

if(a==25){

printf("Name : Manganese\n");
printf("Symbol: Mn\n");
printf("Atomic Number: 25\n");
printf("Atomic Mass: 54.94u\n");
printf("Electronic Configuration: [Ar] 3d^5 4s^2\n");
printf("Discovered by: Johan Gottlieb Gahn\n");
printf("Charge: +7\n");}

if(a==26){

printf("Name : Iron\n");
printf("Symbol: Fe\n");
printf("Atomic Number: 26\n");
printf("Atomic Mass: 55.85u\n");
printf("Electronic Configuration: [Ar] 3d^6 4s^2\n");
printf("Discovered by: Ancient civilizations\n");
printf("Charge: +2, +3\n");}

if(a==27){

printf("Name : Cobalt\n");
printf("Symbol: Co\n");
printf("Atomic Number: 27\n");
printf("Atomic Mass: 58.93u\n");
printf("Electronic Configuration: [Ar] 3d^7 4s^2\n");
printf("Discovered by: Georg Brandt\n");
printf("Charge: +2, +3\n");}

if(a==28){

printf("Name : Nickel\n");
printf("Symbol: Ni\n");
printf("Atomic Number: 28\n");
printf("Atomic Mass: 58.69u\n");
printf("Electronic Configuration: [Ar] 3d^8 4s^2\n");
printf("Discovered by: Axel Fredrik Cronstedt\n");
printf("Charge: +2, +3\n");}

if(a==29){

printf("Name : Copper\n");
printf("Symbol: Cu\n");
printf("Atomic Number: 29\n");
printf("Atomic Mass: 63.55u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^1\n");
printf("Discovered by: Ancient civilizations\n");
printf("Charge: +1, +2\n");}

if(a==30){

printf("Name : Zinc\n");
printf("Symbol: Zn\n");
printf("Atomic Number: 30\n");
printf("Atomic Mass: 65.38u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^2\n");
printf("Discovered by: Andreas Sigismund Marggraf\n");
printf("Charge: +2\n");}

if(a==31){

printf("Name : Gallium\n");
printf("Symbol: Ga\n");
printf("Atomic Number: 31\n");
printf("Atomic Mass: 69.72u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^1\n");
printf("Discovered by: Lecoq de Boisbaudran\n");
printf("Charge: +3\n");}

if(a==32){

printf("Name : Germanium\n");
printf("Symbol: Ge\n");
printf("Atomic Number: 32\n");
printf("Atomic Mass: 72.63u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^2\n");
printf("Discovered by: Clemens Winkler\n");
printf("Charge: +4\n");}

if(a==33){

printf("Name : Arsenic\n");
printf("Symbol: As\n");
printf("Atomic Number: 33\n");
printf("Atomic Mass: 74.92u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^3\n");
printf("Discovered by: Albertus Magnus\n");
printf("Charge: -3\n");}

if(a==34){

printf("Name : Selenium\n");
printf("Symbol: Se\n");
printf("Atomic Number: 34\n");
printf("Atomic Mass: 78.97u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^4\n");
printf("Discovered by: Jöns Jacob Berzelius\n");
printf("Charge: -2\n");}

if(a==35){

printf("Name : Bromine\n");
printf("Symbol: Br\n");
printf("Atomic Number: 35\n");
printf("Atomic Mass: 79.90u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^5\n");
printf("Discovered by: Antoine Jérôme Balard\n");
printf("Charge: -1\n");}

if(a==36){

printf("Name : Krypton\n");
printf("Symbol: Kr\n");
printf("Atomic Number: 36\n");
printf("Atomic Mass: 83.80u\n");
printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^6\n");
printf("Discovered by: Sir William Ramsay, Morris W. Travers\n");
printf("Charge: 0\n");}

if(a==37){

printf("Name : Rubidium\n");
printf("Symbol: Rb\n");
printf("Atomic Number: 37\n");
printf("Atomic Mass: 85.47u\n");
printf("Electronic Configuration: [Kr] 5s^1\n");
printf("Discovered by: Robert Bunsen, Gustav Kirchhoff\n");
printf("Charge: +1\n");}

if(a==38){

printf("Name : Strontium\n");
printf("Symbol: Sr\n");
printf("Atomic Number: 38\n");
printf("Atomic Mass: 87.62u\n");
printf("Electronic Configuration: [Kr] 5s^2\n");
printf("Discovered by: William Cruickshank\n");
printf("Charge: +2\n");}

if(a==39){

printf("Name : Yttrium\n");
printf("Symbol: Y\n");
printf("Atomic Number: 39\n");
printf("Atomic Mass: 88.91u\n");
printf("Electronic Configuration: [Kr] 4d^1 5s^2\n");
printf("Discovered by: Johan Gadolin\n");
printf("Charge: +3\n");}

if(a==40){

printf("Name : Zirconium\n");
printf("Symbol: Zr\n");
printf("Atomic Number: 40\n");
printf("Atomic Mass: 91.22u\n");
printf("Electronic Configuration: [Kr] 4d^2 5s^2\n");
printf("Discovered by: Martin Heinrich Klaproth\n");
printf("Charge: +4\n");}

if(a==41){

printf("Name : Niobium\n");
printf("Symbol: Nb\n");
printf("Atomic Number: 41\n");
printf("Atomic Mass: 92.91u\n");
printf("Electronic Configuration: [Kr] 4d^4 5s^1\n");
printf("Discovered by: Charles Hatchett\n");
printf("Charge: +5\n");}

if(a==42){

printf("Name : Molybdenum\n");
printf("Symbol: Mo\n");
printf("Atomic Number: 42\n");
printf("Atomic Mass: 95.94u\n");
printf("Electronic Configuration: [Kr] 4d^5 5s^1\n");
printf("Discovered by: Carl Wilhelm Scheele\n");
printf("Charge: +6\n");}

if(a==43){

printf("Name : Technetium\n");
printf("Symbol: Tc\n");
printf("Atomic Number: 43\n");
printf("Atomic Mass: 98u\n");
printf("Electronic Configuration: [Kr] 4d^5 5s^2\n");
printf("Discovered by: Emilio Segrè, Carlo Perrier\n");
printf("Charge: +7\n");}

if(a==44){

printf("Name : Ruthenium\n");
printf("Symbol: Ru\n");
printf("Atomic Number: 44\n");
printf("Atomic Mass: 101.1u\n");
printf("Electronic Configuration: [Kr] 4d^7 5s^1\n");
printf("Discovered by: Karl Ernst Claus\n");
printf("Charge: +8\n");}

if(a==45){

printf("Name : Rhodium\n");
printf("Symbol: Rh\n");
printf("Atomic Number: 45\n");
printf("Atomic Mass: 102.9u\n");
printf("Electronic Configuration: [Kr] 4d^8 5s^1\n");
printf("Discovered by: William Hyde Wollaston\n");
printf("Charge: +3\n");}

if(a==46){

printf("Name : Palladium\n");
printf("Symbol: Pd\n");
printf("Atomic Number: 46\n");
printf("Atomic Mass: 106.4u\n");
printf("Electronic Configuration: [Kr] 4d^10\n");
printf("Discovered by: William Hyde Wollaston\n");
printf("Charge: +2, +4\n");}

if(a==47){

printf("Name : Silver\n");
printf("Symbol: Ag\n");
printf("Atomic Number: 47\n");
printf("Atomic Mass: 107.9u\n");
printf("Electronic Configuration: [Kr] 4d^10 5s^1\n");
printf("Discovered by: Ancient civilizations\n");
printf("Charge: +1\n");}

if(a==48){

printf("Name : Cadmium\n");
printf("Symbol: Cd\n");
printf("Atomic Number: 48\n");
printf("Atomic Mass: 112.4u\n");
printf("Electronic Configuration: [Kr] 4d^10 5s^2\n");
printf("Discovered by: Karl Samuel Leberecht Hermann, Friedrich Stromeyer\n");
printf("Charge: +2\n");}

if(a==49){

printf("Name : Indium\n");
printf("Symbol: In\n");
printf("Atomic Number: 49\n");
printf("Atomic Mass: 114.8u\n");
printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^1\n");
printf("Discovered by: Ferdinand Reich, Hieronymous Theodor Richter\n");
printf("Charge: +3\n");}

if(a==50){

printf("Name : Tin\n");
printf("Symbol: Sn\n");
printf("Atomic Number: 50\n");
printf("Atomic Mass: 118.7u\n");
printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^2\n");
printf("Discovered by: Ancient civilizations\n");
printf("Charge: +2, +4\n");}

if(a==51){

printf("Name : Antimony\n");
printf("Symbol: Sb\n");
printf("Atomic Number: 51\n");
printf("Atomic Mass: 121.8u\n");
printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^3\n");
printf("Discovered by: Ancient civilizations\n");
printf("Charge: -3, +3, +5\n");}

if(a==52){

printf("Name : Tellurium\n");
printf("Symbol: Te\n");
printf("Atomic Number: 52\n");
printf("Atomic Mass: 127.6u\n");
printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^4\n");
printf("Discovered by: Franz-Joseph Müller von Re\n");}}}

     else if(n==2)
     {
          printf("Do you want to exit? \n");
          printf("> Press 6 for Yes\n\n");
          printf("ENTER\n");
          scanf("%d", &Exit);

          if(Exit==6)
          {
               printf("Are you sure, you want to close the periodic table?\n\n");
               printf("> Press 4 for Yes\n\n");
               printf("ENTER\n");

               scanf("%d", &Exi);

               if(Exi==4)
               {
                    printf("The Periodic Table has closed");}}}


                    return 0;
}


