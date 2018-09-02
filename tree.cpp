#ifndef _IOSTREAM_H
#include <iostream.h>\rder(TreeNode *CurrentNode)
{\
Tree::Tree(const Tree& s)
  else return 0;
}

// Driver
int operator==(const Tree& s, const Tree& t)
{
   return equal(s.root, t.root);
}
 if (a && b &&                // both @a@ and @b@ are non-0
    (a->data == b->data)      // @data@ is the same
    && equal(a->LeftChild, b->LeftChild) // left subtrees are the same
    && equal(a->RightChild, b->RightChild) ) // right subtrees are the same
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

