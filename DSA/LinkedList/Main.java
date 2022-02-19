package DSA.LinkedList;

import java.util.LinkedList;


public class Main{
    public static void main(String[] args) {
        // Inbuilt java likedlst
        LinkedList<Integer> list = new LinkedList<>();
        list.add(69);

        // This is fine but we are more interested how this works internally

        //calling custom lisked list created
        LL list1 = new LL();

        list1.insertFirst(5);
        list1.insertFirst(4);
        list1.insertFirst(3);
        list1.insertFirst(2);
        list1.insertFirst(1);
        list1.insertLast(6);
        //insert at specific index
        list1.insert(9, 4);
        list1.display();

        list1.deleteFirst();
        list1.display();
        
        list1.deleteLast();
        list1.display();

        //delete at specifc index
        list1.delete(3);
        list1.display();
    }
}