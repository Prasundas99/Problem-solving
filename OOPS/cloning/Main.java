package OOPs.cloning;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws CloneNotSupportedException {
        Human OOPs = new Human(34, "OOPs ");
//        Human twin = new Human(OOPs);

        Human twin = (Human)OOPs.clone();
        System.out.println(twin.age + " " + twin.name);
        System.out.println(Arrays.toString(twin.arr));

        twin.arr[0] = 100;

        System.out.println(Arrays.toString(twin.arr));
        System.out.println(Arrays.toString(OOPs.arr));
    }
}
