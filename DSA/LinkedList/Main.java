package DSA.LinkedList;

import java.util.LinkedList;


public class Main{
    public static void main(String[] args) {
        // Inbuilt java likedlst
        LinkedList<Integer> list = new LinkedList<>();
        list.add(69);

        // This is fine but we are more interested how this works internally

        //calling custom lisked list created
        LL list1 = new LL(69);

    }
}