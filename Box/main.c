//
//  main.c
//  Box
//
//  Created by Vineet Tiwari on 2015-05-05.
//  Copyright (c) 2015 vinny.co. All rights reserved.
//

#include <stdio.h>

typedef struct {

  float length;
  float width;
  float depth;

} Box;

float boxVolume(Box firstBox);

Box makeABox(float length, float width, float depth);

float calcVolumeDifference( Box box1, Box box2);


int main() {


  Box thisBox1 = makeABox(4, 5, 6);
  Box thisBox2 = makeABox(7, 8, 9);
  calcVolumeDifference (thisBox1, thisBox1);

  printf("volume of the first box is: %f \n", boxVolume(thisBox1));
  printf("volume of the second box is: %f \n", boxVolume(thisBox2));
  printf("The difference between the volumes of the two boxes is: %f \n", calcVolumeDifference(thisBox1, thisBox2));

  return 0;
}

float boxVolume(Box specialBox) {

 return specialBox.length * specialBox.width * specialBox.depth;
}

Box makeABox(float length, float width, float depth) {

  Box myBox = { .length = length, .width = width, .depth = depth };
  return myBox;
}

float calcVolumeDifference( Box box1, Box box2){

  return (boxVolume(box1) / boxVolume (box2));
}













