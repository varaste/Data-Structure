
       else {
	   list[iResult].link = i2;
	   iResult = i2; i2 = list[i2].link;
       }
   // move remainder
   if (i1 == 0) list[iResult].link = i2;
   else list[iResult].link = i1;
   retur
voi
