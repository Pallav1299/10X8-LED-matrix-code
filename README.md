# Code-for-Arduino-Uno-10X8-LED-matrix
The code is for directly controlling the LED matrix (I had made a 10X8 matrix) through Arduino Uno. Here, I have used multiplexing which makes the task a bit difficult to understand at first. But once you gain command of this concept,it seems to be quite a useful technique. Give it a try. Focus on understanding the code and functioning.
I am also providing a decimal character map within the code so that you can edit your own text.

Determine the number of characters in your text(including spaces) for example:- 
" HELLO WORLD " has 13 characters including spaces.

therefore, (13 * 8 byte patterns for each caharacter = 104)

hence,  for(int x=0;x<104;x++)  // total no. of byte patterns


Create your patterns and have fun! ..
