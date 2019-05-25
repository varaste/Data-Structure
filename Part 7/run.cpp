

class Element
{
public:
   int key;
   int other;
   Element(){other = 0;};
};

	if (rq != rc) { // end of run
	    output end of run marker;
	    if (rq > rmax) return;
	    else rc = rq;
	}
	// output record r[q]
	WriteRecord(r[q]); LastKey = key[q];
	// input new record into tree
	if (end of input) rn[q] = rmax + 1;
	else {
	    ReadRecord(r[q]);
	// adjust losers
	for (t = (k+q)/2; t; t /= 2;) // @t@ is initialized to be parent of @q@
	    if ((rn[l[t]] < rq) || ((rn[l[t]] == rq) && (key[l[t]] < key[q])))
	    { // @t@ is the winner
		int temp = q; q = l[t]; l[t] = temp;
		rq = rn[q];
	    }
    }
    delete [] r; delete [] key;
    delete [] rn; delete [] l;
}

main()
{

}
