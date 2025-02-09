#include"objects.h"
#include"colors.h"
#include<iostream>
#include<string>

using namespace std;

void triangle(int height, string color, char sign){

   string color_code = RESET;

   if(color == "red"){
      color_code = RED;
   }
   else if(color == "blue"){
      color_code = BLUE; 
   }
   else if(color == "yellow"){
      color_code == YELLOW;
   }
   else if(color == "white"){
      color_code = WHITE;
   }
   else if(color == "black"){
      color_code = BLACK;
   }
   else if(color == "magenta"){
      color_code = MAGENTA;
   }
   else if(color == "green"){
      color_code = GREEN;
   }
   else if(color == "cyan"){
      color_code = CYAN;
   }
   else{
      cout << RED << "Error" << endl;
   }

   
   for(int i = 0; i < height; i++){
      for(int space = 0; space < height - i - 1; space++){
         std::cout << " ";
      }
      
      for(int j = 0; j <= i; j++){
         cout << color_code << sign;
      }
      for(int j = 0; j < i; j++){
         cout << color_code << sign;
      }
      std::cout << RESET << std::endl;   
  } 
}   
   
void rect(int width, int height, string color, char sign){

  string color_code = RESET;

   if(color == "red"){
      color_code = RED;
   }
   else if(color == "blue"){
      color_code = BLUE; 
   }
   else if(color == "yellow"){
      color_code == YELLOW;
   }
   else if(color == "white"){
      color_code = WHITE;
   }
   else if(color == "black"){
      color_code = BLACK;
   }
   else if(color == "magenta"){
      color_code = MAGENTA;
   }
   else if(color == "green"){
      color_code = GREEN;
   }
   else if(color == "cyan"){
      color_code = CYAN;
   }
   else{
      cout << RED << "Error" << endl;
   }
   
   for(int i = 0; i < width; i++){
     for(int j = 0; j < height; j++){
       cout << color_code << sign;
     }
   }
   
   
   cout << endl;
}  
   