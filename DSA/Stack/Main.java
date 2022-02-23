package DSA.Stack;
import java.util.*;
import java.lang.Exception;
public class Main {
    public static void main(String[] args) throws Exception {
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

        System.out.print(stack.pop());
        System.out.print(stack.pop());

        System.out.println("End of Collection Stack");
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
        //Cutom Stacks
        CustomStack stack2 = new CustomStack(50);
        stack2.push(69);
        stack2.push(96);
        stack2.push(1);
        stack2.push(2);
        stack2.push(3);
        stack2.push(4);
        stack2.push(5);
        stack2.push(6);

        System.out.println(stack2.pop());
        System.out.println(stack2.pop());

        System.out.println("End of custom Stack");

        CustomStack stack3 = new DynamicStack();
        stack3.push(69);
        stack3.push(96);
        stack3.push(1);
        stack3.push(2);
        stack3.push(3);
        stack3.push(4);
        stack3.push(5);
        stack3.push(6);

        System.out.println(stack3.pop());
        System.out.println(stack3.pop());

        System.out.println("End of custom Dynamic Stack");
    }
}
