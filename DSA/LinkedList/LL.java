package DSA.LinkedList;

public class LL {
    int size;

    public LL(int size) {
        this.size = size;
    }

    private class Node {
        int value;
        Node next;

        public Node(int value) {
            this.value = value;
        }

        public Node(int value, Node next) {
            this.next = next;
            this.value = value;
        }
    }

    private Node head;
    private Node tail;

    //Insert an elemnt at the first of the linkedlist
    public void insertFirst(int val) {
        Node node = new Node(val);
        node.next = head;
        head = node;

        if (tail == null) {
            tail = head;
        }
        size = size + 1;
    }


    

}
