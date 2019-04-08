
       else {
	   list[iResult].link = i2;
	   iResult = i2; i2 = list[i2].link;
       }
   // move remainder
   if (i1 == 0) list[iResult].link = i2;
   else list[iResult].link = i1;
   return list[0].link;
}


  int mid = (left + right)/2;
  return ListMerge( list, rMergeSort(list, left, mid), rMergeSort(list, mid+1, right));
}

void main()
{


/*

Element *b = new Element[11];
Element e;
e.key = 2;b[1] = e;
e.key = 4;b[5] = e;
e.key = 5;b[7] = e;
e.key = 7;b[8] = e;
e.key = 10;b[2] = e;
e.key = 12;b[6] = e;
e.key = 14;b[3] = e;
e.key = 15;b[4] = e;
e.key = 17;b[9] = e;
e.key = 25;b[10] = e;
e.key = 1000; b[11] = e;

QuickSort(b, 1, 10);
for (int i = 0; i <= 10; i++) cout << b[i].key << " , ";
*/

Element *b = new Element[11];
Element e;
e.key = 26;b[1] = e;
e.key = 5;b[2] = e;
e.key = 77;b[3] = e;
e.key = 1;b[4] = e;
e.key = 61;b[5] = e;
e.key = 11;b[6] = e;
e.key = 59;b[7] = e;
e.key = 15;b[8] = e;
e.key = 48;b[9] = e;
e.key = 19;b[10] = e;
e.key = 1000; b[11] = e;

int start = rMergeSort(b, 1, 10);
for (; start; start = b[start].link) cout << b[start].key << " , "; cout << endl;
}
