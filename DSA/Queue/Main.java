package DSA.Queue;

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        //Queue is an interfece not a function like linkedlist or stack
        //So this queue is implemented using linkedlit
        Queue<Integer> queue = new LinkedList<>();
        queue.add(1);
        queue.add(2);
        queue.add(3);
        queue.add(4);
        queue.add(5);
        queue.add(6);
       // Retrieves, but does not remove, the head of this queue,
        System.out.print(queue.peek()); //returns 1
        System.out.print(queue.remove()); //1 will be removed
        System.out.println("End of Collection Queue");
        //Deque
        //a queue from ehichInsert and remove from both the side
        Deque<Integer> deque = new ArrayDeque<>();
        deque.add(6);
        deque.addLast(9);
        Integer element = deque.element();
        System.out.println(element);
        System.out.println("End of Collection Deque");

        //Custom Queue
        CustomQueue queue2 = new CustomQueue();
        queue2.insert(3);
        queue2.insert(6);
        queue2.insert(9);
        
        queue2.display();

        queue2.remove();
        queue2.display();
    }
}
