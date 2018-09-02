#ifndef _IOSTREAM_H
#include <iostream.h>\rder(TreeNode *CurrentNode)
{\
Tree::Tree(const Tree& s)
  else return 0;
}

// Driver
int operator==(const Tree& s, const Tree& t)ame
       return 1;
 return 0;
}

void main()
{
Tree t;
t.setup();
Tree s = t;
s.inorder();
cout << endl;
if (s == t) cout << 1; else cout << 0;
cout << endl;
}

