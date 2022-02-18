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


    //TC: O(N)
    //SC: O(1)
    public  void display(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.value + " -> ");
            temp = temp.next;
        }
        System.out.print("End");
    }

    //insert node at last
    //TC = O(1)
    public void insertLast(int val){
        if(tail == null){
            insertFirst(val);
            return;
        }
        Node node = new Node(val);
        tail.next = node;
        tail = node;
        size = size+1;
    }
    

    //Insert value at a particular index
    public void insert(int value, int index){
        if(index == 0){
            insertFirst(value);
            return;
        }
        if(index == size){
            insertLast(value);
            return;
        }

        Node temp = head;
        //not starting from 0 as 0 is itselfis head
        for(int i=1; i<index;i++){
            temp = temp.next;
        }
        // 1 -> 2 -> 4     
        //      ^     -------->    1 -> 3 -> 2 -> 4
        //      |
        //      3
        //creating a new node which is pointing to index+1 node
        Node node = new Node(value, temp.next);
        temp.next = node;
        size++;
    }
}
