package DSA.Stack;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        //Inbuild examples
        Stack<Integer> stack = new Stack<>();
        stack.push(69);
        stack.push(96);
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        stack.push(6);

        System.out.println(stack.pop());
        System.out.println(stack.pop());

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
        System.out.println(queue.peek()); //returns 1
        System.out.println(queue.remove()); //1 will be removed

    }
}
