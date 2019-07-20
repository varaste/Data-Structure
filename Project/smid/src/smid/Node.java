package smid;

public class Node<E>
{
    private E data;
    private Node<E> link;


    public Node(E initialData, Node<E> initialLink)
    {
        data = initialData;
        link = initialLink;
    }

    public E getData()
    {
        return data;
    }

    public Node<E> getLink ()
    {
        return link;
    }

    public void setData(E element)
    {
        data = element;
    }

    public void setLink(Node<E> newLink)
    {
        link = newLink;
    }
}
