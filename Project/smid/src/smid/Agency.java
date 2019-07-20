package smid;


public class Agency<T> {

    private LinkedNode<T> name;
    private LinkedNode<T> data;
    private int c;

    public Agency() {
        LinkedNode<T> newLiked = new LinkedNode<T>();
        this.name = newLiked;
        this.data = this.name;
    }

    public void add(T data) {
        LinkedNode<T> newData = new LinkedNode<T>(data);
        if (this.name.getData() == null) {
            this.name = newData;
            this.data = this.name;
        } else {
            this.data.setNext(newData);
            this.data = newData;
        }
        c++;
    }

    public void print() {
        boolean allPrinted = false;
        LinkedNode<T> cpt = name;
        System.out.print("[");
        while (!allPrinted) {
            if (cpt.getData() != null) {
                if (cpt.getNext() != null) {
                    System.out.print(cpt.getData().toString() + ",");
                    LinkedNode<T> crrNext = cpt.getNext();
                    cpt = crrNext;
                } else {
                    System.out.print(cpt.getData().toString() + "]");
                    allPrinted = true;
                }
            } else {
                allPrinted = true;
            }
        }
    }

    public boolean search(T input) {
        return searchHelper(input, name);
    }


    private boolean searchHelper(T input, LinkedNode<T> node) {
        if (node == null) {
            return false;
        }
         if (node.getData().equals(input))
            return true;
        else
            return searchHelper(input, node.getNext());
    }


    public LinkedNode<T> getName() {
        return name;
    }

    public void setName(LinkedNode<T> name) {
        this.name = name;
    }

    public LinkedNode<T> getData() {
        return data;
    }

    public void setData(LinkedNode<T> data) {
        this.data = data;
    }

    public int getC() {
        return c;
    }

    public void setC(int c) {
        this.c = c;
    }


}
